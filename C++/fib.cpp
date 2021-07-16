#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;








//Recursion method
int recur = 0;

int fib_recursion(int n)
{
    recur++;
    if(n<=1)
    {
        return 1;
    }
    return fib_recursion(n-1) + fib_recursion(n-2);
}



//Memoization method
int* temparr = new int[INT_MAX]; ///Temporary lookup table to cache the results
int memoize = 0;


int fib_memoization(int n, int* temp)
{
    memoize++;
    if(n<=1)
    {
        temp[n] = 1;
        return 1;
    }
    if(temp[n]!=0)
    {
        return temp[n];
    }
    temp[n] = fib_memoization(n-1,temp) + fib_memoization(n-2,temp);
    return temp[n];
    
}

int main()
{
    cout << "Fibbonacci using recursion " << fib_recursion(20) << endl;
    cout <<  "Number of calls " << recur << endl;
    cout << "Fibonacci using memoization " << fib_memoization(20,temparr) << endl;
    cout << "Number of calls " << memoize << endl;
}
