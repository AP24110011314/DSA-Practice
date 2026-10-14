#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> arr1;
    vector<int> arr2;
    int x,y;
    cout<<"Enter the size of first array :";
    cin>>x;
    cout<<"Enter the elements of the first Array :";
    for(int i=0;i<x;i++){
        int temp;
        cin>>temp;
        arr1.push_back(temp);
    }
    cout<<"Enter the size of second array :";
    cin>>y;
    cout<<"Enter the elements of the second Array :";
    for(int i=0;i<y;i++){
        int temp;
        cin>>temp;
        arr2.push_back(temp);
    }
    cout<<"The elements of the first Array are :";
    for(int i=0;i<x;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"The elements of the second Array are :";
    for(int i=0;i<y;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    int i=(x-1),j=(x-y-1),k=y-1;
    while(k>=0){
        if(arr1[j]<arr2[k]){
            arr1[i]=arr2[k];
            i--;
            k--;
        }else{
            arr1[i]=arr1[j];
            i--;
            j--;

            
            
        }
    }
    
    cout<<"The elements of the merged Array are :";
    for(int i=0;i<x;i++){
        cout<<arr1[i]<<" ";
    }       
   return 0;
}