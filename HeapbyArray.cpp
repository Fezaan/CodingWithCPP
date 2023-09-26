#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

class Heap
{
    int capacity, heap_size;
    int *arr;

public:
    Heap(int cap)
    {
        capacity = cap;
        heap_size = 0;
        arr = new int[cap];
    }
    int parent(int x)
    {
        return (x - 1) / 2;
    }
    int left(int x)
    {
        return 2 * x + 1;
    }
    int right(int x)
    {
        return 2 * x + 2;
    }
    void insert(int val)
    {
        if (heap_size == capacity)
        {
            cout << "Overflow" << endl;
            return;
        }
        int i = heap_size++;
        arr[i] = val;
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            swap(&arr[i], &arr[parent(i)]);
            i = parent(i);
        }
    }
    void decrease(int i, int val)
    {
        arr[i] = val;
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            swap(&arr[i], &arr[parent(i)]);
            i = parent(i);
        }
    }
    int getMin()
    {
        return arr[0];
    }
    int extractMin()
    {
        if (heap_size <= 0)
            return INT_MAX;
        if (heap_size == 1)
            return arr[--heap_size];
        int root = arr[0];
        arr[0] = arr[--heap_size];
        MinHeapify(0);
        return root;
    }
    void remove(int i)
    {
        decrease(i, INT_MIN);
        extractMin();
    }
    void MinHeapify(int i)
    {
        int l = left(i);
        int r = right(i);
        int smallest = i;
        if (l < heap_size && arr[l] < arr[smallest])
            smallest = l;
        if (r < heap_size && arr[r] < arr[smallest])
            smallest = r;
        if (smallest != i)
        {
            swap(&arr[i], &arr[smallest]);
            MinHeapify(smallest);
        }
    }
};

int main()
{
    Heap h(11);
    h.insert(3);
    h.insert(2);
    h.remove(1);
    h.insert(15);
    h.insert(5);
    h.insert(4);
    h.insert(45);
    cout << h.extractMin() << " ";
    cout << h.getMin() << " ";
    h.decrease(2, 1);
    cout << h.getMin();
    return 0;
}