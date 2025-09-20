/* Write a C++ program to create a Fraction class.
1.	The class should have private data members: numerator and denominator (both of type int).
2.	Implement a parameterized constructor Fraction(int num, int den) that initializes the fraction. This constructor should also normalize/simplify the fraction and ensure the denominator is not zero (if zero, handle it appropriately, e.g., by setting to 1 and printing an error, or throwing an exception).
3.	Implement a private helper method simplify() that reduces the fraction to its lowest terms by dividing both numerator and denominator by their GCD.
4.	Overload the following arithmetic operators as member functions or friend functions (choose the most appropriate for each):
operator+ (for addition)
operator- (for subtraction)
operator* (for multiplication)
operator/ (for division) - Handle division by zero for the second operand. Each overloaded operator should return a new Fraction object that is already simplified.
5.	Implement a public method displayFraction() to print the fraction (e.g., 3/4 or 5 if denominator is 1).
6.	In the main() function, create several Fraction objects, perform various arithmetic operations using the overloaded operators, and display the results.
*/
#include <bits/stdc++.h>
using namespace std;

class Fraction {
    private:
        int num, den;

    public:
        Fraction(int n, int d) {
            if(d == 0){
                cout << "Warning: Denominator should not be zero, thus taken as 1\n";
                num = n;
                den = 1;
            }else{
                num = n;
                den = d;
            }
            simplify();
        }

        void simplify() {
            int g = __gcd(abs(num), abs(den));
            num = num / g;
            den = den / g;
        }

        void display() {
            cout << num << "/" << den << endl;
        }
};

int main() {
    cout << "24BCP157 : Jyot Jayswal \n";

    Fraction a(2, 4);   
    a.display();

    Fraction b(8, 12);  
    b.display();

    Fraction c(21, 35); 
    c.display();

    Fraction d(7, 11);  
    d.display();

    Fraction e(5, 0);   
    e.display();

    return 0;
}