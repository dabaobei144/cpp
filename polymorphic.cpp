#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        cout << "base" << endl;
    }
    void cal_print() {
        print();
    }
};
class Derive1 : public Base  {
    //virtual void print() {
    //    cout << "base" << endl;
    //}
};
class Derive2 : public Base {
public:
    virtual void print() {
        cout << "derive2" << endl;
    }
};

int main() {
    Base *d1 = new Derive1();
    Base *d2 = new Derive2();
    d1->cal_print();
    d2->cal_print();
    return 0;
}
