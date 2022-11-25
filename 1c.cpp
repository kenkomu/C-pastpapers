#include <iostream>

using namespace std;

int main()
{
    int x=11;

    for (int i=1;i<x;i++){
        cout <<"Number is " << i << ", "<<endl;
        int n = i*i;
        cout <<"Square is " << n << ", "<< endl;
    }
    return 0;
}
