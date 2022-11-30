#include <iostream>
using namespace std;
class MyClass {
  public:
    MyClass() { //CLASS CONSTRUCTOR
        cout << "Hello World!"<<endl;
    }
    ~MyClass() { //CLASS DESTRUCTOR
        cout << "Hello World!"<<endl;
    }
    friend int Age(int x); //FRIEND FUNCTION
};
    int Age(int x){
            cout << "Animal's age is "<< x << endl;
    }
int main() {
  MyClass myObj;
  Age(10);
  return 0;
}
