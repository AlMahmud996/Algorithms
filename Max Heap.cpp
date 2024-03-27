#include <iostream>
using namespace std;

#define MAX_SIZE 100

class MaxHeap{
private:
    int heap[MAX_SIZE];
    int currentSize;
public:
    MaxHeap() : currentSize(0){}
    int getLeft(int i){
        return 2*i+1;
    }
    int getRight(int i){
        return 2*i+2;
    }
    int getParent(int i){
        if(i <= 0){
            return -1;
        }
        return (i-1)/2;
    }
    bool isEmpty(){
        return currentSize == 0;
    }
    int peek(){
        if(isEmpty()){
            cout << "Heap is Empty";
        }
        return heap[0];
    }

    void heapify(int i){
        int largest = i;
        int left = getLeft(i);
        int right = getRight(i);

        if(left < currentSize && heap[left] > heap[largest]){
            largest = right;
        }
        if(largest != i){
            int temp = heap[i];
            heap[i] = heap[largest];
            heap[largest] = temp;
            heapify(largest);
        }
    }
    void insert(int data){
        if(currentSize == MAX_SIZE){
            cout << "HEAP IS FULL";
        }
        heap[currentSize] = data;
        currentSize++;
        int i = currentSize - 1;
        while(getParent(i) != -1 && heap [i] > heap[getParent(i)]){
            int temp = heap[i];
            heap[i] = heap[getParent(i)];
            heap[getParent(i)] = temp;
            i = getParent(i);
        }
    }
    int extractMax(){
        if(isEmpty()){
            cout << "Heap is Empty";
        }
        int root = heap[0];
        if(currentSize == 1){
            currentSize--;
            return root;
        }
        heap[0] = heap[currentSize - 1];
        currentSize--;
        heapify(0);
        return root;
    }

};

int main(){
    MaxHeap heap;
    heap.insert(5);
    heap.insert(3);
    heap.insert(10);
    heap.insert(1);
    heap.insert(6);

    cout << "Maximum Element: " << heap.peek() << endl;
    int maxElement = heap.extractMax();
    cout << "Extracted Maximum : " << maxElement << endl;
    cout << "Elements after Extraction: ";
    while(!heap.isEmpty()){
        cout << heap.extractMax() << " ";
    }
    cout << endl;
}
