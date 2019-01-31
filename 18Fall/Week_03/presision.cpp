#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
string meh = "This is a dude test";
cout << meh.substr (3,5) <<endl; 
cout << meh.substr (3)<<endl;
int du = meh.find("dude");
cout << meh.substr(du+4) << endl;

}
