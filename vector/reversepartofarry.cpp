#include<iostream>
using namespace std;
#include<vector>
void rev(int x, int y,vector<int>& v){
     for(int i=x,z=0;z<((y-x+1)/2);i++,z++){
        int j=y-z;
        v[i]=v[i]+v[j];
        v[j]=v[i]-v[j];
        v[i]=v[i]-v[j];
    }
}
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
    rev(3,8,v);
   
    cout<<"The reversed array: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    
     return 0;
}