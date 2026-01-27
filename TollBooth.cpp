#include <iostream>
using namespace std;

class TollBooth
{
public:
    unsigned int totalcars;
    double totalcash;

    TollBooth()
    {
        totalcars = 0;
        totalcash = 0;
    }
    void payingcar();
    void nopaycar();
    void Display();
};

void TollBooth ::payingcar()
{
    totalcash += 0.50;
    totalcars++;
}
void TollBooth ::nopaycar()
{
    totalcars++;
    totalcash = totalcash; // remain same
}
void TollBooth ::Display()
{
    cout << "\n====== Toll Booth Report ======\n";
    cout << "Total cars: " << totalcars << endl;
    cout << "Total cash: " << totalcash << endl;
}
int main()
{
    TollBooth tool;
    char choice;
    cout << "Enter choice " << endl
         << "P = count a paying car" << endl
         <<

        "N = count a non-paying car" << endl
         <<

        "E for exit program and show Report" << endl;
    cin >> choice;
    do
    {
        if (choice == 'P' || choice == 'p')
        {
            tool.payingcar();
        }
        else if (choice == 'N' || choice == 'n')
        {
            tool.nopaycar();
        }
        cout << "Enter next car: " << endl;
        cin >> choice;
    } while (choice != 'e' && choice != 'E');
    tool.Display();

    return 0;
}
