/** 
 * @author: Carter Frost 
 * Email: cs11@carterfrost.com
 * Filename: loop.cpp
 * Example name: Loops
 * Description: 3 basic loop types (while, do while and for)
 * Code status: Working!
 * Program compile: Yes
 * Errors or warnings: None
 * Comments: 
 */
#include <iostream>
using namespace std;

	/**
	 * main
	 * prints "While:0-4"
	 * then prompts the user to "enter a number bigger than 5:" until they do
	 * prints "for:0-4"
	 * @params Ignored
	 * @returns 0 compleated sucessfully
	 */
int main(int argc, char *argv[]) {
	int t = 0;
	while(t <5){
	cout << "While:" << t <<endl;
	t++;
	}//end while
	
	int in =0;
	do{
		cout << "enter a number bigger than 5: ";
		cin >> in;
	} while(in <= 5);
	
	for(int i=0; i < 5; i++){
		int blaw =0;
		cout << "for:" << i << endl;
	} //end for loop

	return(0); 
} //end main

