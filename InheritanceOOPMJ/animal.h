#include <string>
using namespace std; 

class Animal
{
	

private:
	  
	string name = "";
	
	
	string speak = "";
	
	int age = 0;
	 
	
	
public:
		
	void Animal::set_name(string new_name) 
	{
		name = new_name; 
	}
	
	void Animal::set_speak(string new_speak)
	{
		speak = new_speak;
	}
	
	void Animal::set_age(int new_age)
	{
		age = new_age;
	}
	
	string Animal::get_name()
	{
		return name;
	}
	
	int Animal::get_age()
	{
		return age;
	}
	
	string  Animal::get_speak()
	{
		return speak;
	}
	
	 
	
	
};



