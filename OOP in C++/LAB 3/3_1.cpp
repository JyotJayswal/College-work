/*Create a class Student with the following:
Private members: name, rollNumber, marks
Public methods:
setDetails() – to set values
displayDetails() – to show student information
Ensure that direct access to data is restricted using private, and interaction occurs only via public methods.
*/

#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    int roll;
    float marks;

    public:
    void setdetails(string n,int r,float m){
        name=n;
        roll=r;
        marks=m;
    }

    void displaydetails(){
        cout << "Students Name: " << name <<endl;
        cout << "Roll Number: "  << roll <<endl;
        cout << "Marks: " << marks <<endl;
        
    }
};

int main(){

    string name;
    int roll;
    float marks;

student s1;

cout << "Enter name(without space): ";
cin >> name;

cout << "Enter Roll Number: ";
cin >> roll;

cout << "Enter Marks: ";
cin >> marks;

s1.setdetails(name,roll,marks);

cout << "Student Details--" << endl;
s1.displaydetails();

return 0;

}