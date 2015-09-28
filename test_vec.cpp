#include <iostream>
#include "vec.h"

int main(int argc, char** argv) {
try {
  vec<double> v;
  std::cout << v[0] << std::endl;
  return 0;
}
catch(...) {
  return -1;
}
}
