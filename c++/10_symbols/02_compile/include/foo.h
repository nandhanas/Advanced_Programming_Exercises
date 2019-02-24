#include "utility.h"

struct Foo{
  static double f;
  std::string bar;
  Foo() = default;
  Foo(const std::string& s) : bar(to_upper(s)) {};
};

double Foo::f = 0;