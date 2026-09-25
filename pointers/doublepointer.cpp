#include<iostream>
using namespace std;
int main(){
    int x =5;
    cout<<&x;
    int *y = &x;
    int **z = &y;
    cout<<endl;
    cout<<z;
    cout<<endl;
    cout<<**z;
}