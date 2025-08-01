// #include<iostream>
// using namespace std;


// class Outer{
//     int a;
//     public:
//     Outer(int a){
//         this->a = a;
//     }

//     void show(){
//         Inner obj(18);
//         cout<<obj.getB()<<endl;
//     }

//     class Inner{
//         int b;
//         public:
//             Inner(int b){
//                 this->b = b;
//             }


//             int getB(){
//                 return b;
//             }

            
//     };
// };

// int main(){

//     Outer outer(222);

//     outer.show();


//     return 0;
// }






#include<iostream>
using namespace std;


class Outer{
    int a;
    public:
    Outer(int a){
        this->a = a;
    }

    void show(){
        Inner obj(111);
        cout << a << endl;
        cout << obj.getB() << endl;
        cout << obj.b << endl;

    }

    class Inner{
        int b;
        public:
            Inner(int b){
                this->b = b;
            }


            int getB(){
                return b;
            }

            friend class Outer;
    };
};

int main(){

    Outer outer(222);
    outer.show();


    return 0;
}