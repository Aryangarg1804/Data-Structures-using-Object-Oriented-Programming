
#include<iostream>
int main(){
    int arr[] = {-1,3,6,2,-8,3,-9,-23,45,-55};
    int queries[][2] = {{1,5},{3,7},{4,8},{0,6}};

    int n = sizeof(arr)/sizeof(arr[0]);
    int qn = sizeof(queries) / sizeof(queries[0]);

    int ps[n];
    for(int i = 0; i< n; i++){
        if(i == 0){
            ps[i] = arr[i];
        }else{
            ps[i] = arr[i] + ps[i-1];
        }
    } 

    //{{1,5},{3,7},{4,8},{0,6}};
    for(int i = 0; i< qn; i++){
        int si = queries[i][0];
        int ei = queries[i][1];
        if(si == 0) std::cout << ps[ei] << " ";
        else std::cout << ps[ei] - ps[si-1] << " ";
    }
}