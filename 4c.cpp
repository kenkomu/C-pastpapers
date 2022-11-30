#include <iostream>
#include <string>
using namespace std;


class Animal
{
	protected:
	 //Declaring the members of mother class Animal
	 string name;
	 int age;
	public:
	 void set_value (int a, string n)
	 {
		age = a;
		name = n;
	 }


};


class Zebra:public Animal{
public:
void displayZebraMessage()
{
cout<< "The zebra name is "<<name<<". The zebra is "<< age << " years old \n";}
};


class Dolphin: public Animal
{
public:


void displayDolphinMessage()
{
cout<< "The dolphin name is:  "<< name<< ". The dolphin is "<<age << "years old\n";}
};

int main ()
{
    Zebra zebra;
	Dolphin dolphin;
	zebra.set_value (5,"Zebraaa");
	dolphin.set_value (2,"dolphinnn");


	zebra.displayZebraMessage() ;
	dolphin.displayDolphinMessage() ;


	return 0;
}
