#include<iostream>
using namespace std;
int main(){

    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(int);

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int st = i;st <= j;st++){
                cout<<arr[st]<<" ";
            }
            cout<<"  ";
        }
        cout<<endl;
    }



    return 0;
}