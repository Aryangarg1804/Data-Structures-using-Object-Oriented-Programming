#include<iostream>
using namespace std;
int main(){

    // Kadane's Algorithm (most optimised)
    int arr[] = {-3, 4, 8, -9, 2, 6, 5, 8,-3, -2,-1};

    int maxSum = INT32_MIN;
    int n = sizeof(arr) / sizeof(int);
    int arrSum = 0;
    for(int i = 0;i < n; i++){
        arrSum += arr[i];
        maxSum = max(maxSum, arrSum);
        if(arrSum < 0){
            arrSum = 0;
        }
    }

    cout<<maxSum<<endl;

    return 0;
}