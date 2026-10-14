#include<iostream>
using namespace std;


//it is a program to sort an array of 0's,1's and 2's in
//linear time complexity and constant space complexity.
//it is also called as dutch national flag problem.
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
    int k=0;
    int j = (sizeof(arr)/sizeof(arr[0]))-1;
    while(k<=j){
        if(arr[k]==2 ){
            swap(arr[k],arr[j]);
            j--;
        }else if(arr[k]==0 ){
            swap(arr[k],arr[i]);
            i++;
            k++;
        }else{
            k++;
        }
       
    }
   
    
    
     
    
    cout<<"The elements of the Sorted Array are :";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}