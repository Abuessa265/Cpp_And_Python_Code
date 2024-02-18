#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, Mishka, Chris, Mishka_cnt = 0, Chris_cnt = 0;
  int Mishka_sum = 0;
  int Chris_sum = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> Mishka >> Chris;
    if (Mishka > Chris)
    {
      Mishka_cnt++;
    }
    if (Mishka < Chris)
    {
      Chris_cnt++;
    }
  }

  if (Mishka_cnt > Chris_cnt)
  {
    cout << "Mishka" << endl;
  }
  else if (Mishka_cnt < Chris_cnt)
  {
    cout << "Chris" << endl;
  }
  else
  {
    cout << "Friendship is magic!^^" << endl;
  }
  return 0;
}