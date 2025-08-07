// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int compare(int a, int b){
//     return a>b;
// }

// int main(){

//     vector<int> vec = {1,2,3,4,5};
    
//     sort(vec.begin(), vec.end(), compare);

//     for(int val : vec){
//         cout<<val<<" ";
//     }

//     return 0;
// }














// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){

//     vector<int> vec = {1,2,3,4,5};
    
//     sort(vec.begin(), vec.end(), [](int a, int b){ return a>b; });

//     for(int val : vec){
//         cout<<val<<" ";
//     }

//     return 0;
// }















// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){

    
//     // auto sortNumber = [](int a, int b){ return a+b; };
//     // int result = sortNumber(5,5);
//     // cout<<result<<endl;


//     // int x = 100;
//     // auto sortNumber = [x](int a, int b){ return a+b +x; };
//     // int result = sortNumber(5,5);
//     // cout<<result<<endl;


//     // auto hello = [](){
//     //     cout<<"Hello"<<endl;
//     // };
//     // hello();

//     /*
//     Think lamda as function values

//     -> Store them in variables 
//     -> Pass them to other functions
//     ->Return them from functions
//     ->Execute them immediately

//     Basics syntax
//     --------------
//     auto var1 = [capture](arguments){function body}
    
//     */


//     // Lambda Diractly/ Immediate Execution
//     // auto func1 = [](int a, int b){return a+b;}(4,5);
//     // cout<<func1;



//     // cout<<[](int a, int b){return a+b;}(4,5)<<endl;



//     // auto genericAdd = [](auto a, auto b){
//     //     return a + b;
//     // };
//     // cout<<genericAdd(3, 4)<<endl;
//     // cout<<genericAdd(2.3 , 3.4);



//     // mutable Lambda

//     // int count = 0;
//     // auto counter = [count]() mutable {
//     //     count++;
//     //     cout<<count<<endl;
//     // };

//     // counter();
//     // counter();

//     // cout<<count<<endl;



//     // int count = 0;
//     // auto counter = [&count]() mutable {
//     //     count++;
//     //     cout<<count<<endl;
//     // };

//     // counter();
//     // counter();

//     // cout<<count<<endl;
//     return 0;
// }





#include<iostream>
using namespace std;

auto add(){
    return [](int a, int b){return a+b;};
}

int main(){
    auto addMe = add();
    cout<<addMe(4,5);
}