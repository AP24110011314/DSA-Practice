#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(4);//it will create a vector of size 4 and capacity with intial values 0; 
    //vector <int> v(5,6);//it will create a vector with each element 6.
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v[3]=4;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"Element accessing:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl; 
    v.push_back(100);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"Element accessing:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }

}