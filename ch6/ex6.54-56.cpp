#include <iostream>
#include <vector>

using namespace std;

// define a function type
using myFuncT = int(int, int);

// use the function type to declare four functions
myFuncT add;
myFuncT sub;
myFuncT mul;
myFuncT divide;

int add(int a, int b) {
  cout << "Called add(" << a << ", " << b << ") = " << a+b << endl;
  return a + b;
}

int sub(int a, int b) {
  cout << "Called sub(" << a << ", " << b << ") = " << a-b << endl;
  return a - b;
}

int mul(int a, int b) {
  cout << "Called mul(" << a << ", " << b << ")" << endl;
  return a * b;
}

int divide(int a, int b) {
  cout << "Called div(" << a << ", " << b << ")" << endl;
  return a / b;
}

int main()
{
  typedef decltype(add) *myFuncP; // get the function type and set as pointer
  // using myFuncP = int(*)(int, int); // also works
  // typedef int (*myFuncP)(int, int); // also works
  // myFuncT *myFuncP;  // not work

  
  vector<myFuncP> v;

  v.push_back(add);   // push back the function into the vector
  v.push_back(sub);   // push back the function into the vector
  v.push_back(mul);   // push back the function into the vector
  v.push_back(divide);   // push back the function into the vector

  v[0](0, 1);
  v[1](2, 1);
  v[2](23, 34);
  v[3](124, 423);

  return 0;
}