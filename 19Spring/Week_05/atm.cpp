/** 
 * @author: Carter Frost 
 * Email: cs11@carterfrost.com
 * Filename: atm.cpp
 * Example name: Example ATM Code
 * Description: This is the example of the code of an ATM
 * Code status: Finished!
 * Program compile: Yes
 * Errors or warnings: None
 * Comments: 
 */
#include <iostream>
using namespace std;

	/**
	 * main
	 * of an atm
	 * @params Ignored
	 * @returns 0 compleated sucessfully
	 */	
int main(int argc, char *argv[]) {  
	int input = 0;
	double balance = 1000;
	do {
		do {
		cout << "Enter 1 for withdrawal, 2 for Deposit, 3 For Balance, 4 to exit: " ; 
		cin >> input;
		} while ((input > 4) || (input < 1));
		if (input == 1){
			int amount = 0;
			cin >> amount;
			if(amount <= balance){balance -= amount; cout << "Here's" << amount << endl; } //atm.dispence(amount) }
			else{ cout << "Not enough moneies";}
		} //end withdrawal
		else if (input == 2){
			double amount =0;
			cin >> amount; // balance += atm.depositCash()
			balance += amount;
		} // end Deposit
		else if (input == 3){
			cout << "Balance:" << balance << endl;
		} //end balance
	} while (input != 4);
	cout << "Good Bye!" << endl;
	return(0); 
} //end main

