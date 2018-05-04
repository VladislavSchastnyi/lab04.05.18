// Example program
#include <iostream>
#include <vector>

class A {
public:
    A() { printFromConstructor(); }
    void work() { printFromWork(); }
    ~A() { printFromDestructor(); }
    
    virtual void printFromConstructor() { std::cout << "A"; };
    virtual void printFromDestructor() { std::cout << "~A"; };
    virtual void printFromWork() { std::cout << "[A]"; };
};

class B : public A {
public:
    B() { printFromConstructor(); }
    void work() { printFromWork(); }
    ~B() { printFromDestructor(); }
    
    virtual void printFromConstructor() { std::cout << "B"; };
    virtual void printFromDestructor() { std::cout << "~B"; };
    virtual void printFromWork() { std::cout << "[B]"; };
};

int main() {
    A* a = new B;
    a->work();
    delete a;
}


    
