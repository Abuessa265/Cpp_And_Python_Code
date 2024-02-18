#include <iostream>
using namespace std;
int main()
{
  int n, k, cal, c = 0, counter = 0;
  cin >> n >> k;
  cal = 240 - k;
  for (int i = 1; i <= n; i++)
  {
    c = c + (i * 5);
    if (c <= cal)
      counter++;
  }
  cout << counter;
}