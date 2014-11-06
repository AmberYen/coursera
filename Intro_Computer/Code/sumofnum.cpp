#include <iostream>
using namespace std;
int main(){

	int sum=0,num, i,tmp;

	cin >> num;

	for(i = 0; i < 5; i++){
		
		cin >> tmp;

		if(tmp < num)
			sum += tmp;

	}

	cout << sum << endl;
}