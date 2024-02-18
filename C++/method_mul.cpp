#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class multiplicationTable
{

public:
  void multip1()
  {
    int M, L;
    cout << "Please enter the Multiplication M :";
    cin >> M;
    cout << "Please Enter The Limit:";
    cin >> L;
    for (int i = 1; i <= L; i++)
    {
      cout << M << "X" << i << "=" << M * i << endl;
    }
  }
};
int main()
{
  multiplicationTable obj;
  obj.multip1();

  return 0;
}