# CS11 Session Notes for Fall 2019 SI Sessions


# If/Else example
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


# Card Colors
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


# Number Guesser do while
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

# Car Trip for loop
```C++ 
int age;
cout << "Give me your age:"
cin >> age;
for(int i =0; i < age; i++){
	cout << "Are we there yet?";
} //end for

```

