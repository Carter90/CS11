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
