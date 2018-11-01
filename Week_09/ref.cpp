/** 
 * Name: Carter Frost 
 * Email: Carter90@gmail.com
 * Filename: ref.cpp
 * Example name: refrance
 * Description: 
 * Code status: 
 * Program compile: 
 * Errors or warnings: 
 * Comments: 
 */
#include <iostream>
using namespace std;
	/**
	* addOne
	*
	*/
//int addOne(int x){ return(x+1);}
int addOne(int &x){ x = x+1; return(x);}
//void addOne(int &x){ x = x+1;}

bool isAMoreThanB(int a, int b){
	return( (a < 0)||(b < 0) ); // ((true/false)||(true/false))
}

void collectInput(int &a, int &b, int &c){
	//cin >> a >> b >> c;
	//cout << "Inside collectInput"<< "a:" <<a<< ", b:" << b << ", c:" << c << endl; 
	int d =0;
	while (true){
		cin >>  d;
		if(d == 4){cout << "congratz" <<endl; return;}
		else{cout << "try again" << endl; }
	} //end while
} //end 

void find(int ar[], int &pos, int search){
	for(int i = 0; i < 8; i++){
		cout << "ar[" <<i<< "] ==" << ar[i] <<endl;
		if (ar[i] == search) {pos=i;} //return
	} //end forloop
} //end find
	/**
	 * main
	 * 
	 * @params Ignored
	 * @returns 0 compleated sucessfully
	 */	
int main() {
	int pos = -1;
	int arz[] = {1,3,4,5,6,7,8,9};
	int searchz = 6;
	find(arz, pos, searchz);
	cout << "Found" << searchz << "at:" << pos <<endl;
	/*int test = 90;
	int a = 0, b = 0,c = 0; 
	collectInput(a,b,c);
	cout << "a:" << a << ", b:" << b << ", c:" << c << endl; 
	cout << "a:" <<a<< ", b:" << b << ", c:" << c << endl;  */
	//test = addOne(test);
	//cout << test << endl; 
} //end main



