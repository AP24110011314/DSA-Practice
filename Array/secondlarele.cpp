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
    int max = arr[0];
    int secmax = arr[0];
    for(int i=1;i<x;i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];
        }
    }
    cout<<"Maximum Element :"<<max<<endl<<"Second max element :"<<secmax;
}