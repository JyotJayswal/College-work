/*1
  23
  456
  78910
  .......
  .
  .
  79......91  this is a floyd's triangle. 
  a)write a program to print this triangle.
  b)write a program to print the floyd's triangle by 0 & 1 number.*/

  #include<stdio.h>
  void main(){
    int row,col;
    for(row=1;row<=13;row++){
        for(col=1;col<=row;col++){
            printf("%d",col);
        }
    }
  }