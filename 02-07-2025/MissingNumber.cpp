#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cout<<"Enter Element : ";
        cin>>arr[i];
    }

    int MissingNumber = 0;

    for(int i=1;i<=n;i++){
        MissingNumber^=i;
    }
    for(int i=0;i<n-1;i++){
        MissingNumber^=arr[i];
    }


    cout<<"Missing number is : "<<MissingNumber<<endl;


    return 0;
}