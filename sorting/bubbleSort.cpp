#include <iostream>

void print(int array[],int s)
{
    for(int i = 0; i < s; i++)
    {
        std::cout << array[i] << " ";
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int size) {

  for (int j = 0; j < size - 1; ++j) 
  {
    for (int i = 0; i < size - j - 1; ++i) 
    {
      if (arr[i] > arr[i + 1]) 
      {
        swap(arr[i], arr[i+1]);
      }
    }
  }
}

int main(){

    int A[] = {4,7,2,1,8};
    int size = sizeof(A)/sizeof(int);
    bubbleSort(A,size);
    print(A,size);

    return 0;
}