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
