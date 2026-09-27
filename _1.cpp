#include<iostream>
using namespace std;
void pattern(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<("*");
        }
        cout<<endl;

    }

}
int main(){
    

    pattern(5);
    return 0;

}