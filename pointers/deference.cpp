#include<iostream>
using namespace std;
//deferecnce means accessing the value of the variable using pointer using * operator
int main(){
    int x =10;
    int *z = &x;
    cout<<z;
    cout<<endl;
    cout<<*z;

}