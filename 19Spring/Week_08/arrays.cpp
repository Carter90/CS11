/** 
 * @author: Carter Frost 
 * Email: cs11@carterfrost.com
 * Filename: arrays.cpp
 * Example name: arrays
 * Description: Example of init array
 * Code status: Working!
 * Program compile: Yes
 * Errors or warnings: None
 * Comments: 
 */
#include <iostream>
using namespace std;

	/**
	 * main
	 * prints 99, 88, 0->
	 * @params Ignored
	 * @returns 0 compleated sucessfully
	 */	
int main(int argc, char *argv[]) { 
const int array_size = 3;
int arr2[array_size] = {0};
arr2[0]=99;
arr2[1]=88;
//or
int arr[array_size];
for(int i =0; i < array_size; i++){arr[i] = 0; }
arr[0] = 99;
arr[1] = 88;
for(int i =0; i < array_size; i++){
cout << arr[i] << endl;
} //end of for 
	return(0); 
} //end main

