#include <iostream>
using namespace std;

int main() {
    
int amtQuarters = 0;
int amtDimes = 0;
int amtNickels = 0;
int amtPennies = 0;
int totalCents = 0;
int totalAfterFee = 0;

cout << "Enter your coins into the machine: ";
cin >> totalCents;


amtQuarters = totalCents/25;
totalCents %= 25;

amtDimes = totalCents/10;
totalCents %= 10;

amtNickels = totalCents/5;
totalCents %= 5;

amtPennies = totalCents/1;
totalCents %= 1;

totalAfterFee = totalCents * 0.109;

cout << "Amount of quarters: " << amtQuarters << endl;
cout << "Amount of dimes: " << amtDimes << endl;
cout << "Amount of nickels: " << amtNickels << endl;
cout << "Amount of pennies: " << amtPennies << endl;
cout << "Total amount of money: " << totalCents << endl;
cout << "The total after the fee: " << totalAfterFee << endl;
cout << "Total after fee: " << (totalCents*0.109) << totalAfterFee;

return 0;

}