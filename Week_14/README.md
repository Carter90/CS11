# Week  Material for CS11 SI 
Week 14
Presentations
[Session 24/25](https://drive.google.com/open?id=1UBMK93XA8ipV4hzapYIwmVqQX1YITkHEeWijxO2voSk)  

##Recursion 
```C++ 
#include <iostream>
using namespace std;
 void print_to_n(int n){
	if(n == 0){return;}
	cout << n << ", ";
	print_to_n(n-1);
	cout << ".";
} //end print_to_n

 void print_zero_to_n(int n){
        if(n == -1){return;}
        print_zero_to_n(n-1);
	cout << n << ", ";
} //end print_zero_to_n

 int multi (int x, int y){
	int temp = 0;
	for(; y > 0; y--){
		temp += x ;
	} //end for 
	return(temp);
} //end multi

int r_multi(int x, int y){
	if (y == 0){return(0);}
        int temp = 0;
 	temp += x ;
        temp += r_multi(x, y -1);
        return(temp);
} //end r_multi

int main(){
	print_to_n(8);
	cout << endl;
	print_zero_to_n(11);
	cout << r_multi(3,5) << endl;
} //end main
```
