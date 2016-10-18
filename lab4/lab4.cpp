#include <iostream>
using namespace std;

int main() {
    
int amtQuarters = 0;
int amtDimes = 0;
int amtNickels = 0;
int amtPennies = 0;
int totalCents = 0;
int totalAfterFee = 0;
int shopping, discount, fee;

cout << "Enter your coins into the machine: ";
cin >> totalCents;
    
discount = totalCents * 0.109;
totalAfterFee = totalCents - discount; 


amtQuarters = totalCents/25;
totalCents %= 25;

amtDimes = totalCents/10;
totalCents %= 10;

amtNickels = totalCents/5;
totalCents %= 5;

amtPennies = totalCents/1;
totalCents %= 1;

cout << "Amount of quarters: " << amtQuarters << endl;
cout << "Amount of dimes: " << amtDimes << endl;
cout << "Amount of nickels: " << amtNickels << endl;
cout << "Amount of pennies: " << amtPennies << endl;
cout << "The total after the fee: " << totalAfterFee << endl;

return 0;

}