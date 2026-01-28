#include <iostream>
#include <string>
using namespace std;
int *resultptr;

class BankAccount
{
    int pin;
    int accNo;
    string name;
    int balance;

public:
    int chance;
    BankAccount(int account, string name, int balance, int pin, int chance)
    {
        accNo = account;
        this->name = name;
        this->balance = balance;
        this->pin = pin;
        this->chance = chance;
    }
    void deposit(int deposit);
    void withdraw(int withdraw);
    void check();
    void display();
    void choice(int n);
    bool checkPin();
};
void BankAccount ::deposit(int deposit)
{

    if (deposit <= 0)
    {
        cout << "Sorry! This amount is not deposited" << endl;
    }
    else
    {
        balance += deposit;
        cout << "You deposit " << deposit << " rs sucessfully" << endl;
    }
}

void BankAccount ::withdraw(int withdraw)
{
    if (withdraw > balance)
    {
        cout << "Sorry! " << withdraw << " amount is not in your account" << endl;
    }
    else
    {
        cout << withdraw << " rs is withdraw sucessfully" << endl;
        balance -= withdraw;
    }
}
void BankAccount ::check()
{

    char ch;
    cout << "Want to check account balance?((y or n): )" << endl;
    cin >> ch;
    if (ch == 'Y' || ch == 'y')
    {
        cout << "Your balance is :" << balance << endl;
    }
    else if (ch == 'N' || ch == 'n')
    {
        cout << "Thanks for using ATM" << endl;
    }
    else
        cout << "Enter valid choice:" << endl;
}
void BankAccount ::display()
{
    cout << "Account Owner: " << name << endl;
    cout << "Account id " << accNo << endl;
    cout << "Balance: " << balance << endl;
}
bool BankAccount ::checkPin()
{
    int enteredpin ;

    cout << "Enter pin: ";
    while (chance > 0)
    {
        cin >> enteredpin;
        if (enteredpin == pin)
        {
            cout << "Correct pin" << endl;
            return true;

        }
        else
        {
            cout << "Wrong pin " << --chance << " more chance left" << " otherwise permission denied\nTry again: " << endl;
        }
    }
    cout << "Sorry permission denied\n";
    return false;
}
void BankAccount ::choice(int n)
{
    int depositAmount;
    int withdrawAmount;
    if (!checkPin()) return;
    
    switch (n)
    {
    case 1:
    {
        cout << "Enter amount to deposit: ";
        cin >> depositAmount;
        deposit(depositAmount);
    }
    break;

    case 2:
    {
        cout << "Enter amount to Withdraw: ";
        cin >> withdrawAmount;
        withdraw(withdrawAmount);
    }
    break;

    case 3:
        check();
        break;

    case 4:
        display();
        break;

    case 5:
        break;

    default:
        cout << "Enter valid choice" << endl;
    }
}
int main()
{
    int choice;
    BankAccount account1(1199, "Hanan Qaisar", 0, 1212, 3);
    cout<<"\n====ATM DISPLAY====\n";
    cout << "Choose one option:" << endl
         << "1. Deposit" << endl
         << "2. Withdraw" << endl
         << "3. Check Balabnce" << endl
         << "4. Display detail" << endl
         << "5. End" << endl;
         cin >> choice;
         if (!account1.checkPin())
         {
            return 0;
         }
         
    while (choice != 5)
    {
        account1.choice(choice);
        cout << "Choose next option:" << endl;
        cin >> choice;
    };

    return 0;
}