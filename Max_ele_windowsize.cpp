// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int findmax(const int arr[50],int n){
    int max_ele=0;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
        if(arr[i]>max_ele){
            max_ele=arr[i];
        }
        
    }   
    cout<<endl;
    return max_ele; 
}

int main() {
    int n;
    cin>>n;
    int arr[]={5,6,7,10};
    int arr_size=4;
    

    for(int i=0;i<arr_size-(n-1);i++){
        int arr2[10];
        int m=0;
        for(int j=i;j<n+i;j++){
            // int m=0;
            arr2[m]=arr[j];
            m++;
        }
        int maxelement=findmax(arr2,n);
        cout<<"max element hai yeh :"<<maxelement<<endl;
    }
    

    return 0;
}