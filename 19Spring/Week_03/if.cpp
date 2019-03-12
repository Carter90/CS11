/** 
 * @author: Carter Frost 
 * Email: cs11@carterfrost.com
 * Filename: if.cpp
 * Example name: Conditionals
 * Description: use of if and else
 * Code status: Working!
 * Program compile: Yes
 * Errors or warnings: None
 * Comments: 
 */
#include <iostream>
using namespace std;

	/**
	 * main
	 * currently prints "dog is big yeah!"
	 * @params Ignored
	 * @returns 0 compleated sucessfully
	 */	
int main(int argc, char *argv[]) {
	bool is_big = true;
	int t = 20;
	if (t > 50) { 
		cout << "yo";
	} //end if t > 50
	else if (t > 20){ 
		cout << "dog";
	} //end else if t > 20
	else { // `else if (t <= 20){`
		cout << "smallz";
	} //end else t < 20 
	
	is_big = (t > 30); 
	//This if is seprate from the above ladder
	if (is_big){cout << " is big yeah!";}  
	cout << endl;
	return(0); 
} //end main

