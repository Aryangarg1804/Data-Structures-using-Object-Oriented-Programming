#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector<int> vec = {2, 9, 3, 8, 1, 6, 2, 9, 3, 6};
    vector<int> vec = {2, 9, 3, 8, 18, 6, 24, 9, 3, 6};
    int maxProfit = 0, BestBuy = vec[0];

    for(int i =1;i<vec.size();i++){
        if(maxProfit < vec[i] - BestBuy){
            maxProfit = max(maxProfit, vec[i] - BestBuy);
        }
        BestBuy = min(BestBuy, vec[i]);
    }

    cout<<maxProfit<<endl;


    return 0;
}