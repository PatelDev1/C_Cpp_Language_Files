#include<iostream>
using namespace std;

class demo{
    public:
    int a;
    int b;

    // parameterized_constructor
    demo(int x,int y) {
        cout << "constructor called" << endl;
        a = x;
        b = y;
    }

    // ~demo{
    //        cout << "destructor called" << endl;
    // }

    int add() {
        return a + b;
    }
};   

int main() {
    // create an object
    demo b;
    cout << b.a << endl;
}