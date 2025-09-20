/* Write a C++ program to demonstrate single inheritance using Person and Student classes.*/

#include <iostream>
using namespace std;

class person{
private: 
    string name;
    int age;
public:
    person (string n, int a){   //constructor
        name = n;
        age = a;
    }
    void displayperson(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

};
class student : public person{  //derived class
private:
    string id;
    string major;

public:
    student(string n,int a,string i,string m) : person(n,a){  //calling base class constructor
        id = i;
        major = m;
    }
    void displaystudent(){
        displayperson();
        cout << "ID: " << id << endl;
        cout << "Major: " << major << endl;
    }

};

int main(){

    student s1("Jyot", 20, "24BCP157", "CSE");
    s1.displaystudent();

    return 0;
}

