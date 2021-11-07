#include<iostream>

int fib2(int n) {

   int f[n];

   f[0] = 0;
   f[1] = 1;

   for (i = 2; i < n; i++) 
      {  f[i] = f[i-1] + f[i-2]; }
   
   return f[n-1];
}

int main () {
   int n = 10;
   std::cout << fib2(n);
   return 0;
}
