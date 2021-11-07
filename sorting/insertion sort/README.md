# Insertion sort


## The Sorting problem

Suppose we need to sort a sequence of elements into non-decreasing order. 

**Input:** A sequence of n numbers <a<sub>1</sub>, a<sub>2</sub>, a<sub>3</sub>, ... , a<sub>n</sub>>

**Output:** A permutation (reordering) <a'<sub>1</sub>, a'<sub>2</sub>, a'<sub>3</sub> ,... , a'<sub>n</sub>> of the input sequence such that a'<sub>1</sub> $\leq$  a'<sub>2</sub> $\leq$ a'<sub>3</sub> $\leq$ ... $\leq$ a'<sub>n</sub>

## Insertion Sort

An efficient algoithm for sorting a small number of elements

### Pseudocode 
``` C
Insertion-Sort(A):
  for j = 2 to A.length
  key = A[j]
  //Inser A[j into the sorted sequence A[1...j-1]
  while i > 0 AND A[i] > key
    A[i+1] = A[i]
    i = -1
  A[i+1] = key
```

## Run Time and Space Complexity

### Run Time Complexity

<hr>

##### Best Case

The best case would come from a sorted array and it would give us a runtime complexity of $\Omega$(n) since we never have to enter the while loop within the for loop

 -      Example Input: {1,2,3,5,}

##### Average Case

The average case would give us a runtime complexity of $\theta$(n<sup>2</sup>)

 -      Example Input: {2,7,4,2,8}

##### Worst Case

The worst case would come from a reverse sorted array would give us a runtime complexity of O(n<sup>2</sup>)

 -      Example Input: {5,4,3,2,1}


### Space Complexity

The space complexity is O(1)
