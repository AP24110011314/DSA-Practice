#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    // v[1]=50;
    // v[2]=1;
    v.push_back(50);
    v.push_back(100);
    cout<<"Element Accessing:"<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity();

} 