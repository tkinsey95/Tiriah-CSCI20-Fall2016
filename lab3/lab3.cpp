// Created by: Tiriah Kinsey

#include <iostream> 
#include <string>
using namespace std; 

int main() {

string nameMale = "";
string nameFemale = "";
string noun = "";

int numAgo;
int numSince;
float mileTime;
                  
    cout << "      ____          " << endl;
    cout << "     /   /       " << endl;
    cout << "    /   /       " << endl;
    cout << "   /   /     " << endl;
    cout << "  /   \\           " << endl;
    cout << " \\    \\     " << endl;
    cout << "  \\    \\     " << endl;
    cout << "   \\    \\    " << endl;
    cout << "    \\    \\   " << endl;
    cout << "    /  /    " << endl;
    cout << "   /  /    " << endl;
    cout << "  / /       " << endl;
    cout << " //         " << endl;
    cout << "/          " << endl;
    // © Copyright Tiriah Kinsey 2016
     
/* 
The Story of The Flash

In Central City lives The Flash. His real name is Barry. 
It was 14 years ago when his mom died. 
Barry has been in love with his bestfriend Iris, since he was 11 years old. 
At the speed of light, Flash can run a mile in 5.3 microseconds!
*/

cout << "Please enter a city." << endl;
cin >> noun;

cout << "Please enter a male name." << endl;
cin >> nameMale;

cout << "Please enter an even number." << endl;
cin >> numAgo;

cout << "Please enter a female name." << endl;
cin >> nameFemale;

cout << "Please enter a whole number." << endl;
cin >> numSince;

cout << "Please a decimal number." << endl;
cin >> mileTime;


cout << "In " << noun << " lives The Flash. " << endl;
cout << "His real name is " << nameMale << "." << endl; 
cout << "It was " << numAgo << " years ago when his mom died." << endl;
cout << nameMale << " has been in love with his bestfriend " << nameFemale << ", since he was " << numSince << " years old." << endl;
cout << "At the speed of light, Flash can run a mile in " << mileTime << " microseconds!" << endl;
   
return 0;

}

