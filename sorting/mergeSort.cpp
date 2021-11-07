#include <iostream>
#include <limits.h>

void print(int array[],int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

void merge(int A[],int p,int q,int r)
{
    int n1 = q - p +1; //computes length of subarray A[p...q]
    int n2 = r - q;    //computes length of subarray A[q+1...r]

    int L[n1], R[n2]; //create a left of right array of size n1 and n2 respectively

    L[n1] = INT_MAX; //INT_MAX is our sentinel, which will be used in the merge step. 
                    //No possible int will be greater than INT_MAX, so during the merge,
    R[n2] = INT_MAX; //INT_MAX is similar to the infinity used in the book

    //Copy elements from A[p...q] into L[]
    for(int i = 0; i < n1; i++)
    {
        L[i] = A[p+i];
    }
    //Copy elements from A[q+1...r] into R[]
    for(int j = 0; j < n2; j++)
    {
        R[j] = A[q+1+j];
    }


    // Now we just need to merge L and R and sort A
    // The sorting occurs here, during the merge.
    int i = 0;
    int j = 0;

    for(int k = p; k <= r; k++)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }
}

void mergesort(int A[], int p, int r)
{
    if(p < r)
    {
        int q = (p+r)/2;
        mergesort(A, p, q);
        mergesort(A, q+1,r);
        merge(A,p,q,r);
        return;
    }
}


int main()
{
    int A[] = { 3, 1, 23,4,2,16};
    int p = 0; 
    int r = sizeof(A)/sizeof(int) -1;

    mergesort(A,p,r);

    print(A,r+1);

    return 0;
}