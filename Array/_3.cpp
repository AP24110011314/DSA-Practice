//HCF
#include<iostream>
using namespace std;
int hcf(int a, int b){
    int x=min(a,b);
    int y=max(a,b);
    if(x==0){
        return y;
    }
    return hcf(y%x, x);
}
int main(){
    int a, b;
    cout<<"Enter two numbers to find HCF: ";
    cin>>a>>b;
    cout<<"HCF of "<<a<<" and "<<b<<" is: "<<hcf(a, b);
}