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
    cout<<"The Vector:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    //Searching the element of vector
    int a;
    cout<<"Enter the element to search: ";
    cin>>a;
    int indx=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==a){
            indx=i;
            break;
        }
    }
    if(indx==-1){
        cout<<"Element is not there in the vector.";
    }
    else{
        cout<<"The last index of the elemet : "<<indx;
    }


    
    return 0;
}