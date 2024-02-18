#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
  double dim1, dim2;
  Shape(double dim1, double dim2)
  {
    this->dim1 = dim1;
    this->dim2 = dim2;
  }
  virtual double area()
  {
    return 0;
  }
};
class triangle : public Shape
{
public:
  triangle(double dim1, double dim2) : Shape(dim1, dim2)
  {
  }
  double area()
  {
    return 0.5 * dim1 * dim2;
  }
};
class rectangle : public Shape
{
public:
  rectangle(double dim1, double dim2) : Shape(dim1, dim2)
  {
  }
  double area()
  {
    return dim1 * dim2;
  }
};

int main()
{
  Shape *p;
  triangle t(10, 20);
  rectangle r(10, 20);

  p = &t;
  cout << "Tringle area = " << p->area() << endl;
  p = &r;
  cout << "Rectangle area = " << p->area() << endl;
}