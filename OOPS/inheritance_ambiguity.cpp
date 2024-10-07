#include<iostream>
using namespace std;

class A {
    public:
    void func() {
        cout << "I am A" << endl;
    }
};

class B {
    public:
    void func() {
        cout << "I am B" << endl;
    }
};

class C : public A, public B {
    // Inherits both func() from A and B
};

int main() {
    C obj;
    
    obj.A::func();  // Calls A's func()
    obj.B::func();  // Calls B's func()

    return 0;
}




