#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

class MobileUser
{
public:
  void call()
  {
    cout << "Hello" << endl;
  }
  virtual void sendMessage() = 0;
};

class Abuessa : public MobileUser
{
public:
  void sendMessage()
  {
    cout << "Hi This is Abuessa" << endl;
  }
};

class Musa : public MobileUser
{
public:
  void sendMessage()
  {
    cout << "Hi This is Musa" << endl;
  }
};

int main()
{
  MobileUser *m;
  Abuessa A;
  Musa M;
  m = &A;
  m->call();
  m->sendMessage();

  m = &M;
  m->sendMessage();

  getch();
}