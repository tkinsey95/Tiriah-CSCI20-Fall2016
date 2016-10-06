#include <iostream>
using namespace std;

int main() {
    
    //Problem 1
    int suzyAge, johnAge;
   
    
    suzyAge = 25;
    johnAge = 21;
    
    cout << "Suzy is younger than John." << (suzyAge<johnAge)<<endl; 
   
    
    //Problem 2
    int x;
    int y;
    
    x = 7;
    y = 7;
    result = true;
    cout << "The variable x is greater than or equal to the variable y." << (x>=y) << endl;
    
    
    //Problem 3
    int a;
    int b;
    
    a = 1;
    b = 9;
    cout << "The variable a is equal to the variable b." << (a==b) << endl; 
    
    //Problem 4
    int limit;
    int count;
    
    limit = 20;
    count = 10;
    cout << "The limit multiplied by the count is divided by 2, which is greater than 0." << ((limit*count)/2>0) << endl;
    
    //Problem 5
    int t;
    int z;
    
    t = -4;
    z = 0;
    cout << "The variable z is less than 2. Making the problem true." << (t>5||z<2) << endl;
    
    //Problem 6
    int variable;
    
    variable = -5;
    cout << "The variable is not greater than 0. The result is true." << (!(variable>0)) << endl;
    
    //Problem 7
    a = 16;
    cout << "The variavle a divided by 4, is less and  the variable a is greater than or equal to 4.)" << (a/4 < 8&& a>=4) << endl;
    
    //Problem 8
    x = -2;
    y = 5;
    cout << "The variable x multiplied by the variable y is less than 10."<<  (x*y<10||y*z<10);
    
    //Problem 9
    int j,k,l;
    
    j = -2;
    k = 5;
    l = 4;
    cout << "The variable j multiplied by l is less than 10. The result is false." << (!(j*l<10)||y/x*4<y*2);
 
    //Terminate the program:
   return 0;
    
}