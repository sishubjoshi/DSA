#include "Complex.h"

#include <iostream>
using namespace std;
namespace complexnumbers
{

ostream &operator<<(ostream &out, const Complex &other)
{
    out << "(" << other.getReal() << "," << other.getImaginary() << ")";

    return out;
}

Complex::Complex() : real(0), imaginary(0)
{
    std::cout << "hello ";
}

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary)
{
    std::cout << "complex ";
}

Complex::Complex(const Complex &other)
{
    cout << "copy: " << endl;
    real = other.real;
    imaginary = other.imaginary;
}

const Complex &Complex::operator=(const Complex &other)
{
    real = other.real;
    imaginary = other.imaginary;
    cout << "hmmm:" << endl;
    return *this;
}
} // namespace complexnumbers
