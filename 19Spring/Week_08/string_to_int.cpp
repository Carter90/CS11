/** 
 * @author: Carter Frost 
 * Email: cs11@carterfrost.com
 * Filename: string_to_int.cpp
 * Example name: string to int
 * Description: prints all the individual digits' values then the interger
 * Code status: Working!
 * Program compile: Yes
 * Errors or warnings: None
 * Comments: 
 */
#include <iostream>
#include <cmath>
using namespace std;

	/**
	 * main
	 * prints the individual digits' values then the interger
	 * so it will print "num =4 \nnum =30\nnum =200\nnum =1000\nthe_real_num:1234"
	 * @params Ignored
	 * @returns 0 compleated sucessfully
	 */	
int main(int argc, char *argv[]) { 
	string t = "1234"; // try "1001" binary 1001 == dec 9
	int b= 10; //try 2
	int the_real_num = 0;
	for (int i =0; i < t.size(); i++){
		int num = t[t.size()-i-1] - '0';
		the_real_num += num * pow(b,i) ;
		cout << "num =" << num * pow(b,i) << endl;
	} //end of for loop
	cout << "the_real_num:" << the_real_num << endl;
	return(0); 
} //end main

