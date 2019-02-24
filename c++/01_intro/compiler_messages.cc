#include <iostream>
#include <string>
using namespace std;

void print(int num)
{
	cout<< num << endl;
}

int main() {

  //Without error

  cout<<"Hello World!"<<endl;

  //typos in function name (e.g., `c0ut`)

  c0ut<<"Hello World!"<<endl;  //cout' declared here extern _LIBCPP_FUNC_VIS ostream cout;

  //typos in variable name

  int num {1};
  cout<< nu<<endl;  //use of undeclared identifier 'nu'

  //forget to put `;`

  cout<<"Hello World!"<<endl //  expected ';' after expression

  //forget to include iostream 
  //reference to overloaded function could not be resolved; did you mean to call it?

  // declare a variable with illegal name like `int double {0};`

  int double {0}; //cannot combine with previous 'int' declaration specifier

  //pass wrong type of argument to a function

  string s ("Hello");
  print(s); //no matching function for call to 'print'

  return 0;
}