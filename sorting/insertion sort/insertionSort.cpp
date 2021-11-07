#include <iostream>

void print(int array[],int s)
{
    for(int i = 0; i < s; i++)
    {
        std::cout << array[i] << " ";
    }
}

void insertionSort(int array[], int s)
{
   //note:s is the size of the array
    for(int j = 1; j < s; j++)
    {
        int key = array[j];
        int i = j-1; 
        while(i >=0 && array[i] > key)
        {
            array[i+1] = array[i];
            i--;
        }
        array[i+1] = key; 
    }
}

int main()
{
    int A[] = {1,5,6,2,-80}; 
    int size = sizeof(A)/sizeof(int);
    insertionSort(A, size);
    print(A,size);
    return 0; 
}