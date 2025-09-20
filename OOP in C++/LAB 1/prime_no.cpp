/*find all prime numbers between 1 to the n (n=user input)*/

#include<iostream>
using namespace std;
int main(){

int num,prime[100],index=0,count=0; //count is used to verify that the num stored in prime[] is prime
cout << "Enter the last number upto which prime numbers should printed:";
cin >> num; 

for(int i=2;i<num;i++){ //for accessing the numbers upto n
    count=0;    // initialise count with 0
    for(int j=2;j<i;j++)  //for dividing the each number(i) by the each number less than itself(j<i)
    {
    if(i%j==0){
        count=1; //if number is not prime, count will change its value to 1 to become false in further condition
        break;  //if number is not prime then breaks the inner loop 
    }
    }
    
    if(count==0){  //if count value does not changes and remains count=0 which means number is prime 
        prime[index]=i; //store that number as prime number in array by accessing the index position
        index++;    //after storing one prime number in array, it increase the index position by 1 
                    //to store further prime numbers with continuous(accurate) position 
    }
}
cout << "The prime numbers between 1 and " << num <<": " ;
for(int i=0;i<index;i++){ //printing the prime numbers by using the index as a limit
    //logic(by accessing the index position of array)
    cout << prime[i] << " " ;
}

return 0;
}