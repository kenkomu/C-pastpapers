#include <iostream>
using namespace std;
class BankAccount{
    public:
        int accountNumber;
        double balance;
        string accountHolder;
        void deposit(string holder,double amount);
        void withdraw(string holder,double amount);
};
class CurrentAccount: public BankAccount{
    public:
    double calculateOverdradt();
};
class DepositAccount: public BankAccount{
    public:
    double calculateInterest();
};
int main(){
    BankAccount Equity;
    return 0;
}