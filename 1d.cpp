//CLASS CONSTRUCTOR
#include <iostream>
using namespace std;
class MyClass {
  public:
    MyClass() {
        cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;
  return 0;
}
//CLASS DESTRUCTOR

#include <iostream>
using namespace std;
class MyClass {
  public:
    ~MyClass() {
        cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;
  return 0;
}

// FRIEND FUNCTION
#include <iostream>
using namespace std;
class Animal{
    public:
        friend int Age(int x);
};
int Age(int x){
            cout << "Animal's age is "<< x << endl;
        }
int main() {
  Animal lion;
  Age(10);
  //cout<<Age(10) << endl;
  return 0;
}
