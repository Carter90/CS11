

// #########Scope#########
#include <iostream>
using namespace std;
int main() {
    int i = 10;
    cout << i << endl;
  //int i = 2;
  cout << i << endl;
  std::cout << "Hello World!\n";
}
// #########End Scope#########

// ######### #########
cout << setprecision(3) << 10.1234 << endl;
vs
cout.precision(3);
cout << 10.1234 << endl;
// #########End #########



if(!str1.compare(str2))
{
    std::cout << "These strings are equal" << std::endl;
}

  std::string meh = "This is a dude test";
  
  std::cout << meh.find("dude") << std::endl << meh.substr(meh.find("dude")) << std::endl;

