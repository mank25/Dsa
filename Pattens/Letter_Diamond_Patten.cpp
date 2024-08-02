//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI
//  ABCDEFG
//   ABCDE
//    ABC
//     A
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch='A';
    for(int i=0;i<=n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<" ";
        }
        for(int j=0;j<(i*2)-1;j++){
            cout<<char('A'+j);
            ch++;
        }
        cout<<endl;
    }
    for(int i=n+1;i<=2*n-1;i++){
        for(int j=0;j<i-n;j++){
            cout<<" ";
        }
        for(int j=0;j<2*(2*n-i)-1;j++){
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }
    return 0; 
}