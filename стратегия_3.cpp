#include <iostream>

class Strategy {
public:
    virtual void executeStrategy() = 0;
};

class ConcreteStrategyA : public Strategy {
public:
    void executeStrategy() override {
        std::cout << "Executing Strategy A" << std::endl;
    }
};

class ConcreteStrategyB : public Strategy {
public:
    void executeStrategy() override {
        std::cout << "Executing Strategy B" << std::endl;
    }
};

class Context {
    Strategy* strategy;

public:
    Context(Strategy* strategy) : strategy(strategy) {}

    void executeStrategy() {
        strategy->executeStrategy();
    }
};

int main() {
    Strategy* strategyA = new ConcreteStrategyA();
    Strategy* strategyB = new ConcreteStrategyB();

    Context contextA(strategyA);
    Context contextB(strategyB);

    contextA.executeStrategy();
    contextB.executeStrategy();

    delete strategyA;
    delete strategyB;

    return 0;
}