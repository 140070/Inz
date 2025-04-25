class A {
public:
    void funkcjaA() {

    }
};

class B {
private:
    A* pa;
public:
    B(A* a) : pa(a) {}

    void funkcjaB() {
        pa->funkcjaA(); 
    }
};

int main() {
    A* a = new A();
    B* b = new B(a); 

    b->funkcjaB();

    delete b;
    delete a;

    return 0;
}
