#include <bits/stdc++.h> 

using namespace std;

class A {
    private:
        int a = 10; 
    public:
        int b = 20;
    A() {
        cout << "Object created A!" << endl;
    }
    int func (int a) {
        return a+10;
    }
};
class B {
    private:
        A a;
    public:
        void printout() {
            cout << a.func(10);
        }
    };
int main() {
    string a = "abc";
    //b.printout();
    cout << a[1];
}