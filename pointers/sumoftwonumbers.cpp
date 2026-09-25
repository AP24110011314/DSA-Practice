#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int *z= &x;
    int a = 10;
    int *b =&a;
    int sum = *z + *b;
    cout<< "The sum of two number is: "<<sum;
}