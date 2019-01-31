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
