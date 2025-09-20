/*Overload + operator in Complex class to add two complex numbers. */
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Parameterized constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload + operator as member function
    Complex operator+(const Complex &other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Method to display complex number
    void displayComplex() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);   // 3.5 + 2.5i
    Complex c2(1.5, 4.5);   // 1.5 + 4.5i

    Complex c3 = c1 + c2;   // Uses overloaded + operator

    cout << "First Complex Number: ";
    c1.displayComplex();

    cout << "Second Complex Number: ";
    c2.displayComplex();

    cout << "Sum: ";
    c3.displayComplex();

    return 0;
}
