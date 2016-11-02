#include <iostream> 
#include <string>
using namespace std; 



void chorus1 (string numOne) {
 cout << numOne << " little monkeys jumping on the bed," << endl;

}

void chorus2 (string num) {
cout << num << " fell off and bumped his head." << endl;
}

void chorus3 (string advb) {
cout << "Mamma called the doctor and the doctor said " << advb << " more monkeys jumping on the bed!" << endl;
}

void chorus4 (string advb) {
cout << "Mamma called the doctor and the doctor said " << "put those monkeys straight to bed!" << endl;
}

int main () {
 string song_numOne = "_";
 string song_num = "_";
 string song_advb = "_";
 
 song_numOne = "5";
 song_num = " 1";
 song_advb = "NO";
 chorus1(song_numOne);
 chorus2(song_num);
 chorus3(song_advb);
 
 song_numOne = "4";
 song_num = " 1";
 song_advb = "NO";
 chorus1(song_numOne);
 chorus2(song_num);
 chorus3(song_advb);
 
 song_numOne = "3";
 song_num = " 1";
 song_advb = "NO";
 chorus1(song_numOne);
 chorus2(song_num);
 chorus3(song_advb);
 
 song_numOne = "2";
 song_num = " 1";
 song_advb = "NO";
 chorus1(song_numOne);
 chorus2(song_num);
 chorus3(song_advb);
 
 song_numOne = "1";
 song_num = " 1";
 song_advb = "NO";
 chorus1(song_numOne);
 chorus2(song_num);
 chorus4(song_advb);
  
}