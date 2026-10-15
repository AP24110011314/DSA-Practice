#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> arr;
   
    int x;
    cout<<"Enter the size of first array :";
    cin>>x;
    cout<<"Enter the elements of the first Array :";
    for(int i=0;i<x;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"The elements of the first Array are :";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    //6732->7236->7326->7362
    cout<<endl;
    int flag = 0;
    int pivot;
    vector<int> arr2=arr;   
    for(int i = x-1;i>0;i--){

    }
    if(flag==0){
    
    }

    
    cout<<"The next permutation are :";
    for(int i=0;i<x;i++){
        cout<<arr2[i]<<" ";
    }       
   return 0;
}