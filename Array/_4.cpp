#include<iostream>
using namespace std;
int factorial(int x){
    if(x==0){
        return 1;
    }
    return x*factorial(x-1);    
}
int main(){
    int x;
    cout<<"Enter the number to calculate the factorial: ";
    cin>>x;
    int z = factorial(x);
    cout<<"Factorial of"<<x<<" is :"<<z;
}
