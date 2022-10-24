// Quicksort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define MAX_SIZE 10

void swap(int* x, int* y);
void Quicksort(int* arry, int start, int end, int size);
int Sort(int* arry, int start, int end);
int BreakCheck(int* arry, int Pivot, int start, int end);

using namespace std;

int main()
{

    int exArry[MAX_SIZE] = { 3, 9, 4, 7, 5, 0, 1, 6, 8, 2 };
    int exArry2[8] = { 4,3,7,5,2,8,1,6};

    Quicksort(exArry, 0, 9, MAX_SIZE);
    
    for (int i = 0; i < MAX_SIZE; i++)
        cout << exArry[i] << " ";


}


void Quicksort(int* arry, int start, int end, int size)
{
    if (start >= end)
        return;
    cout << "Before ";
    for (int i = 0; i < 10; i++)
        cout << arry[i] << " ";

    int NextPivotIndex = Sort(arry, start, end);
    cout << "After ";
    for (int i = 0; i < 10; i++)
        cout << arry[i] << " ";

    cout << "Pivot : " << NextPivotIndex;
    cout << endl;

    
    
    Quicksort(arry, start, NextPivotIndex, NextPivotIndex - start + 1);
    Quicksort(arry, NextPivotIndex + 1, end, end - NextPivotIndex );
    
    
}

int Sort(int* arry, int start, int end)
{
    int Pivot = arry[start];
    int status = 0;
    while (1)
    {
        // Check
        if (BreakCheck(arry, Pivot, start, end))
            break;
        
        // Left
        if (status == 0)
        {
            if (Pivot <= arry[end])
            {
                end -= 1;
                continue;
            }
            else if (Pivot > arry[end])
            {
                arry[start] = arry[end];
                start += 1;
                status = 1;
            }
        }        

        // Check
        if (BreakCheck(arry, Pivot, start, end))
            break;

        // Right
        if (status == 1)
        {
            if (Pivot >= arry[start])
            {
                start += 1;
                continue;
            }
            else if (Pivot < arry[start])
            {

                arry[end] = arry[start];
                end -= 1;
                status = 0;
            }
        }
    }
    return start;
}

int BreakCheck(int* arry, int Pivot, int start, int end)
{
    if (start == end)
    {
        arry[start] = Pivot;
        return 1;
    }
    return 0;
}


void swap(int* x, int* y)
{
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
}


