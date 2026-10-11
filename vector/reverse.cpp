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
    //Searching the element of vector
    int a;
    cout<<"Enter the sum of the doublet : ";
    cin>>a;
    int indx=0;
    for(int i=0;i<v.size(); i++){
        for(int j=i+1;j<v.size();j++){
            if((v[i]+v[j])==a){
                indx =1;
                cout<<"("<<i<<" , "<<j<<")"<<endl;
                break;

            }
        }
    }
    if(indx==0){
        cout<<"Elements to that doublet sum is not there in the vector.";
    }
    


    
    return 0;
}