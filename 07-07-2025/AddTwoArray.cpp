#include<iostream>
using namespace std;
int main(){

    int arr1[] = {2, 8, 3};
    int arr2[] = {1, 9, 9, 3, 2, 4};
    
    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);

    int len = max(n1, n2) + 1;
    int arr[len] = {0};

    int i = n1 - 1, j = n2 - 1;
    int idx = len - 1;
    int carry = 0;

    while(i>=0 || j >=0 || carry > 0){
        int digit1 = i>=0 ? arr1[i] : 0;
        int digit2 = j >=0 ? arr2[j] : 0;
        int sum = digit1 + digit2 + carry;

        arr[idx] = sum % 10;
        carry = sum / 10;

        i--, j--, idx--;
    }

    int start = 0;
    if(arr[0] == 0){
        start++;
    }

    for(;start<len;start++){
        cout<<arr[start]<<" ";
    }


    return 0;
}