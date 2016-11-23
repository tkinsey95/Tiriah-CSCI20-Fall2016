
#include <iostream>
	using namespace std;
/*	
	    void weightInput(double &pounds, double &ounces){
	        cout << "Enter the pounds: ";
	        cin >> pounds;
	        cout << "Enter the ounces: ";
	        cin >> ounces;
	    }
	    
	    void gramInput(double &kilograms, double &grams) {
	        cout << "Enter the kilograms: ";
	        cin >> kilograms;
	        cout << "Enter the grams: ";
	        cin >> grams;
	    }
	    void weightCalculating(double &pounds, double &ounces, double &kilograms, double &grams) {
	       
	        grams = 1000 * (kilograms - int(kilograms));
	        kilograms = pounds * 2.2406;
	        grams = kilograms / 1000;
	    }
	    
	    void weightOutput(double &kilograms, double &grams){
	        cout << kilograms << " kilograms and " << grams << "grams. \n";
	    }
	    
	    void gramOutput(double &pounds, double &ounces){
	        cout << pounds << " pounds and " << ounces << "ounces. \n";
	    }
	    
	int main() {
	    double pounds;
	    double ounces;
	    double kilograms;
	    double grams;
	

	    weightInput(pounds, ounces);
	    weightCalculating(pounds, ounces, kilograms, grams);
	    weightOutput(kilograms, grams);
	    cout << kilograms << " kilograms and " << grams << " grams.\n\n";
	    
	    gramInput(kilograms, grams);
	    gramOutput(pounds, ounces);
	     cout << pounds << " pounds and " << ounces << "ounces. \n\n";
	    
	    
	    return 0;
	

	}
	*/


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
	 