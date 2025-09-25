// Write a C++ program to illustrate the usage of this pointer and base class member access.

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string color;
public:
    Vehicle(string c)
        : color(c)
    {
        cout << "vehicle ctor\n";
    }
    
    void displayColor()
    {
        cout << "color:" << color << "\n";
    }
};

class Car : public Vehicle
{
    string model;
    int year;
public:
    Car(string c, string m, int y)
        : Vehicle(c)
    {
        this->model = m;
        this->year = y;
        cout << "car pctor\n";
    }

    Car()
        : Car("white", "unknown", 2023)
    {
        cout << "car def\n";
    }

    void displayCarDetails()
    {
        cout << "car:\n";
        Vehicle::displayColor();
        cout << "model:" << this->model << "\n";
        cout << "year:" << this->year << "\n";
    }
};

int main()
{
    cout << "Jyot Jayswal" << endl;
    cout << "24BCP157" << endl;

    Car c1("white", "crossover", 2024);
    c1.displayCarDetails();

    Car c2;
    c2.displayCarDetails();

    return 0;
}
