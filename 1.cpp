#include <iostream>
#include <vector>

class A {
public:  
    virtual void foo() { std::cout << "A::foo()"; };  
    virtual void bar() { std::cout << "A::bar()"; };
            void baz() { std::cout << "A::baz()"; };
};

class B : public A {
public:
    virtual void foo() { std::cout << "B::foo()"; };
            void bar() { std::cout << "B::bar()"; };
    virtual void baz() { std::cout << "B::baz()"; };
};

class C : public B {
public:
    virtual void foo() { std::cout << "C::foo()"; };
    virtual void bar() { std::cout << "C::bar()"; };
            void baz() { std::cout << "C::baz()"; };
};

int main() {
    A* a1 = new B;
    a1->foo();
    a1->bar();
    a1->baz();
    
    A* a2 = new C;
    a2->foo();
    a2->bar();
    a2->baz();
    
}


    
