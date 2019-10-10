# CS11 Session Notes for Spring 2019 SI Sessions

## Minimal Main
```C++ 
int main(){;}

```

## Condionals
```C++ 
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
```

## Loops
```C++ 
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
	int t ;//= 0;
	cout << "enter a number not less than 5:";
	cin >> t;
	while(t <5){
		cout << "While:" << t <<endl;
		cout << "enter a number not less than 5:";
		cin >> t;
		//t++;
	}//end while
	
	int in =0;
	do{
		cout << "enter a number bigger than 5: ";
		cin >> in;
	} while(in <= 5);
	
	int age;
	cin >> age;
	for(int i=0; i < age; i++){
		cout << "are we there yet" << endl;
		//cout << "for:" << i << endl;
	} //end for loop

	return(0); 
} //end main
```
## Triangle Example
```C++
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int hight;
	cout << "How high of a triangle do you want:";
	cin >> hight;
	cout << '*' <<endl;
	for(int i=0; i < hight; i++){
		cout << '*';
		for(int j=0; j < i; j++){ cout << ' ';}
		cout << '*' << endl;
		//cout << "for:" << i << endl;
	} //end for loop
	for(int i=0; i < hight; i++){ cout << '*'; }
	cout << endl;
	return(0); 
} //end main
```


## Bitwise operators
```C++ 
3 & 2
b 0011 == d3
b 0010 == d2

 0011
 0010
&____
b0010 == d2

1 & 3
b 0001 == d1
b 0011 == d3
 0001
 0011
&_____
b0001 == d1


3 | 2
b 0011 == d3
b 0010 == d2

 0011
 0010
|____
b0011 == d3

1 | 3
b 0001 == d1
b 0011 == d3
 0001
 0011
|_____
b0011 == d3


b 0011 == d3
b 0010 == d2
2 << 1
0010
0100
2 << 2
1000
2 << 3
10000


```
## ATM
```C++ 
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
```
## Program arguments count
```C++ 
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) { 
	cout << "I saw args:" << argc  << endl; 
	return(0); 
} //end main
```
## Arrays
```C++ 
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
```

## String to int

