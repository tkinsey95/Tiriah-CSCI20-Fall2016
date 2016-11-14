#include <iostream> 
using namespace std;


 void menuOptions() {
            cout << "Enchiladas: 0" << endl;
            cout << "Hamburgers: 1" << endl;
            cout << "Burritos: 2" << endl;
            cout << "Tacos: 3" << endl;
            cout << "Salad: 4" << endl;
            cout << "Cheesecake: 5" << endl;
            cout << "Muffins: 6" << endl;
            cout << "Pancakes: 7" << endl;
            cout << "Hashbrowns: 8" << endl;
            cout << "Pizza: 9" << endl;
                    }
int main () {
    int menuNum[10] = {0,0,0,0,0,0,0,0,0,0};
    char userIn = '0';
    string menu[10];
    int userChoice = 'd';
    int i = 0;
    char done;
    done = 'd'; 'D';
    
    cout << "The items you can choose from: " << endl;
    menuOptions();
 
    menu[0] = "Enchiladas";
    menu[1] = "Hamburgers";
    menu[2] = "Burritos";
    menu[3] = "Tacos";
    menu[4] = "Salad";
    menu[5] = "Cheesecake";
    menu[6] = "Muffins";
    menu[7] = "Pancakes";
    menu[8] = "Hashbrowns";
    menu[9] = "Pizza";
    

    
    while (userChoice != 'D' || userChoice != 'd') {
        
        
        cout << "Choose type d or D to indicate that you are done choosing an item." << endl; 
        cout << "To select an item off of the menu select a number:  " << endl;
        cin >> userChoice;    
      
    }
    
   if (userChoice <= 9) {
    
        cout << userChoice << endl;
        cin >> userChoice;
    }
    
  
     else if (userChoice > 10) {
        cout << "I'm sorry, but you entered an invalid entry. Please enter a value found on the menu" << endl;   
    }

    
    if ( userChoice == 'd' || userChoice == 'D') {
    cout << "Goodbye." << endl;
    cin >> done;
   
    
    }
}