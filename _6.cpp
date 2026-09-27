#include<iostream>
#include <utility>
using namespace std;
void numcal(int x,int *ptr1,int *ptr2){
    
    if(x>=10){
        *ptr1=x%10;
        while(x>=10){
            x=x/10;
            *ptr2=x%10; 
        }
    }
    else{
        *ptr1=x;
        *ptr2=x;
    }


    
}
int main(){
    int x;
    cout<<"Enter the numbeer to check first and last digit of number: ";
    cin>>x;
    int a,b;
    int *ptr1 = &a;
    int *ptr2 = &b;

    numcal(x, ptr1, ptr2);
    cout<<"First digit: "<<b<<" and last digit is: "<<a;
}