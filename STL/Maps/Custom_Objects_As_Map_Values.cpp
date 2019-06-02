#include <iostream>
#include <map>
using namespace std;

class Person
{

private:
    string name;
    int age;

public:
    Person() : name(""), age(0) {}

    Person(const Person &other)
    {
        cout << "copy running" << endl;
        name = other.name;
        age = other.age;
    }

    Person(string name, int age) : name(name), age(age) {}

    void print()
    {
        cout << name << " : " << age << endl;
    }
};

int main()
{
    map<int, Person> people;

    people[0] = Person("Mike", 40);
    people[1] = Person("Raj", 30);
    people[2] = Person("John", 50);
    people[3] = Person("Jane", 50);

    people.insert(make_pair(6, Person("Sue", 50)));

    for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
    {

        cout << it->first << " : " << flush;
        it->second.print();
    }

    return 0;
}