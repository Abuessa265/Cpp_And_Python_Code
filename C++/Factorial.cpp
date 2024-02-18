#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
  if (n == 1)
    return 1;
  else
    return n * fact(n - 1);
}
int main()
{
  int result, number;
  cout << "Enter any Number : ";
  cin >> number;
  result = fact(number);
  cout << "Factorial Number is : " << result;
}