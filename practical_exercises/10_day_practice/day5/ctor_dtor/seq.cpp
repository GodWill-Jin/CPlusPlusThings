// Eg6-12.cpp
#include <iostream>
using namespace std;
class A {
  int x;

public:
  A(int i = 0) {
    x = i;
    cout << "A-----" << x << endl;
  }
};
class B {
  int y;

public:
  B(int i) {
    y = i;
    cout << "B-----" << y << endl;
  }
};
class C {
  int z;

public:
  C(int i) {
    z = i;
    cout << "C-----" << z << endl;
  }
};
class D : public B {
public:
  C c1, c2;
  A *a1 = new A(10);
  A a0, a4;
  D() : a4(4), c2(2), c1(1), B(1) { cout << "D-----5" << endl; }
};
int main() {
  D d;
  
}

/*    构造顺序只与基类、成员变量定义顺序有关   且若成员函数无默认构造函数，则必须使用合适的构造函数为其赋值
B-----1
C-----1
C-----2
A-----10
A-----0
A-----4
D-----5
*/
