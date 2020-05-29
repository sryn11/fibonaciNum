
//Fibonacci Series using Recursion 
#include<iostream> 
using namespace std; 
  
int fib(int n) 
{ 
    if (n <= 1) 
        return n; //return1
    return fib(n-1) + fib(n-2); 
} 
  
int main () 
{ 
	int n;
    cout << "nth number: "; cin >> n; 
    cout << fib(n); 
    return 0; 
} 