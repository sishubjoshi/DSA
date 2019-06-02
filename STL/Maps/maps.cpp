#include <iostream>
#include <map>

using namespace std;

int main()
{

    // cout << "Hello world";
    map<string, int> ages;

    ages["Mike"] = 14;
    ages["Raj"] = 20;
    ages["Vicky"] = 40;

    // change the value
    ages["Mike"] = 60;

    cout << ages["Mike"] << endl;

    // Accessing some value which is not present
    cout << ages["Sue"] << endl;

    // find method { to check if the value exists }
    if (ages.find("Vicky") != ages.end())
    {
        cout << "Found the key" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }

    // Make pair
    ages.insert(make_pair("Peter", 110));
    // using pair
    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
    {
        pair<string, int> age = *it;

        cout << age.first << " : " << age.second << endl;
    }
    return 0;
}