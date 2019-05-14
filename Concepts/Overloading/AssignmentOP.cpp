#include <iostream>
using namespace std;

class Test
{
private:
    int id;
    string name;

public:
    Test() : id(0), name("") {}

    Test(int id, string name) : id(id), name(name) {}

    void print()
    {
        cout << id << ": " << name << endl;
    }

    const Test &operator=(const Test &other)
    {

        cout << "assignment running: " << endl;
        id = other.id;
        name = other.name;
        // cout << "this: " << this < endl;
        return *this;
    }

    Test(const Test &other)
    {
        cout << "running copy constructor " << endl;
        // id = other.id,
        // name = other.name;
        *this = other;
    }
};

int main()
{
    Test test1(10, "john");
    cout << "test1: ";
    test1.print();

    Test test2(20, "Bob");
    test2 = test1; // Shallow copy(if done w/o overloading)
    cout << "test2: ";
    test2.print();

    Test test3;
    // test3 = test2 = test1;

    test3.operator=(test2);
    cout << "test3: ";
    test3.print();

    cout << endl;
    // copy initialization
    Test test4 = test1;
    test4.print();

    return 0;
}