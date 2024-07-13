#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int number=n;
    int temp=0,rev=0;
    while(n>0){
        temp=n%10;
        rev=(rev*10)+temp;
        n=n/10;
    }
    if(rev==number){
        cout<<"The number is a Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    // cout<<rev;
    
}