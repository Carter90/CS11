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

int main(){
  int a = 1;
  { // child begin 
    int b = 2;
    a = 11;
    { // grand child begin 
      int c = 3;
      a = 111;
      cout << "c:" << c << endl;
    } // grand child end 
  cout << "b:" << b<< endl;
  } //end child
  cout << "a:" << a<< endl;
  //Can we access b or c here? 
} //end main

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


