#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<string> v; // Initialized

    v.push_back("one");
    v.push_back("two");
    v.push_back("three");

    // Usual method
    for(int i=0; i<v.size(); i++) {
        cout << v[i] <<"\n";
    }

    // using iterator
    vector<string> :: iterator it = v.begin();
    // cout<<*++it<<"\n"; // prints the second element

    // using iterator to loop through
    cout<<"\nIterate through vector: ";
    for(vector<string> :: iterator it = v.begin(); it != v.end(); it++) {
        cout << *it <<" ";
    }

    // Iterate in reverse
    vector<string> :: reverse_iterator i;
    i = v.rbegin();
    cout<<"\nIterate in reverse: ";
    for(; i!= v.rend(); ++i) {
        cout<<*i<<" ";
    }

    // using front and back functions
    cout<<"\nFirst Element: "<<v.front();
    cout<<"\nLast Element: "<<v.back();

    // Capacity
    cout<<"\nsize:"<<v.size();
    cout<<"\nmax size:"<<v.max_size();
    // cout<<"\nresize:"<<v.resize(); // takes an agument
    cout<<"\ncapacity:"<<v.capacity();
    cout<<"\nempty:"<<v.empty();    // returns bool  

    return 0;

}