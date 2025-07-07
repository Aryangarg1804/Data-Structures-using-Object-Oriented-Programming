#include<iostream>
using namespace std;
int main(){

    int arr1[] = {-3, 5, 8, 12, 18, 19, 23, 27};

    int arr2[] = {-5, -4, -0, 9, 18};

    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);

    int i = 0 ,j = 0;
    int arr[n1+n2] = {};
    int idx = 0;
    while(i != n1 && j != n2){
        if(arr1[i] >= arr2[j]){
            arr[idx++] = arr2[j++];
        } else{
            arr[idx++] = arr1[i++];
        }
    }

    while(i!=n1){
        arr[idx++] = arr1[i++];
    }

    while(j!=n2){
        arr[idx++] = arr2[j++];
    }


    for(int i=0;i<n1+n2;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}