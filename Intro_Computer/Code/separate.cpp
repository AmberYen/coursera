#include <iostream>
using namespace std;
int main(){

	int num, i = 2 ,answer[3];
	
	cin >> num;

	while(i >= 0)
	{
		answer[i] = num % 10;
		num = num / 10;
		i--;
	}

	for(int j = 0; j < 3; j++)
		cout << answer[j] << endl;

	return 0;
}