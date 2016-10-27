#include <iostream> 
using namespace std;

int main () {
    const int menu_Items = 10;
    int itemAmnt [menu_Items];
    int i = 0;
    double useritemAmnt = 0;
    
    itemAmnt[i] = 1;
    itemAmnt[i] = 2;   
    itemAmnt[i] = 3;  
    itemAmnt[i] = 4;  
    itemAmnt[i] = 5;  
    itemAmnt[i] = 6;  
    itemAmnt[i] = 7; 
    itemAmnt[i] = 8;  
    itemAmnt[i] = 9; 
    itemAmnt[i] = 10;  
    
    cout << "Enter the amount of items:  " << endl;
    cin >> useritemAmnt;
    
return 0;
}