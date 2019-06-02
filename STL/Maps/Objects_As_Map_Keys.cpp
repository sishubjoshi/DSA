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

    void print() const
    {
        cout << name << " : " << age << flush;
    }

    bool operator<(const Person &other) const
    {
        if (name == other.name)
        {
            return age < other.age;
        }

        return name < other.name;
    }
};

int main()
{
    map<Person, int> people;

    people[Person("Mike", 40)] = 0;
    people[Person("Mike", 43)] = 10;
    people[Person("Raj", 34)] = 2;
    people[Person("Vicky", 42)] = 5;
    people[Person("Sue", 41)] = 1;

    // people.insert(make_pair(6, Person("Sue", 50)));

    for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
    {

        cout << it->second << " : " << flush;
        it->first.print();
        cout << endl;
    }

    return 0;
}