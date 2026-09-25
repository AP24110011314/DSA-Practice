#include<iostream>
using namespace std;
int main(){
    int *x= NULL;
    cout<<x;
    int *z= 0;
    cout<<x;
    cout<<z;
    int *y= nullptr;
    cout<<y;
    cout<<endl; 

    //'\0' is a null character which is used to terminate the string in c 
    //and c++ programming language
    cout<<int('\0');
}