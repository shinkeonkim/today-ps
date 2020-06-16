#ifndef _MYCOMPLEX_H_
#define _MYCOMPLEX_H_
#include <iostream>
using namespace std;
class myComplex
{
public:
    // Constructor (생성자)
    myComplex();
    myComplex(int real);
    myComplex(int real, int imag);
    // Copy constructor (복사 생성자)
    myComplex(const myComplex &number);
    // Accessor functions (접근자)
    int getRealPart() const;
    int getImaginaryPart() const;
    // Mutator functions (변경자)
    void setRealPart(int real);
    void setImaginaryPart(int imag);
    void set(int real, int imag);

    // Overloaded binary operators
    myComplex operator+(const myComplex &number) const;
    myComplex operator+(int value) const;
    myComplex operator*(const myComplex &number) const;
    myComplex operator*(int value) const;
    myComplex operator-(const myComplex &number) const;
    myComplex operator-(int value) const;

    myComplex& operator+=(const myComplex &number);
    myComplex& operator-=(const myComplex &number);
    myComplex& operator*=(const myComplex &number);

    // Overloaded assignment operators
    myComplex &operator=(const myComplex &number);
    myComplex &operator=(int value);
    // Overloading relational operators
    bool operator==(const myComplex &number) const;
    bool operator!=(const myComplex &number) const;
    bool operator>(const myComplex &number) const;
    bool operator<(const myComplex &number) const;
    bool operator>=(const myComplex &number) const;
    bool operator<=(const myComplex &number) const;
    // Overloaded unary operators
    myComplex operator~(); // unary minus
    myComplex operator-(); // unary minus
    myComplex& operator--();
    myComplex& operator++();
    myComplex operator--(int);
    myComplex operator++(int);

    friend myComplex operator+(int number, myComplex a);
    friend myComplex operator-(int number, myComplex a);
    friend myComplex operator*(int number, myComplex a);
    
    friend std::ostream &operator<<(std::ostream &outStream, const myComplex &number);
    friend std::istream &operator>>(std::istream &inStream, myComplex &number);
    
private:
    int realPart;
    int imaginaryPart;
    int norm() const;
};

#endif
