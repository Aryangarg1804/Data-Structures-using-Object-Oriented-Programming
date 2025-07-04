#include<iostream>
using namespace std;
int main(){

    // int arr[] = {3, 8, 9, 5, 2, 1, 6, 5};
    int arr[] = {3, 8, -1, 5, 2, 7};
    int pi = 3;
    int n = sizeof(arr) / sizeof(int);
    int st = 0, end = n - 1;
    while(st < end){
        swap(arr[st], arr[end]);
        st++, end--;
    }

    end = n - 1;
    st = end - pi;
    while(st < end){
        swap(arr[st], arr[end]);
        st++, end--;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}