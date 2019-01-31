#include <iostream>
#include <string>
#include <typeinfo>

int main() {
  std::string meh = "this is a test?";

std::cout << "0:" << typeid(0).name() << std::endl;
  std::cout << "meh[0]:" << typeid(meh[0]).name() << std::endl;

  std::cout << "meh.substr(0,1):" << typeid(meh.substr(0,1)).name() << std::endl; 
} //end main
