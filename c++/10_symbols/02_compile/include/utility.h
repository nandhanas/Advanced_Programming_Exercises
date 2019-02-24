#include<iostream>
#include <string>
#include <algorithm>

static int n = 0;
void print_lower(const std::string& s);
void print_upper(const std::string& s);

static std::string to_upper(const std::string& os){
  extern int n; 
  ++n;
  auto s = os;
  std::transform(s.begin(), s.end(), s.begin(), toupper);
  std::string __func_ ("to_upper");
  std::cout << "function " << __func_ << " has been called " << n << " times\n";
  return s;
}

static std::string to_lower(const std::string& os){
  auto s = os;
  std::transform(s.begin(), s.end(), s.begin(), tolower);
  return s;
}

