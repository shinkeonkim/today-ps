#include "MyComplex.h"
// Constructor
myComplex::myComplex()
{
    realPart = 0;
    imaginaryPart = 0;
}
myComplex::myComplex(int real)
{
    realPart = real;
    imaginaryPart = 0;
}
myComplex::myComplex(int real, int imag)
{
    realPart = real;
    imaginaryPart = imag;
}

// Copy constructor
myComplex::myComplex(const myComplex &number)
{
    realPart = number.getRealPart();
    imaginaryPart = number.getImaginaryPart();
}
// Accessor functions
int myComplex::getRealPart() const
{
    return realPart;
}
int myComplex::getImaginaryPart() const
{
    return imaginaryPart;
}
// Mutator functions
void myComplex::setRealPart(int real)
{
    realPart = real;
}
void myComplex::setImaginaryPart(int imag)
{
    imaginaryPart = imag;
}
void myComplex::set(int real, int imag)
{
    realPart = real;
    imaginaryPart = imag;
}
// Overloaded binary operators
myComplex myComplex::operator+(const myComplex &number) const
{
    int newReal = realPart + number.getRealPart();
    int newImag = imaginaryPart + number.getImaginaryPart();
    return myComplex(newReal, newImag);
}
myComplex myComplex::operator+(int value) const
{
    return myComplex(value) + (*this);
}

myComplex myComplex::operator-(const myComplex &number) const
{
    int newReal = realPart - number.getRealPart();
    int newImag = imaginaryPart - number.getImaginaryPart();
    return myComplex(newReal, newImag);
}
myComplex myComplex::operator-(int value) const
{
    return (*this) - myComplex(value);
}

myComplex myComplex::operator*(const myComplex &number) const
{
    int newReal = realPart * number.getRealPart() - imaginaryPart * number.getImaginaryPart();
    int newImag = realPart * number.getImaginaryPart() + imaginaryPart * number.getRealPart();
    return myComplex(newReal, newImag);
}
myComplex myComplex::operator*(int value) const
{
    return myComplex(value) * (*this);
}

myComplex& myComplex::operator+=(const myComplex &number)
{
    realPart += number.getRealPart();
    imaginaryPart += number.getImaginaryPart();
    return *this;
}
myComplex& myComplex::operator-=(const myComplex &number)
{
    realPart -= number.getRealPart();
    imaginaryPart -= number.getImaginaryPart();
    return *this;
}
myComplex& myComplex::operator*=(const myComplex &number)
{
    int newReal = realPart * number.getRealPart() - imaginaryPart * number.getImaginaryPart();
    int newImag = realPart * number.getImaginaryPart() + imaginaryPart * number.getRealPart();
    realPart = newReal;
    imaginaryPart = newImag;
    return *this;
}

// Assignment operators
myComplex &myComplex::operator=(const myComplex &number)
{
    this->realPart = number.getRealPart();
    this->imaginaryPart = number.getImaginaryPart();
    return *this;
}
myComplex &myComplex::operator=(int value)
{
    realPart = value;
    imaginaryPart = 0;
    return *this;
}
// Overloading comparison operators
bool myComplex::operator==(const myComplex &number) const
{
    return (realPart == number.getRealPart()) &&
           (imaginaryPart == number.getImaginaryPart());
}
bool myComplex::operator!=(const myComplex &number) const
{
    return (realPart != number.getRealPart()) ||
           (imaginaryPart != number.getImaginaryPart());
}
bool myComplex::operator>(const myComplex &number) const
{
    return norm() > number.norm();
}
bool myComplex::operator<(const myComplex &number) const
{
    return norm() < number.norm();
}
bool myComplex::operator>=(const myComplex &number) const
{
    return norm() >= number.norm();
}
bool myComplex::operator<=(const myComplex &number) const
{
    return norm() <= number.norm();
}
// Overloaded unary operators
myComplex myComplex::operator~() // unary minus
{
    return myComplex(realPart, -imaginaryPart);
}
myComplex myComplex::operator-() // unary minus
{
    return myComplex(-realPart, -imaginaryPart);
}
myComplex& myComplex::operator--() {
    setRealPart(getRealPart()-1);
    return *this;
}
myComplex& myComplex::operator++() {
    setRealPart(getRealPart()+1);
    return *this;
}
myComplex myComplex::operator--(int) {
    myComplex t(*this);
    operator--();
    return t;
}
myComplex myComplex::operator++(int) {
    myComplex t(*this);
    operator++();
    return t;
}

myComplex operator+(int number, myComplex a)
{
    return myComplex(number) + a;
}
myComplex operator-(int number, myComplex a)
{
    return myComplex(number) - a;
}
myComplex operator*(int number, myComplex a)
{
    return myComplex(number) * a;
}

// private function
int myComplex::norm() const
{
    return realPart * realPart + imaginaryPart * imaginaryPart;
}
std::ostream &operator<<(std::ostream &outStream, const myComplex &number)
{
    outStream << "(" << number.getRealPart() << "," << number.getImaginaryPart() << ")";
    return outStream;
}
std::istream &operator>>(std::istream &inStream, myComplex &number)
{
    int a, b;
    inStream >> a >> b;
    number.setRealPart(a);
    number.setImaginaryPart(b);
    return inStream;
}