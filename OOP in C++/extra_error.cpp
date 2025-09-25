// #include <iostream>
// using namespace std;


// class line{
// public:
//         inline void show(){
//             cout << "hello world";
//         }
// };

// int main(){
//     line t;
//     t.show();
//     return 0;
// }

// 1. Try to overload division(/) operator and increment (++) operator.
// #include <iostream>
// using namespace std;

// class Number {
// 	float value;
// public:
// 	Number(float v = 0) : value(v) {}
	
//     Number operator/(Number& other) const {
//         return value / other.value;
//     }
	
// 	Number operator++(int) {    
// 		Number temp = *this;
// 		value++;
// 		return temp;
// 	}
// 	float getValue() const { return value; }
// };

// int main() {
//     cout<<"Jyot Jayswal 24BCP157" << endl;
// 	Number a(10), b(2);
// 	Number c = a / b;
//     cout << "passed value of a=10 , b=5" << endl; 
// 	cout << "Division: " << c.getValue() << endl;
	
// 	a++;
// 	cout << "After postfix increment: " << a.getValue() << endl;
// 	return 0;
// }

// 2. Try to convert float datatype into integer using operator overloading. 
// #include <iostream>
// using namespace std;

// class FloatToInt {
//     float value;
// public:
//     FloatToInt(float v) : value(v) {}
//     operator int() const {
//         return int(value);
//     }
// };

// int main() {
//     cout<<"Jyot Jayswal 24bcp157" << endl;
//     FloatToInt obj(12.34f);
//     cout << "input float value = 12.34" << endl; 
//     int intValue = obj; 
//     cout << "Converted int value: " << intValue << endl;
//     return 0;
// }


// 3. what kind of error it gives when you write a inline function in private access specifier?
// #include <iostream>
// using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// double add(int a, int b) {  //ERROR RAISED
//     return a + b + 0.5;
// }

// int main() {
//     cout << add(3, 4);
//     return 0;
// }


// 4. What error you get when you try to add two different objects?
// #include <iostream>
// using namespace std;

// class Box {
//     int value;
// public:
//     Box(int v) : value(v) {}
// };

// int main() {
//     Box b1(10), b2(20);

//     Box b3 = b1 + b2;   // ERROR: + is not defined for Box
//     return 0;
// }

/* 5. Pointer In inheritance

#include <iostream>
using namespace std;
class BC {
public:
int b;
void show() {
cout << "Base show: b = " << b << endl;
}
};
class DC : public BC {
public:
int d;
void show() {
cout << "Derived show: b = " << b << ", d = " << d << endl;
}
};
int main() {
BC base;
BC* bptr = &base;
bptr->b = 10;
cout << "Case 1: Base* -> Base"<< endl;
bptr->show();
DC derived;
bptr = &derived;
bptr->b = 20;
cout << "Case 2: Base* -> Derived"<< endl;
bptr->show();
DC* dptr = &derived;
dptr->b = 30;
dptr->d = 40;
cout << "Case 3: Derived* -> Derived"<< endl;
dptr->show();
DC* wrongPtr = (DC*)&base;
wrongPtr->b = 50;
wrongPtr->d = 60;

// cout << "Case 4: Derived* -> Base "<< endl;
// wrongPtr->show();
return 0;
}*/

/* 6. virtual Function

#include <iostream>
using namespace std;
class Base {
public:
virtual void display() {
cout << "Base class display()" << endl;
}
};
class Derived : public Base {
public:
void derivedOnly() {
cout << "Function only in Derived class" << endl;
}
// void display() {
// cout << "derived class display()" << endl;
// }
};
int main() {
Derived d;
Base* bp = &d;
Derived* dp = &d;
bp->display();
dp->display();

return 0;
}*/

/* 7. Insertion And Extraction Operator Overloading

#include <iostream>
using namespace std;
class Student {
string name;
int age;
public:
friend istream& operator>>(istream& in, Student& s) {
cout << "Enter name: ";
in >> s.name;
cout << "Enter age: ";
in >> s.age;
return in;
}
friend ostream& operator<<(ostream& out, const Student& s) {
out << "Name: " << s.name << ", Age: " << s.age;
return out;
}
};
int main() {
Student s;
cin >> s;
cout << s << endl;
return 0;
}

*/