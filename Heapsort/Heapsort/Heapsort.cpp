// Heapsort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//void heapify(int i);
//void swap(int* x, int* y);

using namespace std;
void Heapify(int* arry, int cur, int size);
void swap(int* x, int* y);
void Heapsort(int* arry, int size);
#define SIZE 10


int main()
{
    int arry[SIZE] = { 5, 1, 8 ,2 ,11, 77, 32, 31, 42, 20 };
    for (int i = 0; i < SIZE; i++)
        cout << arry[i] << " ";
    cout << "\n\nAfter sort.....\n" << endl;

    for (int i = 0; i<SIZE; i++)
        Heapify(arry, 0, SIZE);


    for (int i = SIZE / 2 - 1; i >= 0; i--)
    {
        Heapify(arry, i, SIZE);
    }
    Heapsort(arry, SIZE);

    for (int i = 0; i < SIZE; i++)
        cout << arry[i] << " ";
}


void Heapify(int* arry, int cur, int size)
{
    int left = cur * 2 + 1;
    int right = cur * 2 + 2;
    int max = cur;

    if (left < size && arry[left]>arry[max])
    {
        max = left;
    }
    if (right < size && arry[right]>arry[max])
    {
        max = right;
    }

    if (max != cur)
    {
        swap(&arry[cur], &arry[max]);
        Heapify(arry, max, size);
    }
}

void Heapsort(int* arry, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        swap(&arry[0], &arry[i]);
        Heapify(arry, 0, i);
    }
}

void swap(int* x, int* y)
{
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
}
