//pascal triangle   
#include<iostream>
using namespace std;
void pascal(int x){
    for(int i=0; i<=x;i++){
        int y = 1;
        for(int j = 0; j <=i; j++){
            cout<<y<<" ";
            y = y*(i-j)/(j+1);
            
            
            

        }
        cout<<"\n";
    } 

}

int main(){
    int x;
    cout<<"Enter the length to print the pascal triangle: ";
    cin>>x;
    pascal(x);

}