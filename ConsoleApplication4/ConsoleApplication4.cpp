#include <iostream>

using namespace std;

class IMovable {
public:
    virtual void Move() = 0;
};

class IDrivable {
public:
    virtual void Drive() = 0;
};

class IFillable {
public:
    virtual void Fill() = 0;
};

class IFlyable {
public:
    virtual void fly() = 0;
};

class Car : public IDrivable {
public:
    void Drive() override {
        cout << "Car can drive" << endl;
    }
};

class Human : public IMovable {
public:
    void Move() override {
        cout << "Human can move" << endl;
    }
};

class Fly : public IFlyable {
public:
    void fly() override {
        cout << "Fly can fly" << endl;
    }
};

class Ship : public IFillable {
public:
    void Fill() override {
        cout << "Ship can walk" << endl;
    }
};


int main()
{
    Car obj = Car();
    obj.Drive();
    cout << endl;
    Human obj2 = Human();
    obj2.Move();
    cout << endl;
    Fly obj3 = Fly();
    obj3.fly();
    cout << endl;
    Ship obj4 = Ship();
    obj4.Fill();
}
