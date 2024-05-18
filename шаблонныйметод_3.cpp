#include <iostream>
#include <string>

class AbstractClass {
public:
    void templateMethod() {
        stepOne();
        stepTwo();
        stepThree();
    }

    virtual void stepOne() = 0;
    virtual void stepTwo() = 0;

    void stepThree() {
        std::cout << "Sleep" << std::endl;
    }
};

class ConcreteClass1 : public AbstractClass {
public:
    void stepOne() override {
        std::cout << "ConcreteClass1: Study" << std::endl;
    }

    void stepTwo() override {
        std::cout << "ConcreteClass1: Eat" << std::endl;
    }
};

class ConcreteClass2 : public AbstractClass {
public:
    void stepOne() override {
        std::cout << "ConcreteClass2: Work" << std::endl;
    }

    void stepTwo() override {
        std::cout << "ConcreteClass2: Eat" << std::endl;
    }
};

int main() {
    AbstractClass* class1 = new ConcreteClass1();
    class1->templateMethod();
    delete class1;

    AbstractClass* class2 = new ConcreteClass2();
    class2->templateMethod();
    delete class2;

    return 0;
}