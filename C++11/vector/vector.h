#ifndef VECTOR_H_
#define VECTOR_H_

#include<iostream>
using namespace std;


template<class T>
class vector
{

private:
    int a_pos;
    int a_size;
    T *a_values;
public:
    class iterator;

public:
    vector():a_pos(0), a_size(1), a_values(0) {
        a_values = new T[size];
    }
    vector(int size): a_pos(0),a_size(size), a_values(0) {
        a_values = new T[size];
    }
    // ~vector() {
    //     delete [] a_values;
    // } 

    int size() {
        return a_size;
    }

    void resize() {
        // T new_values = 
    }
    iterator begin() {
        return iterator(0, *this);
    }

    iterator end() {
        return iterator(a_size, *this);
    }

    void push_back(T value) {
        a_values[a_pos] = value;
        a_pos++;

        if(a_pos == a_size) {
            resize();
        }
    }

    T &get(int pos) {
        return a_values[pos];
    }
    
};

template<class T>
class vector<T>::iterator {

    private:
        int it_pos;
        vector vect;

    public:
        void print() {
            cout << "Hello wprld from iterator\n";
        }

        iterator(int pos, vector& __v): it_pos(pos), vect(__v) { }

        iterator &operator++(int) {
            it_pos++;
            return *this;
        } 

        iterator &operator++() {
            it_pos++;
            return *this;
        }

        T &operator*() {
            return vect.get(it_pos);
        }

        bool operator!=(const iterator &other) const {

            return it_pos != other.it_pos;
        }
};


#endif