```C++
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

```
[Week 10 Slides](https://drive.google.com/open?id=1LWg34Tc8fdXf6x0Z4y_vLhTE4_m9kFYh5UMYb7h-zy8)


```C++ 
/** 
 * @author: Carter Frost 
 * Email: cs11@carterfrost.com
 * Filename: funct.cpp
 * Example name: Funcitons
 * Description: Genereted from the session from week 10
 * Code status: Working!
 * Program compile: Yes
 * Errors or warnings: None
 * Comments: 
 */
#include <iostream>
#include <string>
using namespace std;

/**
 * print_int_array
 * print the contents of the array or partialy
 * @params int[] arrs the arry that will be printed
 * @params int size the number of elements going to be printed
 */	
void print_int_array(int arrs[], int size){
  cout << "{";
  for(int i =0; i< size; i++){
    cout << arrs[i] << ",";
  }
  cout << "}" << endl;
} //end print_int_array

/**
 * getInput
 * prompts the user to enter a boolean
 * @returns the boolean ented by the user
 */	
bool getInput(){
  bool input;
  cout << "Enter a bool: "
  cin >> input;
  return(input);
}

/**
 * prod
 * recursion example
 * @params int val the being
 * @params int times the number of time to recurse
 * @returns 0 when recusing is done, otherwise the sum of the previous recuse and val
 */	
int prod(int val, int times){
  if(times == 0) {return(0);}
  return val + prod(val,times-1);
  
}

/**
 * print_plus_one
 * prints the argument plus one
 * @params int input's value will be printed out plus one
 */	
void print_plus_one(int input){cout << input + 1;}

/**
 * add_one
 * @params int input the input that will have one added to
 * @returns input+1
 */	
int add_one(int input){return(input+1);}

/**
 * main
 * calls multiple example functions
 * @params Ignored
 * @returns 0 compleated sucessfully
 */	
int main(int argc, char *argv[]) {
  cout << prod(2,4) << endl;
  
  const int boolz_size =8;
  bool boolz[boolz_size] = {false}; //new style
  for (int i=0; i< boolz_size; i++){ boolz[i] = false; }
  boolz[0] = false;
  
  string sz[200] = {"test"};
  int numbs[] = {1,2,3,4,5};
  print_int_array(numbs,5);

  cout << boolz[0] << sz[1];
  cout << add_one(2) + 1 << endl;
  print_plus_one(99);
  return(0); 
}
```
## Recurse
```C++
#include <iostream>
using namespace std;

void count_down(int num){
	if (num < 0){return;}
	//cout << num << endl;
	count_down(num-1);
	cout << num << endl;
;}

	/**
	 * main
	 * prints Greetings!
	 * @params Ignored
	 * @returns 0 compleated sucessfully
	 */	
int main(int argc, char *argv[]) { 
	cout << "Greetings!" << endl; 
	count_down(10);
	return(0); 
} //end main

```
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

```C++
/** 
 * @author: Carter Frost 
 * Email: cs11@carterfrost.com
 * Filename: funct.cpp
 * Example name: Funcitons
 * Description: Genereted from the session from week 10
 * Code status: Working!
 * Program compile: Yes
 * Errors or warnings: None
 * Comments: 
 */
#include <iostream>
#include <string>
using namespace std;

/**
 * print_int_array
 * print the contents of the array or partialy
 * @params int[] arrs the arry that will be printed
 * @params int size the number of elements going to be printed
 */	
void print_int_array(int arrs[], int size){
  cout << "{";
  for(int i =0; i< size; i++){
    cout << arrs[i] << ",";
  }
  cout << "}" << endl;
} //end print_int_array

/**
 * getInput
 * prompts the user to enter a boolean
 * @returns the boolean ented by the user
 */	
bool getInput(){
  bool input;
  cout << "Enter a bool: ";
  cin >> input;
  return(input);
}

/**
 * prod
 * recursion example
 * @params int val the being
 * @params int times the number of time to recurse
 * @returns 0 when recusing is done, otherwise the sum of the previous recuse and val
 */	
int prod(int val, int times){
  if(times == 0) {return(0);}
  return val + prod(val,times-1);
}

/**
 * print_plus_one
 * prints the argument plus one
 * @params int input's value will be printed out plus one
 */	
void print_plus_one(int input){cout << input + 1;}

/**
 * add_one
 * @params int input the input that will have one added to
 * @returns input+1
 */	
int add_one(int input){return(input+1);}

/**
 * main
 * calls multiple example functions
 * @params Ignored
 * @returns 0 compleated sucessfully
 */	
int main(int argc, char *argv[]) {
  cout << prod(2,4) << endl;
  
  const int boolz_size = 8;
  bool boolz[boolz_size]= {false}; //new style
  for (int i=0; i< boolz_size; i++){ boolz[i] = false; }
  boolz[0] = true;
  
  string sz[200] = {"test"};
  int numbs[] = {1,2,3,4,5};
  print_int_array(numbs,3);

  cout << boolz[0] << ":" << sz[1] << ":" << endl;
  cout << "This is a test" << endl;
  //cout << add_one(2) + 1 << endl;
  //print_plus_one(99);
  return(0); 
}
```

[Session 14](https://drive.google.com/open?id=1Gg9bIxHFq5eTjcOhpQtYbHfZiLAMfijr1EYOogyWmg4)  
[Session 15](https://drive.google.com/open?id=10tErKTUyhthyVDOuIn89LqOn7dF2GaBdwLM9suXM4f8)  

```C++ 
#include <iostream>
#include <string>
using namespace std;

class Toy{
  public:
    Toy(){
      name = "None";
      materal = "Unknown";
      price = -0.01;
      min_age = -1;
    } //end of default constructor for toy
    Toy(string new_name){
      name = new_name;
      materal = "Unknown";
      price = -0.01;
      min_age = -1;
    } //end of constructor for toy
    Toy(string new_name, string new_material){
      name = new_name;
      materal = new_materal;
      price = -0.01;
      min_age = -1;
    } //end of constructor for toy
     Toy(string new_name, string new_material, double new_price, int new_min_age){
      name = new_name;
      materal = new_material;
      if (new_price >= 0){ price= new_price; }
      else {price = -0.01;}
      if (new_min_age >= 0){ min_age= new_min_age; }
      else {min_age = -1;}
    } //end of normal constructor for toy
  /**
	 * set_name
	 * @params string new_name
	 */
    void set_name(string new_name){
      name = new_name;
    } //end of set_name
    void set_price(double new_price){
      if (new_price >= 0){ price= new_price; }
    } //end of set_price
    void set_min_age(int new_min_age){
      if (new_min_age >= 0){ min_age= new_min_age; } //end of if new age is greaterthan or equal 0
    } //end of set_min_age
    string get_name(){return(name);}
    string get_material(){return(material);}
    double get_price(){return(price);}
    int get_min_age(){return(min_age);} 
    string to_string(){return(name + material);}
  private: 
    string name;
    string material;
    double price;
    int min_age; 
}; //end of the class toy

int add_one(int t){return(t+1);}

	/**
	 * main
	 * prints Greetings!
	 * @params Ignored
	 * @returns 0 compleated sucessfully
	 */
int main() {
  Toy bopit; //default constructor call
  Toy cart("Cart"); //second constructor call
  Toy barbie("Barbie","plastic"); //third constructor call
  Toy car("Car", "plastic", 10.0, 5); //forth(normal) constructor call
  bopit.set_name("Bopit");
  Toy lego;
  lego.set_name("Lego");
  cout << "bopit's name is: " << bopit.get_name() << endl;
  cout << "car: " << car.get_name() << ", " << car.get_material() << ", "
        << car.get_price() << ", " << car.get_min_age() << endl;
}

```

