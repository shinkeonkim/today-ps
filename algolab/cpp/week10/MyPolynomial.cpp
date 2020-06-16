#include "MyPolynomial.h"

myPolynomial::myPolynomial(int c, unsigned e) {
    terms.clear();
    degree = e;
    terms.push_back(myTerm(c,e));
}

myPolynomial::myPolynomial(int nTerms, int mono[]) {
    terms.clear();
    degree = 0;
    for(int i = 0; i < nTerms; i++) {
        degree = degree>mono[2*i+1]?degree:mono[2*i+1];
        terms.push_back(myTerm(mono[2*i], (unsigned int)mono[2*i+1]));
    }
    sort(terms.begin(), terms.end());
}

myPolynomial::myPolynomial(const myPolynomial &poly) {
    degree = poly.degree;
    terms.clear();
    for(int i = 0; i < poly.getTerms().size(); i++) {
        terms.push_back(poly.getTerms()[i]);
    }
    sort(terms.begin(), terms.end());
}

vector<myTerm> myPolynomial::getTerms() const {
    return terms;
}

void myPolynomial::setTerms(vector<myTerm> t) {
    terms.clear();
    sort(t.begin(), t.end());
    terms.push_back(t[0]);
    for(int i =1 ;i <t.size(); i++) {
        if(t[i-1].getExp() == t[i].getExp()) {
            int k = t[i-1].getCoeff() + t[i].getCoeff();
            t[i-1].setCoeff(k);
        }
        else {
            terms.push_back(t[i]);
        }
    }

    sort(terms.begin(), terms.end());
}

void myPolynomial::setDegree(int d) {
    degree = d;
}


int myPolynomial::getDegree() const {
    return degree;
}

unsigned myPolynomial::getNumTerms() const{
    return terms.size();
} 

myPolynomial myPolynomial::ddx() const{
    vector<myTerm> ret = {};
    int d = 0;
    for(int i = 0; i < terms.size(); i++) {
        ret.push_back(terms[i].ddx());
        d = d>ret[i].getExp()?d:ret[i].getExp();
    }

    myPolynomial m = myPolynomial(0,0u);
    m.setDegree(d);
    m.setTerms(ret);

    return m;
}

bool myPolynomial::operator==(const myPolynomial &poly) const {
    if(terms.size() != poly.getNumTerms()) return false;
    for(int i = 0; i < terms.size(); i++) {
        if(terms[i] != poly.getTerms()[i]) return false;
    }
    return true;
}

bool myPolynomial::operator!=(const myPolynomial &poly) const {
    if(terms.size() != poly.getNumTerms()) return true;
    for(int i = 0; i < terms.size(); i++) {
        if(terms[i] != poly.getTerms()[i]) return true;
    }
    return false;
}

myPolynomial& myPolynomial::operator+=(const myPolynomial &poly) {
   myPolynomial ret = myPolynomial();
    
    ret.setTerms(terms);
    vector<myTerm> ret1;
    for(int i = 0; i < ret.getTerms().size(); i ++) {
        ret1.push_back(ret.getTerms()[i]);
    }
    vector<myTerm> ret2;
    unsigned int d = 0;


    for(int j = 0; j < poly.getTerms().size(); j++) {
        bool chk = false;
        for(int i = 0; i < ret1.size(); i++) {
            if(ret1[i].getExp() == poly.getTerms()[j].getExp()) {
                int k = ret1[i].getCoeff() + poly.getTerms()[j].getCoeff();
                ret1[i].setCoeff(k);
                if(ret1[i].getCoeff() != 0)
                    d =  d > ret1[i].getExp()?ret1[i].getExp():d;
                chk = true;
            }
        }
        if(!chk) {
            ret2.push_back(poly.getTerms()[j]);
        }
    }

    for(int i = 0; i < ret2.size(); i++) ret1.push_back(ret2[i]);
    ret.setTerms(ret1);
    ret.setDegree(d);

    setDegree(ret.getDegree());
    setTerms(ret.getTerms());
    return *this;
}

