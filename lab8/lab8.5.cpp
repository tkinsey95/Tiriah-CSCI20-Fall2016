#include <iostream>

using namespace std;


const double lbs = 2.20462;
const double kilograms = 0.453592;

double toPounds(int x){
double numPounds = x * lbs;
return numPounds;
}
 
 

double toKilo(double x){

double numKilo = x * kilograms;
    return numKilo;
    }
    
   int main() {
       
   double lbs = 0;
   double kilograms = 0;
 
	      
	cout << "Enter the pounds: ";
	      cin >> lbs;
	      
	cout << "Kilograms: " << toKilo(lbs) <<endl;
	      
	cout << "Enter the kilograms: ";
	      cin >> kilograms;
	      
	cout << "Pounds: " << toPounds(kilograms) << endl;
	      
	        
	   
	   return 0;   
   }
	 