#include <iostream>
using namespace std;

class Test
{
private:
    int id;
    string name;

public:
    Test() : id(0), name("") {}

    Test(int id, string name) : id(id), name(name)
    {
        cout << " running constructor:\n";
    }

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

    friend ostream &operator<<(ostream &out, const Test &test)
    {
        out << test.id << ": " << test.name;
        return out;
    }
};

int main()
{
    Test test1(10, "john");
    Test test2(20, "jane");

    cout << test1 << endl
         << test2 << endl;

    return 0;
}