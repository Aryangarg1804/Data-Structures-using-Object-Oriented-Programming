#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> vec = {3 ,2 , 1, 0, 5, 7, 6, 5, 3, 5, 2, 3};
    int n = vec.size();
    int water = 0;

    if(n<=2){
        cout<<"No water";
        return 0;
    }
    vector<int> leftMax(n,0);
    vector<int> rightMax(n,0);

    leftMax[0] = vec[0];
    for(int i =1;i<n;i++){
        leftMax[i] = max(leftMax[i-1], vec[i]);
    }

    rightMax[n-1] = vec[n-1];
    for(int i = n - 2;i >=0;i--){
        rightMax[i] = max(rightMax[i+1], vec[i]);
    }


    for(int i =0;i<n;i++){
        int minHeight = min(leftMax[i], rightMax[i]);
        water += minHeight - vec[i];
    }


    cout<<water<<endl;


    return 0;
}