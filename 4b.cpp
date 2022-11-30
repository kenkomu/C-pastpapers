#include <iostream>
#include <string>
using namespace std;

class mother
{
public:
	void display()
	{
		cout <<"This is parent class function";
	}
};

class child: public mother
{
public:
	void display()
	{
		cout <<"\nThis is Child B\n";
	}
};
int main(){
    mother Mary;
    child Ken;
    Ken.display();
    Mary.display();
    return 0;
}