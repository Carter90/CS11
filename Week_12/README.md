# Week  Material for CS11 SI 

Presentations
[Session 20](https://drive.google.com/open?id=126vag8WcD5lGiAA2RLPJJfv485SjiTkkku5KCInA77Q)  

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
