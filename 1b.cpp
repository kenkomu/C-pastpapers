#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter a number" << endl;
    cin >> x;
    if (x % 2 == 0){
        cout << "Number is even" << endl;
    }
    if (x % 2 == 1){
        cout << "Number is odd" << endl;
    }
    return 0;
}
