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
