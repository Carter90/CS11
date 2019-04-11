[Week 10/11 Slides](https://drive.google.com/open?id=1LWg34Tc8fdXf6x0Z4y_vLhTE4_m9kFYh5UMYb7h-zy8)


```C++ 
/** 
 * @author: Carter Frost 
 * Email: cs11@carterfrost.com
 * Filename: recurs.cpp
 * Example name: Recursion Count Down
 * Description: This is the file to start with when building examples
 * Code status: Working!
 * Program compile: Yes
 * Errors or warnings: None
 * Comments: 
 */
#include <iostream>
using namespace std;


/**
 * count_down
 * recursion example
 * @params int num being counted down from
*/	
void count_down(int num){
	if (num < 0){return;}
	cout << num << endl;
	count_down(num-1);
	//cout << num << endl; // comment out previous cout and this back in and see what happens
;}

	/**
	 * main
	 * prints Greetings!
	 * @params Ignored
	 * @returns 0 compleated sucessfully
	 */	
int main(int argc, char *argv[]) { 
	count_down(10);
	return(0); 
} //end main
```
