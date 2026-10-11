#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(2);
    v.push_back(30);
    v.push_back(5);
    v.push_back(90);
    v.push_back(1);
    //we use at() function to access the elements of vector. It is a member function of vector class. It is used to access the element at a particular position in the vector. It is similar to operator[] but it is safer because it checks for out of range errors. If we try to access an element at an index which is out of range, it will throw an exception.
    // v.at(0)=100;
    // cout<<"Element Accessing:"<<endl;
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;   
    // cout<<v.at(3)<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<"  ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<"  ";
    }


}
 