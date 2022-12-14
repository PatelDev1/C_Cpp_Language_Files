#include<iostream>
using namespace std;

class father {
    public:
    void house() {
        cout << "House from father" << endl;    
    }
    void car() {
        cout << "car from father" << endl;    
    }

};

class mother {
    public:
    void cash() {
        cout << "cash from mother" << endl;    
    }
};

class child: public father, public mother {
    public:
    void cycle() {
        cout << "child has cycle only" << endl;    
    }
};

int main() {
    child c;
    c.cycle();
    c.car();
    c.house();
    c.cash();
}