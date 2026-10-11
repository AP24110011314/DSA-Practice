#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(29);
    v.push_back(9);
    v.push_back(20);
    v.push_back(67);
    v.push_back(90);
    v.push_back(55);
    v.push_back(32);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"Elements of vector: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    v.pop_back();
    v.pop_back();
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"Elements of vector: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }

}