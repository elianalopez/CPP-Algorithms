# Merge Sort


## The Sorting problem

Suppose we need to sort a sequence of elements into non-decreasing order. 

**Input:** A sequence of n numbers <a<sub>1</sub>, a<sub>2</sub>, a<sub>3</sub>, ... , a<sub>n</sub>>

**Output:** A permutation (reordering) <a'<sub>1</sub>, a'<sub>2</sub>, a'<sub>3</sub> ,... , a'<sub>n</sub>> of the input sequence such that a'<sub>1</sub> $\leq$  a'<sub>2</sub> $\leq$ a'<sub>3</sub> ≤ ... $\leq$ a'<sub>n</sub>

<hr>

### A Note About Divide and Conquer

The divide and conquer paradigm invovles three steps at each level of recursion:

* **Divide** the problem into a number of subproblems that are smaller instances of the same problem

* **Conquer** the subproblems by solving them recursively. If the subproblem sizes are smal enough, however just solve the subproblems in a straightforward manner

* **Combine** the solutuions to the subproblems into the solution for the original problem

<hr>

## Merge Sort

A divide and Conquer algoithm that is utilized for sorting. How it follows the divide and conquer approach is by doing the following

* **Divide**: Divide the *n-elements sequence* to be sorted into two subsequences of *n/2*

* **Conquer**: Conquer the two subsquences recursively using merge sort

* **Combine**: Merge the two sorted subsquences to produced the sorted answer


    Divide: D(n) = Θ(1) as dividing takes constant time.
    
    Conquer: solve two subproblems, each of size n/2, which contributes 2*O(n/2) to the running time.
    
    Combine: the MERGE procedure on an n-element subarray takes time O(n) because we only loop through 
    elements of different arrays, so C(n) = O(n).


The recursion *bottoms* out when the sequences to be sorted has a length of 1, which results in no work to be done for our algorithm

**The key operation in this algorithm is the merging of the two sorted sequences** which we do when we call `Merge(A,p,q,r)`
  * A is the array
  * p,q, and r are all indices such that p $\leq$ q $\lt$ r

This algorithm also assumes that our subarrays A[p..q] and A[q+1...r] are sorted ordered. 

It merges the two subarrays and replaces the former Array to its new form A[p...r]



### Pseudocode 
```C
//Note: Merge takes O(n) time where n = r-p+1

// Merges 2 sorted arrays into a single sorted array 
// where A[p..q] and A[q..r] are sorted subarrays. 
Merge(A,p,q,r):
  n1 = q-p+1 //compute the length of n1
  n2 = r-q   //compute the length of n2
  let L[1...n1+1] AND R[1...n2+1] be new arrays
  for i = 1 to n1 //this for loop copies the subarray A[p..q] into L[1...n1]
    L[i] = A[p+i-1]
  for j = 1 to n2 //this for loop copies the subarray A[q+1..r] into R[1...n2]
    R[j] = A[q+j]
  L[n1+1] = INFINITY //INFINITY is a placeholder
  R[n2+1] = INFINITY
  i = 1
  j = 1
  // Now we just need to merge L and R and sort A
  // The sorting occurs here, during the merge.
  for k=p to r
  if L[i] <= R[j]
    A[k] = L[i]
    i + i + 1
  else A[k] = R[j]
    j = j+1

//Merge-sort is a function that will recursively call itself to keep breaking apart the array
//in two until the p index is not less than the r index. Afterwards it will merge together 
Merge-Sort(A,p,r):
  // merge-sort subarray A[p..r] 
  if p < r
    q = [(p+r)/2]
    Merge-Sort(A,p,q)
    Merge-Sort(A,q+1,r)
    Merge(A,p,q,r)

```
### Run Time and Space Complexity

### Run Time Complexity

**The best case, average case, and worst case all take O(nlogn) run time**


### Space Complexity

The space complexity is O(n)

<hr>

## Note

It is the best technique for sorting a linked list
