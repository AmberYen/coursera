#include <iostream>
using namespace std;
int main(){

	int n,i,divisor,num;

	cin >> n;

	for(i = 10; i < n; i++){
		num = i;
		divisor = num / 10 + num % 10;

		if((num % divisor) == 0)
			cout << num << endl;
	}

	return 0;
}