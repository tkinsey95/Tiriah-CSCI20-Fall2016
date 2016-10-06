#include <iostream> 
using namespace std;

int main() {
    int run = 0;
    int cheese = 0;
    int swim = 0; 
    int outdoors = 0;
    int yes = 1;
    int no = 2;

cout << "Enter yes or no if you like the outdoors: ";
cin >> outdoors;

if (outdoors == yes) { 
    cout << "Do you like to run: ?" << endl;
    cin >> run;
    }
    
else if  (outdoors == no) {
        cout << "Do you like cheese: " << endl;
        cin >> cheese;
    }
    
    if (cheese == yes) {
        cout << "You are a mouse!" << endl;
    }
    
    if (cheese == no) {
        cout << "Do you like to swim?" << endl;
        cin >> swim;
    }
    
    if (swim == yes) {
        cout << "You are a fish!" << endl;
    }
    
    if (swim == no) {
        cout << "You are a cat!" << endl;
    }
    
    if (run == yes) {
        cout << "You are a horse!" << endl;
    }
    
    if (run == no) {
        cout << "You are a turtle!" << endl;
    }
    

}