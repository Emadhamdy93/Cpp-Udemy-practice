#include <iostream>
#include <vector>
using namespace std;
#include"Player.h"
#include "Shallow.h"
class Account {
public:
    double balance;
    string name;
    Account(string Name, double Balance = 0.0)
    {
        name = Name;
        balance = Balance;
    }
    void withraw(double amount)
    {
        balance -= amount;
    }

};
int * swap( const int*  a, const const int* b)
{
    int* arr = new int[2];
        arr[0] = *a;
        arr[1] = *b;
            return arr;
}

int main() {
    //Player p;
    ////p.setName("EMAD");
    //cout << p.getHP() << endl;
    Shallow s(100);
    cout << s.getData() << endl;

}