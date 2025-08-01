
// #include<iostream>
// using namespace std;


// class Outer{
//     int a;
//     public:
//     Outer(int a){
//         this->a = a;
//     }

//     void show(){
//         Inner obj(111);
//          cout << a << endl;
//          cout << obj.getB() << endl;
//          cout << obj.b << endl;
//     }

   

//     class Inner{
//         int b;
//         public:
//             Inner(int b){
//                 this->b = b;
//             }

//              void accessOuter(Outer& o){
//                 cout<<o.a<<endl;
//             }

//             int getB(){
//                 return b;
//             }

//             friend class Outer;
//     };
// };

// int main(){

//     Outer outer(222);
//     outer.show();

//     Outer::Inner inner(122);
//     inner.accessOuter(outer);

//     return 0;
// }















#include<iostream>
using namespace std;


class Outer{
    int a;
    static int x;
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
        static int y;
        public:
            Inner(int b){
                this->b = b;
            }

             void accessOuter(Outer& o){
                cout<<o.a<<endl;
                cout<<Outer::x<<endl;
            }

            int getB(){
                return b;
            }

            static int getY(){
                return y;
            }

            friend class Outer;
    };
};

int Outer::x = 555;
int Outer::Inner::y = 666;

int main(){

    Outer outer(222);
    outer.show();

    Outer::Inner inner(122);
    inner.accessOuter(outer);
    inner.getY();

    return 0;
}














