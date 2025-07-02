#include<iostream>
using namespace std;

int getFirstPos(int n){
    if (n == 0) return -1;
    int ans = 1;
    while(n%2!=1){
        n = n>>1;
        ans++;
    }

    return ans;
}

int main(){

    int n = 32;
    cout<<getFirstPos(n)<<endl;

    return 0;
}