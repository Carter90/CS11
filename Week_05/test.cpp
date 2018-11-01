#include <iostream>

using namespace std;

double div(int t,int s){
	return((double)t/s);
}
string sAdd(string a, string b){return(a+b);}

int incpt(int i){
	if (i > 0){
	cout << i << ":";
	incpt(div(i , 2));
	}
	return(0);
	}

int main(){
	incpt(10);
	cout << endl;
	cout <<  sAdd(sAdd("meh", "toast").substr(3,5).substr(0,3),"st")
 <<endl;
	//cout << div(1,3) + div(1,3) + div(1,3) <<endl;
	4;
	return(0);
}
