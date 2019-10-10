# CS11 Session Notes for Fall 2018 SI Sessions

# Week 1 Material for CS11 SI 

Presentations
[Session 1](https://docs.google.com/presentation/d/1pS_J3_XUL5eYGV-eiZLHZH_rgLd2U3gAROQINQnxDvk/edit?usp=sharing)

Make sure got a working env, installed g++ able to do hello world
explain concepts of documentaion, main and return codes
what compliation is cout >>> 640AF >> 1010101...10101


cd /home/carter/Dropbox/CISCSClasses/CS11SI # go into the directory
g++ blank.cpp                               # compile your code
./a.out #>>> Greetings!
echo $? #>>> 0

g++ -c hello.cpp
objdump -D hello.o

/** 
 * Name: Carter Frost 
 * Email: Carter90@gmail.com
 * Filename: blank.cpp
 * Example name: mains
 * Description: 
 * Code status: Working!
 * Program compile: Yes
 * Errors or warnings: None
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
int main(int argc, char *argv[]) { 
cout << "Greetings!" << endl; 
return(0); 

}
/*
int main() {
	cout << "Greetings!\n" << endl; //this prints out "Greetings!" and a new line
} //end main

#include <iostream>

int main() {
  std::cout << "Hello World!\n";
  int me = 1;
  me = 4;
  std::cout << me;
  double me2 = 2.2;
  std::cout << me2;
}

*/

+ (addition)
- (subtraction)
* (multiplication)
/ (division)
% (modulus)

== (equality)
!= (inequality)
> (greater-than)
< (less-than)
>= (greater-than-or-equal-to)
<= (less-than-or-equal-to)

! (NOT)
&& (AND)
|| (OR)

^ (XOR)
| (OR)
& (AND)
~ (complement)
<< (shift left, insertion to stream)
>> (shift right, extraction from stream)

# Week  Material for CS11 SI 

## Pemdas example
```C++
cout << "1 + 2 * 3 =" << (1 + 2 * 3) << endl;  //prints  1 + 2 * 3 =7
cout << "(1 + 2) * 3 ="  << ((1 + 2) * 3) << endl;  //prints (1 + 2) * 3 =9
```

## Rounding example using casting and cmath's ceil
```C++
#include <cmath> //ceil

  double x = 2.3;
  //think of the graph of y = x its a line right
  cout << "x:" << x << endl; //prints x:2.3
  // what about y = (int)x it's like a stair case
  cout << "(int)x:" << (int)x << endl; //prints (int)x:2
  // what about y = ceil(x) it's like a stair case but shifted
  cout << "ceil(x):" << ceil(x) << endl; //prints ceil(x):3
```

## Presentations
[Session 2/3](https://drive.google.com/open?id=1Naf2xUPPTr7BsGFOis0rmHxMbAihgMA0cK9Lm57qWf4)

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

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
string meh = "This is a dude test";
cout << meh.substr (3,5) <<endl; 
cout << meh.substr (3)<<endl;
int du = meh.find("dude");
cout << meh.substr(du+4) << endl;

}


# Week  Material for CS11 SI 

Presentations
[Session 4](https://drive.google.com/open?id=12wxhfRcD-YpUHIEUFXESjZuoK9rRiKiDqNpAhOG6oVM)  
[Session 5](https://drive.google.com/open?id=1_x87mbHhUGxq22C2C_ddkNlP7-Aym5hxtgu5LAQRKyw)  


 #include <iostream>
using namespace std;

int main() {
	int i = 5;
	{
	 	cout << i <<endl;
	 	i = 10; 
	} //end if
	cout << i <<endl; 
	meep();
	cout << test;
 }



// #########Scope#########
#include <iostream>
using namespace std;
int main() {
    int i = 10;
    cout << i << endl;
  //int i = 2;
  cout << i << endl;
  std::cout << "Hello World!\n";
}
// #########End Scope#########

// ######### #########
cout << setprecision(3) << 10.1234 << endl;
vs
cout.precision(3);
cout << 10.1234 << endl;
// #########End #########



if(!str1.compare(str2))
{
    std::cout << "These strings are equal" << std::endl;
}

  std::string meh = "This is a dude test";
  
  std::cout << meh.find("dude") << std::endl << meh.substr(meh.find("dude")) << std::endl;

# Week  Material for CS11 SI 

Presentations
[Session 6](https://drive.google.com/open?id=1oxKOHbUFxx3L1rqIDJb6Np5jkz7OHtbKNV8Cd0fdfA4)  
[Session 7/8](https://drive.google.com/open?id=16_huLzYkIWDPOgPZvN4nQate0z68u_R0LnkxwYtSiHg)  

#Shadow
#include <iostream>

int main() {
  /*
  for(int i =0; i < 10;i++){
    std::cout << i; 
  }
  for(int i =0; i < 10;i++){
    std::cout << i; 
  }*/
  ///====
  //std::cout << ":"<< i; 
  int i = 0;
  while(i < 5){std::cout << i; i++;}
  
  { i = 0;
  while(i < 10){std::cout << i; i++;}}
  std::cout << ":" <<i;
}

# Types
```C++
#include <iostream>
#include <string>
#include <typeinfo>

int main() {
  std::string meh = "this is a test?";

std::cout << "0:" << typeid(0).name() << std::endl;
  std::cout << "meh[0]:" << typeid(meh[0]).name() << std::endl;

  std::cout << "meh.substr(0,1):" << typeid(meh.substr(0,1)).name() << std::endl; 
} //end main
```

# Week  Material for CS11 SI 

Presentations
[Session 7/8](https://drive.google.com/open?id=16_huLzYkIWDPOgPZvN4nQate0z68u_R0LnkxwYtSiHg)  
[Session 9](https://drive.google.com/open?id=1X6ItAq-yt75fjj9Ml1TkvqGxLIFHD3w9dj8p37NTbC0)  

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

# Week  Material for CS11 SI 

Presentations
[Session 10/11](https://drive.google.com/open?id=1Mnw5iKTR9VBX0HI8p14U5ed4XXEEJj9Li7pyV9E4DVQ)  


# Week  Material for CS11 SI 

Presentations
[Session 12](https://drive.google.com/open?id=1LWg34Tc8fdXf6x0Z4y_vLhTE4_m9kFYh5UMYb7h-zy8)  
[Session 13](https://drive.google.com/open?id=1iisPMKCwBNGuoxVnn6WO-0e6nv3k9rwLb-mJfXpIv2k)  

boolean makes5(int t, int s){return((t+s==5)||(t == 5 && s==5)); }

#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	cout << "a:" << a <<",b:" << b << ",c:" << c << endl;
	} //end main

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



# c_name.cpp
#include <iostream> 
using namespace std;
class c_name { 
	public: 
		
		int meh2(int t){return(t+me_priv);}
		int get_me_priv(){return(me_priv);}
		void set_me_priv(int newpriv){
				if (newpriv > 0) {me_priv = newpriv;}
			}
		void comp(c_name other){
			cout << (other.get_me_priv() - me_priv) <<endl;
			}
	private:
		int me_priv = 11; 
};

class Contain { 
	public:
		int t = 0;
		string s = "me";
};
int meh(int t){return(t+1);}
//void print(string str){cout << str;}
Contain print(Contain con){
	cout << con.s << con.t <<endl;
		con.s = "printed";
		return(con);
		}

int main(){
	//string s = "this is a test";
	//print(s);
	Contain con = Contain();
	con.s = "new";
	con.t = 5000;
	con = print(con);
	print(con);
	//c_name c = c_name();
	//c_name r = c_name();
	//c.set_me_priv(5);
	//cout << r.get_me_priv() - c.get_me_priv() <<endl;

}

# Week  Material for CS11 SI 

Presentations
[Session 14](https://drive.google.com/open?id=1Gg9bIxHFq5eTjcOhpQtYbHfZiLAMfijr1EYOogyWmg4)  

# Week  Material for CS11 SI 

Presentations
[Session 15](https://drive.google.com/open?id=10tErKTUyhthyVDOuIn89LqOn7dF2GaBdwLM9suXM4f8)  

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



# Week  Material for CS11 SI 

Presentations
[Session 16](https://drive.google.com/open?id=1D23gmbvcDt2aR_iL35tOMZvo78Z_dtJEjSkfBlDKzFo)  
[Session 17](https://drive.google.com/open?id=1YmIMQR788156V0ICtRmLi3DVogFrvkyExcjaOMXUI0Y)  


# House
#include <iostream>

class Size{
	public: 
		Size();
		Size(double l, double w);
		double getL(){return(lenth);}
	private:
		double lenth;
		double width;
;};

class Door{
	public:
		Door();
	private:
		Size size;
};

class Window{
	public:
		Window();
	private:
		Size size;
};

class Room{ 
	public:
		Room();
;};

Room::Room(){ 
	/*
	Door array
	Window array
	int max of doors, windows
	int current number of doors, windows
	*/
; } 

class House{
	private:
		Size size;
		int maxOfRooms = 10;
		int numOfRooms = 0 ;
		Room rooms[10];
	public:
		House();
		House(double lenth, double width);
		House(Size s);
		House(Size s, Room r );
		//Need one more for an Array of rooms
};
Size::Size(){;};  //defalt
Size::Size(double l, double w){ lenth = l; width =w; }; 

House::House(){ 
	maxOfRooms = 10; 
	numOfRooms=0; 
	size = Size(1000.0,1000.0); 
} //end house defalt construtor

House::House(double lenth, double width){
	size = Size(lenth,width); 
} //end house construtor

House::House(Size s){ size=s; }

House::House(Size s, Room r ){ size=s; rooms[0]=r; }

int main(){
	House house();
}


# Week  Material for CS11 SI 

Presentations
[Session 18/19](https://drive.google.com/open?id=1DDquFnwj1QwAlxkAGmkuz6KKdPd2EpSFQJ6yR1PWT6A)  
[Ed Parrish's Graphics and Animation](http://www.edparrish.net/cs11/18f/lesson13.php)  

## Compiling the GUI
g++ -c GUI.cpp; g++ GUI.o -o myGUI -lsfml-graphics -lsfml-window -lsfml-system

## GUI Code
```C++
#include <cmath>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

int main()
{
    const float SIZE = 400.0f;
    sf::RenderWindow win(sf::VideoMode(SIZE, SIZE), "Test");
    win.setVerticalSyncEnabled(true);
    const float RADIUS = 30.f;
    sf::CircleShape circ(RADIUS);
    circ.setFillColor(sf::Color::Green);
    float dx = 2.5f;
    float dy = 0.0f;
    
    for(int x=0;x<SIZE;x+=50) {
        for(int y=0;y<SIZE;y+=50) {      
            sf::RectangleShape rec(sf::Vector2f(50, 50));
            rec.setOutlineThickness(2);
            rec.setFillColor(sf::Color(100,100,100,100));
            rec.setPosition(x,y);
            win.draw(rec);
            win.display();
        } } //end fors
    
    while (win.isOpen())
    {
        // Process events
        sf::Event event;
        //win.clear(); // first step
    
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win.close();
            }
            // Escape key pressed
            if ((event.type == sf::Event::KeyPressed)
                && (event.key.code == sf::Keyboard::Escape))
            {
                win.close();
            }
        }
        
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            sf::Vector2i pos = sf::Mouse::getPosition(win);
            cout << pos.x << " " << pos.y << "\n";
            
            if ( pos.x <= SIZE && pos.y <= SIZE ){
                sf::RectangleShape rec2(sf::Vector2f(50, 50));
                rec2.setOutlineThickness(2);
                rec2.setFillColor(sf::Color(200,0,0,245));
                int mult= 50.0;
                int x = ((pos.x + mult/2) / mult) * mult;
                int y = ((pos.y + mult/2) / mult) * mult;
                //rec2.setPosition(x,y);
                //win.draw(rec2);
                //win.display();
                //getFillColor()
            } 
            
        }
        sf::sleep(sf::milliseconds(100));
    }
return 0;
} 
```

```C++
#include <cmath>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
int main() {
    sf::RenderWindow win(sf::VideoMode(600, 400), "Anim2");
    win.setVerticalSyncEnabled(true);
    const float RADIUS = 30.f;
    const float SPEED_X = 2.5f;
    const float SPEED_Y = 2.5f;
    sf::CircleShape circ(RADIUS);
    circ.setFillColor(sf::Color::Green);
    float dx = SPEED_X;
    float dy = SPEED_Y;

    while (win.isOpen()) {
        sf::Event event;
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win.close();
            }
        }
        // Update
        sf::Vector2u size = win.getSize();
        sf::Vector2f pos = circ.getPosition();
        if (pos.x < 0)
        {
            dx = std::abs(dx);
        }
        else if (pos.x + RADIUS * 2 > size.x)
        {
            dx = -std::abs(dx);
        }
        if (pos.y < 0)
        {
            dy = std::abs(dy);
        }
        else if (pos.y + RADIUS * 2 > size.y)
        {
            dy = -std::abs(dy);
        }
        circ.move(dx, dy);
        // Render
        win.clear();
        win.draw(circ);
        win.display();
        sf::sleep(sf::milliseconds(10));
    }
    return 0;
}
```

# Week  Material for CS11 SI 

Presentations
[Session 20](https://drive.google.com/open?id=126vag8WcD5lGiAA2RLPJJfv485SjiTkkku5KCInA77Q)  
[Session 21](https://drive.google.com/open?id=100a01Vz2kbGO_0LyE50i-9askr6BoFiADaGhZMIy5Ys)  

## Pokemon Activity 
```C++
#include <iostream>
#include <vector>
using namespace std;
class Pokemon{
	public:
		Pokemon(){
			k_dex =0; 
			n_dex =0; 
			name ="";
			hp =0; 
			speed =0; 
			attack =0;
		}
		Pokemon(int new_k_dex, int new_n_dex, string new_name, int new_hp,double new_speed,int new_attack, vector<string> new_types){
			k_dex = new_k_dex; 
			n_dex = new_n_dex; 
			name = new_name;
			hp = new_hp; 
			speed = new_speed; 
			attack = new_attack;
			types = new_types;
		}
		void print() const;
		double get_speed() const{ return(speed);}
		int get_hp(){return(hp);}
		int get_attack(){return(attack);}
		string get_name(){return(name);}
		void set_hp(int new_hp){hp = new_hp;}
		//battle returns true this pokemone won, false lost
		bool battle(Pokemon other){
			bool my_turn = false;
			if(speed > other.get_speed()){ my_turn = true;}
			do {
				if(my_turn) { other.set_hp(other.get_hp() - attack); 
				cout << name << " attacks " << other.get_name()<<endl;
				cout << other.get_name() << "'s HP:" << other.get_hp() <<endl;
				}
				else { hp = hp - other.get_attack(); 
				cout << other.get_name() << " attacks " << name<<endl;
				cout << name << "'s HP:" << hp <<endl;

				} //others turn
				my_turn = !my_turn;
			}
			while( hp > 0 && other.get_hp() > 0);
			return(hp > 0);
		}
	private:
		int k_dex =0; int n_dex=0; string name;
		vector<string> types;
		int hp; double speed; int attack;
};

int main(){
	//Pokemon(int new_k_dex, int new_n_dex, string new_name, int new_hp,double new_speed,int new_attack, vector<string> new_types)
	Pokemon bulba(1,1,"Bulbasaur",30,11,11,{"Grass", "Poison"});
	Pokemon peka(25,25,"Pikachu",25,10,13,{"electric"});
	if (bulba.battle(peka)) {cout << "bulba wins";}
	else {cout << "peka wins";}
}

```
### Output
```
Bulbasaur attacks Pikachu
Pikachu's HP:14
Pikachu attacks Bulbasaur
Bulbasaur's HP:17
Bulbasaur attacks Pikachu
Pikachu's HP:3
Pikachu attacks Bulbasaur
Bulbasaur's HP:4
Bulbasaur attacks Pikachu
Pikachu's HP:-8
bulba wins  
```

# Week  Material for CS11 SI 

Presentations
[Session 22/23](https://drive.google.com/open?id=1eVkumaAj6lZ7IMGnkypFTxm7y-KxlPI2bS--8YHi0uA)  

# Week  Material for CS11 SI 
Week 14
Presentations
[Session 24/25](https://drive.google.com/open?id=1UBMK93XA8ipV4hzapYIwmVqQX1YITkHEeWijxO2voSk)  

##Recursion 
```C++ 
#include <iostream>
using namespace std;
 void print_to_n(int n){
	if(n == 0){return;}
	cout << n << ", ";
	print_to_n(n-1);
	cout << ".";
} //end print_to_n

 void print_zero_to_n(int n){
        if(n == -1){return;}
        print_zero_to_n(n-1);
	cout << n << ", ";
} //end print_zero_to_n

 int multi (int x, int y){
	int temp = 0;
	for(; y > 0; y--){
		temp += x ;
	} //end for 
	return(temp);
} //end multi

int r_multi(int x, int y){
	if (y == 0){return(0);}
        int temp = 0;
 	temp += x ;
        temp += r_multi(x, y -1);
        return(temp);
} //end r_multi

int main(){
	print_to_n(8);
	cout << endl;
	print_zero_to_n(11);
	cout << r_multi(3,5) << endl;
} //end main
```

# Week  Material for CS11 SI 

Presentations
[Session 26/27](https://drive.google.com/open?id=1Ug7KJoNzBz6Qgua9Cu-XU1eMjBAJUUIKdhynn2Xt3k0)

# What
## Subwahat
```C++ 


```

