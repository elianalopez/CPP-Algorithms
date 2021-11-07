# Fibonacci Series

## Background

The Fibonacci Series created by 15th century Italian mathematician Leonardo Fibonacci, is a series of numbers where each current term is the sum of the previous two terms. Such as the following:

```C
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377…….
```

The Fibonacci series is mathematically defined by the following:

<p align="center"><img src="https://github.com/elianalopez/CPP-Algorithms/blob/main/dynamic%20programming/fibonacci%20series/images/fibonacci.png?raw=true"></p>

## Pseudocode

```C
Fib2(A):
    create an array f[0 . . . n]
    f[0] = 0, f[1] = 1 //base cases
    for i = 2 . . . n:
        f[i] = f[i − 1] + f[i − 2]
    return f[n]
```

## Run Time and Space Complexity

### Run Time Complexity

### Space Complexity
