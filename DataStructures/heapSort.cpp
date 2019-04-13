#include <iostream>
#include<vector>
using namespace std;


class BinaryHeap {

    vector<int> heap;
    int parent(int);
    void heapifyUp();
    void heapifyDown();
    public:
        BinaryHeap(){}
        void insertELement(int);
        void deleteMin();
        int extractMin();
        void displayHeap();
        int getSize();

};

int BinaryHeap :: getSize() {
    return heap.size();
}

void BinaryHeap :: insertELement(int value) {
    heap.push_back(value);
    heapifyUp(heap.size() - 1);
}
int BinaryHeap :: extractMin() {
    if(heap.size() == 0) return -1;
    else return heap.front();
}

int BinaryHeap :: parent(int child) {
    int p = (child-1)/2;

    if(child == 0) return -1;
    else return p;
}
void BinaryHeap :: heapifyUp(int index) {

    if(index >= 0 && parent(index) >= 0 && heap[parent(index)] >= heap[index]) {
        int temp = heap[index];
        heap[index] = heap[parent(index)];
        heap[parent(index)] = temp;
        heapifyUp(parent(index));
    }
}

int main() {

    cout<<"testing"<<endl;
    return 0;
}