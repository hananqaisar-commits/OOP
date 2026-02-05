#include <iostream>
using namespace std;

class Vehicle//abstract class 
{
public:
    virtual void start() = 0;//pure abstract 
};
class Car : virtual public Vehicle
{ // use of virtual here is optional
public:
    void start()
    {
        cout << "Car engine start.." << endl;
    }
};
class Bike : virtual public Vehicle
{ // use of virtual here is optional
public:
    void start()
    {
        cout << "Bike engine start.." << endl;
    }
};
int main()
{
    // Car car1;
    // car1.start();   this is one way ther is also another way

    Vehicle *v1; // 1. now v1 is pointer of Vehicle type is abstract
    Vehicle *v2; // 2. abstract class object is not allowed but pointer is allowed

    v1 = new Car;  // v1 pointer points to new Car object
    v2 = new Bike; // v2 pointer points to new Bike object

    v1->start(); // v1->start() calls Car start() because the pointer points to a Car object and start() is virtual (runtime polymorphism).
    v2->start(); // similarly like upper one

    //clean Up memory
    delete v1;// it is imp to delete pointer point to new keyword 
    delete v2;// it will remove the pointing object memory not the pointer itself i can use that pointer for other use after delete this v1 and v2 memory

//     After delete v1; or delete v2;, the pointer becomes dangling if you try to use it before reassigning.
// Best practice: v1 = nullptr; v2 = nullptr; after delete.

    return 0;
}