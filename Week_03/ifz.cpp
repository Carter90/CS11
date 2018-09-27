/** 
 * Name: Carter Frost 
 * Email: Carter90@gmail.com
 * Filename: ifz.cpp
 * Example name: 
 * Description: 
 * Code status: 
 * Program compile: 
 * Errors or warnings: 
 * Comments: 
 */
#include <iostream>
using namespace std;

	/**
	 * main
	 * prints Greetings!
	 * @params Ignored
	 * @returns 0 compleated sucessfully
	 */	
int main() {
	int age = 0;
	cout << "Enter your age: ";
	cin >> age;
	for (int i =0; i < age; i++){ cout << "Are we there yet!" << endl;}

	//int i = 5;
	//cout << endl << i << endl;
	//int i = 0;
	//while (i < 10){ stuff; i++;}
	
	
	
	/*
	int i = 0; 
	while (i == 0){
		cout << "Enter a number around 3: ";
		cin >> i;
		if ( i == 3) {;} //pass
		else if (i < 3){
			cout << i <<" is less than 3" << endl; 
			i = 0;
		}
		else {
			cout << i <<" is greater than 3" << endl; 
			i = 0;
			}
	}
	cout << "Congrats" << endl; */
} //end main

// #########ceiling and floor example #########
#include <cmath>  
#include <iostream>
using namespace std;
int main ()
{
  double x = 2.3
  //think of the graph of y = x its a line right
  cout << "x:" << x << endl; 
  // what about y = (int)x it's like a stair case
  cout << "(int)x:" << (int)x << endl; 
  // what about y = ceil(x) it's like a stair case but shifted
  cout << "ceil(x):" << ceil(x) << endl; 
  return 0;
}
// ######### end ceiling and floor example #########
