#include<iostream>
using namespace std;
int main(){
    int aa[]={1,2,3,4,5};
    int* ptr =aa;
    cout<<ptr<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(aa);
}