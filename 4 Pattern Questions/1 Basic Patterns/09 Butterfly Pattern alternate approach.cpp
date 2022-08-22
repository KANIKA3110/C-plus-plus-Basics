/******************************************************************************
Butterfly Pattern alternate approach
*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    
    //upper half
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        
        int space=2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    //lower half-only change in first for loop
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        
        int space=2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}