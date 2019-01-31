#include <iostream>

int main() {
  /*
  for(int i =0; i < 10;i++){
    std::cout << i; 
  }
  for(int i =0; i < 10;i++){
    std::cout << i; 
  }*/
  ///====
  //std::cout << ":"<< i; 
  int i = 0;
  while(i < 5){std::cout << i; i++;}
  
  { i = 0;
  while(i < 10){std::cout << i; i++;}}
  std::cout << ":" <<i;
}