myPolynomial& myPolynomial::operator-=(const myPolynomial &poly) {
    myPolynomial ret = myPolynomial();
    
    ret.setTerms(terms);
    vector<myTerm> ret1;
    for(int i = 0; i < ret.getTerms().size(); i ++) {
        ret1.push_back(ret.getTerms()[i]);
    }
    vector<myTerm> ret2;
    unsigned int d = 0;


    for(int j = 0; j < poly.getTerms().size(); j++) {
        bool chk = false;
        for(int i = 0; i < ret1.size(); i++) {
            if(ret1[i].getExp() == poly.getTerms()[j].getExp()) {
                int k = ret1[i].getCoeff() - poly.getTerms()[j].getCoeff();
                ret1[i].setCoeff(k);
                if(ret1[i].getCoeff() != 0)
                    d =  d > ret1[i].getExp()?ret1[i].getExp():d;
                chk = true;
            }
        }
        if(!chk) {
            ret2.push_back(-poly.getTerms()[j]);
        }
    }

    for(int i = 0; i < ret2.size(); i++) ret1.push_back(ret2[i]);
    ret.setTerms(ret1);
    ret.setDegree(d); 

    setDegree(ret.getDegree());
    setTerms(ret.getTerms());
    return *this;
}

myPolynomial& myPolynomial::operator*=(const myPolynomial &poly) {
    myPolynomial ret = myPolynomial(0,0u);
    unsigned int d = 0;
    for(int i = 0; i < getTerms().size(); i++) {
        myPolynomial r = myPolynomial(0,0u);

        for(int j = 0; j < poly.getTerms().size(); j++) {
            myTerm m = getTerms()[i] * poly.getTerms()[j];
            r = r + myPolynomial(m.getCoeff(), m.getExp());
            r.setTerms(r.getTerms());
        }

        ret =  ret + r;
        ret.setTerms(ret.getTerms());
    }
    ret.setTerms(ret.getTerms());
    for(int i = 0; i <ret.getTerms().size(); i++) {
        d = d<ret.getTerms()[i].getExp()?ret.getTerms()[i].getExp():d;
    }

    setDegree(ret.getDegree());
    setTerms(ret.getTerms());


    return *this;
}

myPolynomial& myPolynomial::operator*=(int k) {
    myPolynomial ret;
    vector<myTerm> t = {};
    unsigned int d = 0;
    for(int i = 0; i <terms.size(); i++) {
        t.push_back(myTerm(terms[i].getCoeff()*k, terms[i].getExp()));
        d = d>t[i].getExp()?d:t[i].getExp();
    }
    ret.setDegree(d);
    ret.setTerms(t);

    setDegree(ret.getDegree());
    setTerms(ret.getTerms());
    return *this;
}

