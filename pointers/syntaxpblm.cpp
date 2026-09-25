#include<iostream>
using namespace std;
int main(){
    int x=5,y=10;
    //int* a=&x,b=&y;the problem with this is that a is pointer 
    //but b is not pointer so we have to use * for both
    int *a=&x,*b=&y;
    cout<<"The sum of two numbers is: "<<*a+*b;

     
}