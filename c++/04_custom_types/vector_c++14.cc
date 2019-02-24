#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Vector {
  T* elem;
  size_t _size;

 public:
  Vector(const size_t size) : elem{new T[size]}, _size{size} {}
  ~Vector() { delete[] elem; }
  size_t size() const { return _size; }
  auto& operator[](const size_t i) { return elem[i]; }  //Generic lambdas
  const auto& operator[](const size_t i) const { return elem[i]; } //Generic lambdas
};

template <typename T>
ostream& operator<<(ostream& os, const Vector<T>& v) {
  for (auto i = 0u; i < v.size(); ++i)
    os << "v[" << i << "] = " << v[i] << std::endl;
  return os;
}

int main() {
  Vector<double> v{10};
  for (auto i = 0u; i < v.size(); ++i)
    v[i] = i;
  cout << v <<endl;
  Vector<double>* pv{&v};
  (*pv)[0] = -99.999;
  pv->operator[](1) = 77777.3333;  
  cout << *pv << std::endl;
  Vector<double>& rv{v};
  rv[5] = 555;
  cout << rv <<endl;
  return 0;
}

/* 
Benefits:

  The template of the code is simplified using the features of C++14
*/
