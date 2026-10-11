#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Enter 10 elements of vector:"<<endl;
    for(int i=0;i<10;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;


}
