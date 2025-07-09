#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> arr = {-3, 8, 4, -2, 11, 0, -5, 6, -9, 2};
    vector<pair<int,int>> queries = {{0,2}, {1,3}, {2, 5}, {1,4}};
    int n = queries.size();
    vector<int> prefixSum(arr.size(), 0);
    prefixSum[0] = arr[0];
    for(int i = 1;i<arr.size();i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    vector<int> ans;
    for(int i = 0;i<n;i++){
        if(queries[i].first == 0){
            ans.push_back(prefixSum[queries[i].second]);
        } else{
            ans.push_back(prefixSum[queries[i].second] - prefixSum[queries[i].first - 1]);
        }
    }


    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}