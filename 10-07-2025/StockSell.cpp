
#include<iostream>
#include<climits>
#include<algorithm>

int main(){
    int arr[] = {2,9,3,8,18,6,2,4,9,3,6};
    int n = sizeof(arr)/sizeof(int);
    int suffix[n];

    for(int i = n-1; i>=0 ; i--){
        if(i == n-1) suffix[i] = arr[i];
        else suffix[i] = arr[i] > suffix[i+1] ? arr[i] : suffix[i+1];
    }

    int ans = INT_MIN;
    for(int i = 0; i< n; i++){
        int cp = arr[i];
        int sp = suffix[i];
        int profit = sp - cp;
        if(profit > ans) ans = profit;
    }
    std::cout << ans << " ";
}