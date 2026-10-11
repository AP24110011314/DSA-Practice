#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v;
    cout<<"Enter the length of the vector: ";
    int x;
    cin>>x;
    cout<<"Enter the element of the vector: ";
    for(int i = 0; i < x ; i++){
        int z;
        cin>>z;
        v.push_back(z);
    }
    cout<<"The Vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    for(int i=0;i<(v.size()/2);i++){
        int j=v.size()-1-i;
        v[i]=v[i]+v[j];
        v[j]=v[i]-v[j];
        v[i]=v[i]-v[j];
    }
    cout<<"The reversed array: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    
    


    
    return 0;
}