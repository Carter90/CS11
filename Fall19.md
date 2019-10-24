# CS11 Session Notes for Fall 2019 SI Sessions


# Conditionals
## If/Else example
```C++ 
bool dude = true; //Change to false to test it out
if (dude) {cout << "It's true dude!";}
else{cout << "Nawh man that aint me!";}

int t = 2; //Try changing this
if(t < 1) {cout << "It be a very small #";}
else if(t < 10) {cout << "It be a small #";}
else if(t < 20) {cout << "It be a normal #";}
else{cout << "It must be a big #";}

```


## Card Colors
```C++ 
bool debug =true;
char color;
cout << "Give me a color[R/B]:";
cin >> color; 

if (color == 'R'){cout << "Its Red!";}
else {cout << "Its Black!";} //standard deck black is all thats left

//Good stratgie for error checking
if (color == 'R'){cout << "Its Red!";}
else if (color == 'B'){cout << "Its Black!";}
else if(debug){cout << color << "is not a real color!";}

```

# Loops
## Number Guesser do while
```C++ 
int num=0;
do{
  cout << "Give me a number:"
  cin >> num;
  if(num > 55) {cout << "Too High";}
  else if(num < 55){cout << "Too Low";}
  else{cout << "Good Job You Got it";}
} while(num != 55) //end while num not 55
```

## Ice Cream while
```C++ 
char responce = 'n';
while(responce == 'n'){
   cout << "Can I have Ice Cream?";
   cin >> responce;
} //end while loop
```

## Ice Cream do while
```C++ 
char responce2;
do{
  cout << "Can I have Ice Cream?";
  cin >> responce2;
}while(responce2 != 'y');
```
Notice we did not need to initilize responce2 with the do while as it will be overwritten by the user before we look at it.
With the while loop we had to force it to be true the first time. 

## Old for loop
```C++
//now replaced by for(int i=0; i < 10; i++){cout << "i:" << i << endl;} 
int i =0;
while(i < 10){
  cout << "i:" << i << endl;
  i++;
}//end while
```
Problem is that the i varable is still around after its done

## Car Trip for loop
```C++ 
int age;
cout << "Give me your age:"
cin >> age;
for(int i =0; i < age; i++){
  cout << "Are we there yet?";
} //end for

```

# Scope
For right now we can think of it as anyting inside any curly brace could just be {} like if(){} or a loop like while(){} etc.
```C++ 
int main(){
  int a = 1;
  { // child begin 
    int b = 2;
    a = 11;
    { // grandchild begin 
      int c = 3;
      a = 111;
      cout << "c:" << c << endl;
    } // grandchild end 
  cout << "b:" << b<< endl;
  } //end child
  cout << "a:" << a<< endl;
  //Can we access b or c here? 
} //end main
```
The childern can access and modity their parents like child can access and change mains varables and the changes are preserved even after the childern are done, but main can not acess its child's or grandchild's varables. 
Same with the grandchild it can access and modity it's parent's(child) and mains varables, but child can not acess its child's(grandchild) varables.

```C++ 
int t;
{t = 100;} // scope1
cout << "t:" << t << endl;

{ //scope2 begin
int s=90;
cout << "s:" << s << endl;
} //scope2 end
cout << "s:" << s << endl; //can we access the varable s?

int i =0; while(i < 9){i++;} cout << i; //i was changed inside a loop and the changes were preserved
```

## Shadowing
Don't do it!
```C++ 
int foo =99;
{ 
  int foo =88;
  cout << foo;
}
cout << foo;
```
What prints out, which foo is foo? 
How do we access the outside one(it's ugly)? 
Do you see the issue now?

## FizzBuzz Game
Good improv exercise or elementry playground game
```C++
#include <iostream>
using namespace std;
int main() {
  cout << "Lets play fizzbuzz, how many numbers do you want to count to?";
  int count =0;
  cin >> count;
  for(int i =0; i < count;i++){
    if((i%3 ==0) && (i%5 ==0)){cout << "FizzBuzz"<< endl;}
    else if(i%5 ==0){cout << "Buzz"<< endl;}
    else if(i%3 ==0){cout << "Fizz"<< endl;}
    else{ cout << i << endl;}

 } //end for loop
}//end main
```

# Functions become what they return
```C++
#include <iostream>
using namespace std;

double add(double i, double j){
  return(i + j);
}//end add

void print(double printme){
  cout << printme << endl;
}//end print

int main() { print(add(11,22)); }
```

# Question was how to get each digit from an int
```C++
  int get_my_digits = 831;
  int digit;

  digit = get_my_digits%10; //==1 this will get us the first digit
  get_my_digits = get_my_digits / 10; //==83 this will get rid of the digit we just got from the number  
  digit = get_my_digits%10; //==3 this will get us the second digit 
  get_my_digits = get_my_digits / 10; //==8 this will get rid of the digit we just got from the number  
  digit = get_my_digits%10; //==8 this will get us the third digit 
  
``` 
Could you possiblity put this into a loop what might be the condition? (get_my_digits > 10)?

# Solution from Russian Nesting Doll Activity
```C++
#include <iostream>
#include <cmath>
using namespace std;
//division numerator
//double n(int x){return(pow(x+3,2));}
double n(int x){return((x+3)*(x+3));}

int plus_one(int y){return(y+1);}
//division denominator
double d(int x, int y){return(sqrt(plus_one(y))+6+x);}

double f(int x,int y){
  return(n(x)/d(x,y));
} //end f
int main() {

  cout << f(11,3) << endl;
}
``` 
