#include<iostream>
using namespace std;
int main(){

    // 1. No capture
    // [](){cout<<"Hello"<<endl;}();

    // 2. Capture by value

    // int n = 5; // give error
    // auto f = [n](){
    //     n++;
    //     cout<<n<<endl;
    // };
    // f();



    // 3. capture by reference
    // int n = 5; 
    // auto f = [&n](){
    //     n++;
    //     cout<<n<<endl;
    // };
    // f();



    //  int n = 5; 
    // auto f = [n]() mutable {
    //     n++;
    //     cout<<n<<endl;
    // };
    // f();


    // 4. capture all by values
    // int a = 1, b = 2, c = 10, d= 12;
    // auto f = [=](){cout<<a+b+c<<endl;};
    // f();


    // 5. capture all by referance

    // int a = 1, b = 2;
    // auto f =[&](){a++; b++;};
    // f();
    // cout<<a<<" "<<b<<endl;


    // 6. Mixed capture
    // int x = 1, y = 2;
    // auto f = [x, &y](){y+=x;};
    // f();
    // cout<<y;


    // 7. Special override: [=, &x]

    // int x = 1, y = 2, z = 3, k = 4;
    // auto f =[=, &x](){x++; cout<<y<<endl;};
    // f();
    // cout<<x;


    // 8. special override: [&, x];
    // int x = 1, y = 2, z = 3, k =4;
    // auto f = [&, x](){y++; cout<<x<<endl;};
    // f();
    // cout<<y;


    return 0;
}