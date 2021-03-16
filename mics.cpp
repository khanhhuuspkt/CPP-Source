
#include <bits/stdc++.h> 

using namespace std;

class A {
    int x=1,y=2;
    public:
        A() {}
        // A() {
        //     cout << "constructor 2" << this->y << endl;
        // }
};
class B :public A{
    public:
    B() {
        cout << "constructor b" << endl;
    }
};

int main() {
    int i;
    //getline(cin,i);
    cin >> i;
    enum a{
        ABC =0,
        ABC_1,
        ABC_2,
        ABC_3,
    };
    switch (i) {
        default:{
            cout << "default";
            break;
        }
        case ABC : {
            cout << "ABC";
            //break;
        }
        case ABC_1 : {
            cout << "ABC_1";
            //1break;
        }
            case ABC_2 : {
            cout << "ABC_2";
            break;
        }
    }
}