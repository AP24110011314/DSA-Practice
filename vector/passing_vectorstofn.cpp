 #include<iostream>
#include<vector>
using namespace std;
//in this program we will see how to pass vector to function. We will see that 
//when we pass vector to function, it is passed by value. 
//  So any changes made to the vector inside the function will not affect the original vector.
//voidchange(vector<int> &v){} // if we want to pass by reference, 
//it will not create a copy of vector and any changes made to the vector 
//inside the function will affect the original vector.
void change(vector<int> v){
    v[0]=100;
    cout<<"Inside function:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";   

    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);        
    v.push_back(40);
    cout<<"Before function call:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    change(v);
    cout<<"After function call:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    return 0;
}