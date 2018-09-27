# Week 1 Material for CS11 SI 

Presentations
[Session 1](https://docs.google.com/presentation/d/1pS_J3_XUL5eYGV-eiZLHZH_rgLd2U3gAROQINQnxDvk/edit?usp=sharing)

Make sure got a working env, installed g++ able to do hello world
explain concepts of documentaion, main and return codes
what compliation is cout >>> 640AF >> 1010101...10101


cd /home/carter/Dropbox/CISCSClasses/CS11SI # go into the directory
g++ blank.cpp                               # compile your code
./a.out #>>> Greetings!        
echo $? #>>> 0


g++ -c hello.cpp
objdump -D hello.o


#include <iostream>

int main() {
  std::cout << "Hello World!\n";
  int me = 1;
  me = 4;
  std::cout << me;
  double me2 = 2.2;
  std::cout << me2;
}


