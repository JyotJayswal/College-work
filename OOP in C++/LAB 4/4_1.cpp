/*: Write a C++ program to create a Rectangle class.
1.The class should have private data members: length and width (both of type double).
2.Implement a parameterized constructor Rectangle(double l, double w) that initializes the length and width of the rectangle.
3.Implement a public method calculateArea() that computes and returns the area of the rectangle (length * width).
4.Implement a public method displayDimensions() that prints the length and width of the rectangle.
5.In the main() function, create at least two Rectangle objects using the parameterized constructor with different dimensions, then display their dimensions and calculated areas.
*/

#include <iostream>
using namespace std;

class rectangle{
private:
double length,width;
public:
    rectangle(double l,double w){
        length=l;
        width=w;
    }

    double calculateArea(){
        return length*width;
    }

    void dimensions(){
        cout << "Length:" << length << endl << "Width:" <<width << endl;
    }
};

int main(){

    rectangle r1(10.5,15.5);
    rectangle r2(5.5,10.5);

    cout << "Rectacngle 1:" <<endl;
    r1.dimensions();
    cout << "Area 1:" << r1.calculateArea() << endl;

    cout << endl;

    cout << "Rectangle 2:" <<endl;
    r2.dimensions();
    cout << "Area 2:" << r2.calculateArea() << endl;


    return 0;
}