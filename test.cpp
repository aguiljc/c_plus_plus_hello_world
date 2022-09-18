#include <iostream>

#include "include/dempster-shafer.h"
//#include "src/dempster-shafer.cpp"

using namespace DS;

int main(int argc, char const *argv[])
{

  dempster_shafer ds;
  ds.x = 2;
  ds.y = 2;

  std::cout << ds.add(2,2) << std::endl;

  ds.sum = 0;

  std::cout << ds.add(3,4) << std::endl;

  return 0;
}