#include <iostream> 
using namespace std;


 void menuOptions(string menu[]) {
     for (int i=0; i <10; i++)
        cout << menu[i] << endl;
       
 }
 
int main () {
   int amntItems[10]; 
   int nthAmntItems = 0; 
      
   
    int menuNum[10] = {0,0,0,0,0,0,0,0,0,0};
    
    char userIn = '0';
    string menu[10] = {"Enchiladas", "Hamburgers", "Burritos", "Tacos" "Salad", "Cheesecake", "Muffins", "Pancakes", "Hashbrowns", "Pizza"};
    char userChoice = 'x';
    int i = 0;
    char done;
    done = 'd'; 'D';
    
    cout << "The items you can choose from: " << endl;
    menuOptions(menu);
 
    
    
    while (userChoice != 'D' && userChoice != 'd') {
        
        
        cout << "Choose type d or D to indicate that you are done choosing an item." << endl; 
        cout << "To select an item off of the menu select a number:  " << endl;
        cin >> userChoice;
      
    
   if (userChoice <= 9 + 48) {
    
        cout << "you chose: " << menu[userChoice - 48] << endl;
    }
    
     else if (userChoice > 10 + 48 && userChoice != 'd' && userChoice != 'D') {
        cout << "I'm sorry, but you entered an invalid entry. Please enter a value found on the menu" << endl;   
    }

    
    if ( userChoice == 'd' || userChoice == 'D') {
    
  /*  for (i = 0, i < 10; i++;) {
    

        cout << " selected " << menuNum[i] << " time." << endl;*/

    cout << "Goodbye." << endl;

    
    }    
    
   
    }
    
       
int amntEnchiladas = 0;
int amntHamburgers = 1;
int amntBurriots = 2;
int amntTacos = 3;
int amntSalad = 4;
int amntCheesecake = 5;
int amntMuffins = 6;
int amntPancakes = 7;
int amntHashbrowns = 8;
int amntPizza = 9;
int totalAmntItems = 10;

totalAmntItems = amntEnchiladas + amntHamburgers + amntBurriots + amntTacos + amntSalad + amntCheesecake + amntMuffins + amntPancakes + amntHashbrowns + amntPizza;
cout << "Your total items: " << totalAmntItems << endl;
    

    
}