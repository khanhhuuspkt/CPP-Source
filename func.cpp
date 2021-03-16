#include<bits/stdc++.h>
using namespace std;
class memObject
{
    
    bool shouldBeDeleted;
    int b;
    public:
    bool ndubReached:1;

    static int isInit;
    static void staticFunc(int b) {
        isInit = b;
        cout << isInit;
    }
    memObject() : ndubReached(false)
    {
     //shouldBeDeleted = false;
     cout << ndubReached << endl;
    }
    void show() {
        cout << isInit;
    }
    // void func(const int a) {
    //     a++;
    //     cout << endl <<"const  " << a;
    // }
};
//int memObject::isInit = 0;
struct BF{
    int BF1 = 5;
    int BF2 : 5;
    string BF3;
};
struct test1 { 
    //unsigned int x : 16; 
    //unsigned int y : 8;
    bool x0 :1;
    bool x1:1;
    bool x2:1;
    bool x3:1;
    bool : 0;
    bool x4 :1;
    bool x5:1;
    bool x6:1;
    bool x7:1;
    //bool a;
}; 

struct test2 { 
    unsigned int a : 16;
    unsigned int b : 16 ; 
}; 

int main() {
//     // struct test1 t1 = {1,1,1,1,1,1,1,1};
//     // t1.x1=0;
//     // struct test2 t2 = {55,4};
//     // cout << sizeof(t1) << endl << t1.x1;
//     //int i;
// try {
    
//     //throw exception b;
//    // protected code
// } catch(...) {
//    // catch block
//    cout << "st";
// }
string a = "s";
cout << sizeof(int);
}

