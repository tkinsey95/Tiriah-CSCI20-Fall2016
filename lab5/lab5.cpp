  #include <iostream> 
  #include <string>
  
  using namespace std;
  
  struct monsterStruct {
     string head;
     string eyes;
     string ears;
     string nose;
     string mouth;
  };
  
  int main() {
      //Struct
      monsterStruct monsterOne;
      monsterStruct monsterTwo;
      monsterStruct monsterThree;
      monsterStruct monsterFour;
      
      cout << "Let's build some monsters!!" << endl;
      
      //This is for Monster One
      cout << "Choose one head." << endl;
      cout << "[Zombus] [Boo] [Dracula]" << endl;
      cout << "Please enter an head type: "; 
      cin >> monsterOne.head;
      cout << endl;
      
      cout << "Choose a type of eyes." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter an eye type: "; 
      cin >> monsterOne.eyes;
      cout << endl;
      
      cout << "Choose an ear type." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter an ear type: "; 
      cin >> monsterOne.ears;
      cout << endl;
      
      cout << "Choose a nose type." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter an nose type: "; 
      cin >> monsterOne.nose;
      cout << endl;
      
      cout << "Choose a mouth type." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter a mouth type: "; 
      cin >> monsterOne.mouth;
      cout << endl;
      
      //This is for Monster Two
      cout << "Choose one head." << endl;
      cout << "[Zombus] [Boo] [Dracula]" << endl;
      cout << "Please enter an head type: "; 
      cin >> monsterTwo.head;
      cout << endl;
      
      cout << "Choose a type of eyes." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter an eye type: "; 
      cin >> monsterTwo.eyes;
      cout << endl;
      
      cout << "Choose an ear type." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter an ear type: "; 
      cin >> monsterTwo.ears;
      cout << endl;
      
      cout << "Choose a nose type." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter an nose type: "; 
      cin >> monsterTwo.nose;
      cout << endl;
      
      cout << "Choose a mouth type." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter a mouth type: "; 
      cin >> monsterTwo.mouth;
      cout << endl;
      
      //This is for Monster Three
      
       cout << "Choose one head." << endl;
      cout << "[Zombus] [Boo] [Dracula]" << endl;
      cout << "Please enter an head type: "; 
      cin >> monsterThree.head;
      cout << endl;
      
      cout << "Choose a type of eyes." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter an eye type: "; 
      cin >> monsterThree.eyes;
      cout << endl;
      
      cout << "Choose an ear type." << endl;
      cout << "[Vegitas] [Spritem] [Wackusm]" << endl;
      cout << "Please enter an ear type: "; 
      cin >> monsterThree.ears;
      cout << endl;
      
      cout << "Choose a nose type." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter an nose type: "; 
      cin >> monsterThree.nose;
      cout << endl;
      
      cout << "Choose a mouth type." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter a mouth type: "; 
      cin >> monsterThree.mouth;
      cout << endl;
      
      //This is the Fourth Monster 
      cout << "Choose one head." << endl;
      cout << "[Zombus] [Boo] [Dracula]" << endl;
      cout << "Please enter an head type: "; 
      cin >> monsterFour.head;
      cout << endl;
      
      cout << "Choose a type of eyes." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter an eye type: "; 
      cin >> monsterFour.eyes;
      cout << endl;
      
      cout << "Choose an ear type." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter an ear type: "; 
      cin >> monsterFour.ears;
      cout << endl;
      
      cout << "Choose a nose type." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter an nose type: "; 
      cin >> monsterFour.nose;
      cout << endl;
      
      cout << "Choose a mouth type." << endl;
      cout << "[Vegitas] [Spritem] [Wackus]" << endl;
      cout << "Please enter a mouth type: "; 
      cin >> monsterFour.mouth;
      cout << endl;
      
      //output
      cout << "Monster One: " << endl; 
      cout << "Head " << monsterOne.head <<endl;
      cout << "Eyes " << monsterOne.eyes <<endl; 
      cout << "Ears " << monsterOne.head <<endl;
      cout << "Head " << monsterOne.head <<endl;
      
      cout << "Monster Two: " << endl; 
      cout << "Head " << monsterTwo.head <<endl;
      cout << "Eyes " << monsterTwo.eyes <<endl; 
      cout << "Ears " << monsterTwo.head <<endl;
      cout << "Head " << monsterTwo.head <<endl;
      
      cout << "Monster Three: " << endl; 
      cout << "Head " << monsterThree.head <<endl;
      cout << "Eyes " << monsterThree.eyes <<endl; 
      cout << "Ears " << monsterThree.head <<endl;
      cout << "Head " << monsterThree.head <<endl;
      
      cout << "Monster Four: " << endl; 
      cout << "Head " << monsterFour.head <<endl;
      cout << "Eyes " << monsterFour.eyes <<endl; 
      cout << "Ears " << monsterFour.head <<endl;
      cout << "Head " << monsterFour.head <<endl;
  }