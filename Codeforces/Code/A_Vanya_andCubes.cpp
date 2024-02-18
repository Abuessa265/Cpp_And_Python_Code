#include <iostream>
using namespace std;
int main()
{
  int n, i = 0, sum = 0;
  cin >> n;
  while (sum <= n)
  {
    i = i + 1;
    sum = sum + (i * (i + 1)) / 2;
  }
  cout << i - 1;
  return 0;
}