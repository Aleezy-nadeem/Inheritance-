#inlcldue<iostream>
using namespace std;


class Employee{

  private:
  	string name;
  	int number;
  public:
  	Employee(string na, int nu):name(na), number(nu){
  		
	  }
	  
	void show_details(){
		
		cout<<"Name is: "<<name<<endl;
		cout<<"Emp number is: "<<number<<endl;
	}
};
class Manager: public Employee{
	private:
	   string title;
	   int club_dues;
	public:
		Manager(string t, int cd, string na, int nu ):Employee(na, nu){
			title = t;
			club_dues = cd	
				}
	void show_details(){
		Employee::show_details();
		cout<<"Title: "<<title<<endl;
		cout<<"Club dues: "<<club_dues<<endl;
		
	}
	
};

class Scientist:public Employee{
	
};

class Labour:public Employee{
	
};


int main(){
}
