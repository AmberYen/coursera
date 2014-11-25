#include <iostream>
using namespace std;
void collatzconjecture(int number);
int main(){

	int number;

	cin >> number;
    collatzconjecture(number);
	
	return 0;
}

void collatzconjecture(int number){

	if(number == 1){
		cout << "End" << endl;
	}else if(number % 2 !=0){
		cout << number;
		number = number*3 + 1;
		cout << "*3+1=" << number << endl;  
		collatzconjecture(number);		
	}else if(number % 2 == 0){
		cout << number;
		number = number / 2;
		cout << "/2=" << number << endl;  
		collatzconjecture(number);
	}

}