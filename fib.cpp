#include <iostream>
#include <unordered_map>
using namespace std;
//Using Memoziation 
//Create Map
// Key will be n
// Value will be return 

int* memo = new int[1000];
int fib(int n=0,unordered_map<int,int> memo = {})
{
  if(n<=1)
  {
    return n;
  }
  else if(memo[n]!=0)
  {
    return memo[n];
  }
  else
  {
    memo[n] = fib(n-1) + fib(n-2);
    return memo[n]; 
  }
}




int main()
{
  cout << fib(6) << endl;
  memo = nullptr;
}