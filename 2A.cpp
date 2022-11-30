#include <iostream>
#include <string>


using namespace std;


class Student{
private:
	string number;
	string name;
	string phoneNumber;
public:
	Student(){}


	void setNumber(string number){
		this->number=number;
	}
	void setName(string name){
		this->name=name;
	}
	void setPhoneNumber(string phoneNumber){
		this->phoneNumber=phoneNumber;
	}

	string getNumber(){
		return number;
	}
	string getName(){
		return name;
	}
	string getPhoneNumber(){
		return phoneNumber;
	}
};

int main(){
	string number;
	string name;
	string phoneNumber;
	
	cout<<"Enter Student Number: ";
	getline(cin,number);
	cout<<"Enter Student Name: ";
	getline(cin,name);
	cout<<"Enter Student Phone Number: ";
	getline(cin,phoneNumber);

	Student student;
	student.setNumber(number);
	student.setName(name);
	student.setPhoneNumber(phoneNumber);
	cout<<"Student Number: "<<student.getNumber()<<"\n";
	cout<<"Student Name: "<<student.getName()<<"\n";
	cout<<"Student Phone Number: "<<student.getPhoneNumber()<<"\n";
	getline(cin,number);
	return 0;
}