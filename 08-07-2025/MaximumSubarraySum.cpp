#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[] = {-3, 5, 8, 2, -6, 8, -9, 12, 8, 9, 6};
    int k = 3;
    int n = sizeof(arr) / sizeof(int);
    
    int windowSum = 0;
    
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for(int i = k;i< n; i++){
        windowSum += arr[i] - arr[i-k];
        maxSum = max(maxSum, windowSum);
    }

    cout<<maxSum;


    return 0;
}