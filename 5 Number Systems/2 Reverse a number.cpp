/******************************************************************************
Reverse a no
*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a no : ";
    cin>>n;
    int reverse=0;
    
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10 +lastdigit;
        n=n/10;
    }
    cout<<"Reverse no is: "<<reverse;
    
    return 0;
}