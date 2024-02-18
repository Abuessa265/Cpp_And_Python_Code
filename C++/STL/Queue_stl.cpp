#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
  // First in first out(FIFO)
  queue<int> q, q1;
  q.push(11);
  q.push(22);
  q.push(33);
  q.push(44);
  q.emplace(55); // push and emplace function same
  q.push(20);
  q.push(101);

  q1.push(101);
  q1.push(102);
  q1.push(103);

  if (q.empty())
    cout << "Empty" << endl;
  else
    cout << "Not Empty" << endl;

  cout << "Front value is " << q.front() << endl;
  cout << "Back or last value is " << q.back() << endl;

  q.pop();
  cout << "After pop Front value is " << q.front() << endl;

  swap(q, q1);
  while (q.size() > 0)
  {
    cout << q.front() << " ";
    q.pop();
  }

  return 0;
}