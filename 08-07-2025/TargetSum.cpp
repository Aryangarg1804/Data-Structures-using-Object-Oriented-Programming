#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int arr[] = {-3, 8, 4, -2, 5, 6, 12, 18, -9, 6};
    int n = sizeof(arr) / sizeof(int);

    int target = 11;
    sort(arr, arr + n);

    int st = 0, end = n - 1;
    while (st < end)
    {
        int sum = arr[st] + arr[end];
        if(target == sum){
            cout<<"sum exist";
            return 0;
        } else if(target < sum){
            end--;
        } else{
            st++;
        }
    }
    cout<<"Sum donot exist";
    


    return 0;
}