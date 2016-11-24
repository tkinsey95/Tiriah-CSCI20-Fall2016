#include <iostream> 
#include <vector>
using namespace std;


 void menuOptions(string menu[])
 {
     for (int i=0; i <10; i++)
        cout << menu[i] << endl;
 }
 
int main () 
{
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
      
 std::vector <std::string> previousOrders;
    
   if (userChoice <= 9 + 48) {
    
        cout << "you chose: " << menu[userChoice - 48] << endl;
        previousOrders.push_back(menu[userChoice]);
         
   }
 for (int i = 0; i < previousOrders.size(); i++) 
  {
   std::cout << previousOrders[i] << std::endl;
   
  }
    
 if ( userChoice == 'd' || userChoice == 'D') 
    {
     menuNum[userChoice - 48] = 1;
     menuNum[userChoice - 48] = 2;
       cout << "Goodbye." << endl;
    }    
    
   
    }
cout << "you chose: " << menuNum[userChoice - 48] << endl;
    
}