myPolynomial myPolynomial::operator-() const{ 
    myPolynomial ret;
    vector<myTerm> t = {};
    unsigned int d = 0;
    for(int i = 0; i <terms.size(); i++) {
        t.push_back(myTerm(-terms[i].getCoeff(), terms[i].getExp()));
    }
    ret.setDegree(d);
    ret.setTerms(t);
    return ret;
}
myPolynomial myPolynomial::operator*(int k) const{
    myPolynomial ret;
    vector<myTerm> t = {};
    unsigned int d = 0;
    for(int i = 0; i <terms.size(); i++) {
        t.push_back(myTerm(terms[i].getCoeff()*k, terms[i].getExp()));
        d = d > t[i].getExp() ? d : t[i].getExp();
    }
    ret.setDegree(d);
    ret.setTerms(t);
    return ret;
}
myPolynomial myPolynomial::operator+(const myPolynomial &poly) const{
    myPolynomial ret = myPolynomial();
    
    ret.setTerms(terms);
    vector<myTerm> ret1;
    for(int i = 0; i < ret.getTerms().size(); i ++) {
        ret1.push_back(ret.getTerms()[i]);
    }
    vector<myTerm> ret2;
    unsigned int d = 0;


    for(int j = 0; j < poly.getTerms().size(); j++) {
        bool chk = false;
        for(int i = 0; i < ret1.size(); i++) {
            if(ret1[i].getExp() == poly.getTerms()[j].getExp()) {
                int k = ret1[i].getCoeff() + poly.getTerms()[j].getCoeff();
                ret1[i].setCoeff(k);
                if(ret1[i].getCoeff() != 0)
                    d =  d > ret1[i].getExp()?ret1[i].getExp():d;
                chk = true;
            }
        }
        if(!chk) {
            ret2.push_back(poly.getTerms()[j]);
        }
    }

    for(int i = 0; i < ret2.size(); i++) ret1.push_back(ret2[i]);
    ret.setTerms(ret1);
    ret.setDegree(d);

    return ret;
}
myPolynomial myPolynomial::operator-(const myPolynomial &poly) const{
    myPolynomial ret = myPolynomial();
    
    ret.setTerms(terms);
    vector<myTerm> ret1;
    for(int i = 0; i < ret.getTerms().size(); i ++) {
        ret1.push_back(ret.getTerms()[i]);
    }
    vector<myTerm> ret2;
    unsigned int d = 0;


    for(int j = 0; j < poly.getTerms().size(); j++) {
        bool chk = false;
        for(int i = 0; i < ret1.size(); i++) {
            if(ret1[i].getExp() == poly.getTerms()[j].getExp()) {
                int k = ret1[i].getCoeff() - poly.getTerms()[j].getCoeff();
                ret1[i].setCoeff(k);
                if(ret1[i].getCoeff() != 0)
                    d =  d > ret1[i].getExp()?ret1[i].getExp():d;
                chk = true;
            }
        }
        if(!chk) {
            ret2.push_back(-poly.getTerms()[j]);
        }
    }

    for(int i = 0; i < ret2.size(); i++) ret1.push_back(ret2[i]);
    ret.setTerms(ret1);
    ret.setDegree(d);

    return ret;

}
myPolynomial myPolynomial::operator*(const myPolynomial &poly) const{
    myPolynomial ret = myPolynomial(0,0u);
    unsigned int d = 0;
    for(int i = 0; i < getTerms().size(); i++) {
        myPolynomial r = myPolynomial(0,0u);

        for(int j = 0; j < poly.getTerms().size(); j++) {
            myTerm m = getTerms()[i] * poly.getTerms()[j];
            r = r + myPolynomial(m.getCoeff(), m.getExp());
            r.setTerms(r.getTerms());
        }

        ret =  ret + r;
        ret.setTerms(ret.getTerms());
    }
    ret.setTerms(ret.getTerms());
    for(int i = 0; i <ret.getTerms().size(); i++) {
        d = d<ret.getTerms()[i].getExp()?ret.getTerms()[i].getExp():d;
    }
    return ret;
}
long myPolynomial::operator()(int x) const {
    long ret = 0;
    for(int i = 0; i < terms.size(); i++) {
        long k = 1;
        for(int j = 0; j < terms[i].getExp(); j++) {
            k*=x;
        }
        ret += terms[i].getCoeff()  * k;
    }
    return ret;
} 

// output operator
ostream &operator<<(ostream &outStream, const myPolynomial &poly)
{
    if (poly == myPolynomial::ZERO)
        return outStream << 0;
    int cnt = 0;
    for(int i = 0; i < poly.getTerms().size(); i++) {
        int c = poly.getTerms()[i].getCoeff();
        int e = poly.getTerms()[i].getExp();

        
        if(i > 0  && c > 0) outStream << "+";

        if(c != 0) {
            cnt ++;
            if((c == 1 && e == 0)) {
                outStream << c;
            }
            else if(c==1) {
                ;
            }
            else if(c==-1 && e == 0) {
                outStream << c;
            }
            else if(c==-1){
                outStream <<"-";
            }
            else {
                outStream <<c;
            }
            
            if(e > 1) {
                outStream << "x^" << e;
            }
            else if(e ==1) {
                outStream << "x";
            }
        }

    }

    if(cnt == 0) {
        outStream << 0;
    }
    return outStream;
}

myPolynomial operator*(int k, const myPolynomial &poly) {
    myPolynomial ret;
    vector<myTerm> t = {};
    unsigned int d = 0;
    for(int i = 0; i <poly.terms.size(); i++) {
        t.push_back(myTerm(poly.terms[i].getCoeff()*k, poly.terms[i].getExp()));
        d = d>t[i].getExp()?d:t[i].getExp();
    }
    ret.setDegree(d);
    ret.setTerms(t);
    return ret;
}

const myPolynomial myPolynomial::ZERO(0); // the zero polynomial P(x) = 0
const myPolynomial myPolynomial::ONE(1, (unsigned)0); // the monomial P(x) = 1
const myPolynomial myPolynomial::X(1, 1); // the monomial P(x) = x