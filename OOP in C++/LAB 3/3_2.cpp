/*Implement a Polynomial class with methods to add and evaluate polynomials.
Theory: This problem requires you to design and implement a Polynomial class in C++.
A polynomial is a mathematical expression consisting of variables and coefficients,
involving only the operations of addition, subtraction, multiplication,
and non-negative integer exponents of variables (e.g., 3x2+2x−5).

Create a class Polynomial that includes:
•	Data members to store terms (coefficient and exponent)
•	A method to add two polynomials
•   A method to evaluate the polynomial at a given x */

#include <iostream>
using namespace std;

class Poly1 {
public:
    int a, b, c;
    Poly1() {
        this->a = 2;
        this->b = 3;
        this->c = 4;
    }
    void display() {
        cout << "Poly1: " << this->a << "x^2 + " << this->b << "x + " << this->c << endl;
    }
};

class Poly2 {
public:
    int a, b, c;
    Poly2() {
        this->a = 5;
        this->b = -2;
        this->c = 7;
    }
    void display() {
        cout << "Poly2: " << this->a << "x^2 + " << this->b << "x + " << this->c << endl;
    }
};

class Result {
public:
    int a, b, c;
    void add(Poly1* p1, Poly2* p2) {
        this->a = p1->a + p2->a;
        this->b = p1->b + p2->b;
        this->c = p1->c + p2->c;
    }
    void display() {
        cout << "Sum: " << this->a << "x^2 + " << this->b << "x + " << this->c << endl;
    }
};

int main() {
    Poly1 p1;
    Poly2 p2;
    Result r;
    cout << "Jyot Jayswal 24bcp157" << endl << endl;
    p1.display();
    p2.display();
    r.add(&p1, &p2);
    r.display();
    return 0;
}