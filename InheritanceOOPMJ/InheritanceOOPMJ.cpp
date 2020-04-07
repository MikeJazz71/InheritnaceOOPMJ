/*Inhertance Assignemnt Week 4; CIS 2503; Professor George; 
I know that this could be written better and I will revisit it as I learn more.  I have watched a lot of Bucky's C++ videos and 
I feel like I am truly drinking out of a fire house.  I really do undersand that the subclasses of Cat, Tiger and Dog all inherit the 
functions that were assigned to the Animal class which is the point of this assignment.  I now understand the value of classes and 
declaring everything in the headers and writing it in the souce file.  I see how that would make things way easier.  I am just trying to 
understand of all the in's and out's of doing that, and honestly it is quite daunting.
*/

#include "pch.h"
#include <iostream>
#include <string>

using namespace std; 



class Animal
{
public:
	string speak() { return "Shhh!"; } // Parent class function.  All subclasses inherit it
	string am_safe() { return "I am not sure";  } //Same. Checking to see if it is safe
	string tail() { return "Yes I have a tail";  }
	int get_age() { return age; }
	void set_age(int n) { age = n; }
	
private: 
	int age;
	
	
	
	
};

class Dog : public Animal
{
public:
	string speak() { return "Grrr!"; }
	string am_safe() { return "I am domesticated and I love sleeping on my bed"; }
	string tail() { return "I love to wag my tail"; }
	string spoiled() { return "My owners spoil me rotten";  } // Dog functions
};

class Tiger : public Animal
{
public:
	string speak() { return "Roar!"; }
	string am_safe() { return "Absolutely not.  I will eat you.";  }
	string tail() { return "Touch my tail and I will bite you.";;  }
	bool haveStripes() { return true;  } //Tiger specific functions
	bool liveInAfrica() { return true;  }//Tiger specific functions
	
};

class Cat : public Animal
{
public:
	string speak() { return "Meow!"; }
	string am_safe() { return "Yes.  I will sleep on your lap."; }
	string tail() { return "Yeah....leave my tail alone."; } 
	string mouse() { return "I catch a lot of mice"; }; // Cat function
}; 
int main()
{
   Tiger Mike;
   Cat Debbie; 
   Dog Maddie; 
   Mike.set_age(9); 
   cout << Mike.speak()<< endl; 
   cout << Mike.am_safe() << endl; 
   cout << Mike.tail() << endl; 
   cout << "I am " << Mike.get_age() << " years old" << endl; 
   if (Mike.haveStripes() == 1)
   {
	   cout << "Yes I have stripes" << endl;
   }
   else
   {
	   cout << "No Stripes" << endl;
   }

   if (Mike.liveInAfrica() == 1)
   {
	   cout << "Yes I roam the Serengeti looking for my next meal" << endl;
   }
   else
   {
	   cout << "Nope.  I love living in a house" << endl;
   }

   cout << "\n\n\n\n"; 

   Debbie.set_age(23);
   cout << Debbie.speak() << endl;
   cout << Debbie.am_safe() << endl;
   cout << Debbie.mouse() << endl;
   cout << "I am " << Debbie.get_age() << " years old" << endl;
   cout << "\n\n\n\n";
   Maddie.set_age(3);
   cout << Maddie.speak() << endl;
   cout << Maddie.am_safe() << endl;
   cout << Maddie.spoiled() << endl;
   cout << "I am " << Maddie.get_age() << " years old" << endl;
}

