#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the size of array :";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of the Array :";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<"The elements of the Array are :";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i =0;
    int j = (sizeof(arr)/sizeof(arr[0]))-1;
    while(i<j){
        while(i< j && arr[i]==0 ){
            i++;
        }
        while(i<j && arr[j]==1 ){
            j--;
        }
        if(i<j){
             swap(arr[i],arr[j]);
             i++;
             j--;

        }
       
    }
   
    
    
    
    
    cout<<"The elements of the Sorted Array are :";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}