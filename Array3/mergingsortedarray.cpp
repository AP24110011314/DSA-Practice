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
    vector<int> arr3(x+y);
    int i=0,j=0;
    for(int m=0;m<(x+y);m++){
        if(i<x && j<y && arr1[i]<arr2[j] ){
            arr3[m]=arr1[i];
            i++;

        }
        else if( i<x && j<y && arr2[j]<arr1[i] ){
            arr3[m]=arr2[j];
            j++;
        }
        else if(i<x){
            arr3[m]=arr1[i];
            i++;
        }
        else if(j<y){
            arr3[m]=arr2[j];
            j++;
        }

    }
    cout<<"The elements of the merged Array are :";
    for(int i=0;i<x+y;i++){
        cout<<arr3[i]<<" ";
    }       
   return 0;
}