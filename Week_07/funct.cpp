#include <iostream>
using namespace std;

int plus_one(int);
int add_me(int, int);

int main() {
	int t;
	t = 0; 
	cout << add_me(5,4) <<"\n";
} //end main

int plus_one(int t){return(t+1);}


int add_me(int t, int s){
	int sum =0;
	for(int i =0; i< s; i++){
		sum = sum + plus_one(s);
	}
	return(sum);
} //end add_me



