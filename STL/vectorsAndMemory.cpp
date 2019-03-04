#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<double> numbers(0);


    cout<<"Size of numbers: "<<numbers.size()<<endl;

    int capacity = numbers.capacity();
    cout<<"Capacity of numbers: " << capacity<<endl;

    for(int i=0; i<10000; i++) {

        if(numbers.capacity() != capacity) {
            capacity = numbers.capacity();
            cout<<"Capacity: "<<capacity<<endl;
        }
        numbers.push_back(i);
    }

    numbers.clear();
    // Changing the size of the vector doesnot change the capacity of the vector.
    cout<<"Size of numbers: "<<numbers.size()<<endl;
    cout<<"Capacity of numbers: " << numbers.capacity()<<endl;

    // Resize the array
    numbers.resize(100);
    cout<<"Size of numbers after resizing: "<<numbers.size()<<endl;

    // Reserve: To change the capacity of the vector.
    numbers.reserve(10000);
    cout<<"Capacity of numbers after resizing: " << numbers.capacity()<<endl;


    
    return 0;
}
