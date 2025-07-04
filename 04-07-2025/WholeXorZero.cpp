#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int getMinDec(vector<int> &arr){
    int n = arr.size();
    int x = 0;
    for(int i=0;i<n;i++){
        x^=arr[i];
    }

    if(x == 0) return 0;
    int mindec = INT_MAX;

    for(int i=0; i<n; i++){
        int a = x ^ arr[i];
        if(a < arr[i]){
            mindec = min(mindec, arr[i] - a);
        }
    }
    return (mindec == INT_MAX) ? -1 : mindec;
}

int main(){

    vector<int> arr = {3, 7, 8, 7, 15, 12};

    cout<<getMinDec(arr)<<endl;


    return 0;
}