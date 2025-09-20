/* assign grade to a student based on their marks of 5 subjects (take user input
of student's name and marks of all 5 subjects.)*/

#include<iostream>
using namespace std;
int main(){
    
    float sum=0,average,marks[5];
    string name ;
    cout << "Enter the name of the student:" ;
    cin >> name ;
    for(int i=0;i<5;i++){
        cout << "enter the marks of subject " << i+1<<":" ;
        cin >> marks[i] ;
        sum= sum + marks[i] ;  
    }
    average= sum/5;   
    cout << "The average of marks is:" << average << endl ;
    if(average>=90 && average<=100){
        cout << "Grade O" ;
    }
        else if(average>=80 && average<90){
            cout << "Grade A" ;
        }
        else if(average>=70 && average<80){
            cout << "Grade B" ;
        }    
        else if(average>=60 && average<70){
            cout << "Grade C" ;
        }
        else if(average>=50 && average<60){
        cout << "Grade D" ;
        }
    else{
        cout << "Fail" ;
    }
    
return 0;
}

/*
ChatGPT said:
You're very close! But there's a small mistake in your if conditions like:

if(90 <= average <= 100)
This does not work as expected in C++. It will be evaluated as:

(90 <= average) <= 100
Which compares a boolean (true/false) to 100 — and that's incorrect logic.*/