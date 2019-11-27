#include <iostream>
using namespace std;

template <typename T>
T* initialize(T* a, size_t n) {
  for (std::size_t i{0}; i < n; ++i)
    cin>>a[i];
  return a;
};

template <typename T>
void reverse_order(T* a, size_t n) {
   double temp;
   for (int i = 0; i < n/2; ++i)
   {
      temp = *(a+i);
      *(a+i) = *(a+n-i-1);
      *(a+n-i-1) = temp;
   }
  cout<<"Reverse order of the array"<<endl;
  for (std::size_t i{0}; i < n; ++i)
    cout<<*(a+i)<<endl;
};

int main() {
  cout<<"Enter the size of the array"<<endl;
  size_t n;
  cin>>n;
  auto* array_double=new double[n];
  cout<<"Enter the elements of the double array"<<endl;
  array_double = initialize(array_double,n);
  reverse_order(array_double,n);
  auto* array_int=new int[n];
  cout<<"Enter the elements of the int array"<<endl;
  array_int = initialize(array_int,n);
  reverse_order(array_int,n);
  return 0;
}
