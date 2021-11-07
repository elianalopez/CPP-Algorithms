# Bubble Sort

## The Sorting problem

Suppose we need to sort a sequence of elements into non-decreasing order. 

**Input:** A sequence of n numbers <a<sub>1</sub>, a<sub>2</sub>, a<sub>3</sub>, ... , a<sub>n</sub>>

**Output:** A permutation (reordering) <a'<sub>1</sub>, a'<sub>2</sub>, a'<sub>3</sub> ,... , a'<sub>n</sub>> of the input sequence such that a'<sub>1</sub> $\leq$  a'<sub>2</sub> $\leq$ a'<sub>3</sub> $\leq$ ... $\leq$ a'<sub>n</sub>

## Bubble Sort

Is sorting algorithm where every element is compared with every other element. 
It does this swapping of elements if they are not in the correct order depending on their value and the intended order. 

### Pseudocode 
``` C
BUBBLESORT(A)
    for i = 1 to A.length - 1
        for j = A.length downto i + 1
            if A[j] < A[j - 1]
                exchange A[j] with A[j - 1]
```

### Run Time and Space Complexity

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
