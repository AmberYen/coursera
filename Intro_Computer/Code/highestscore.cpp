#include <iostream>
using namespace std;

int main(){
	int N;
	int max = -1;
	cin >> N;

	for(int i = 0;i < N;i++)
	{
		int tmp;
		cin >> tmp;
		if(tmp > max)
			max = tmp;

	}

	cout << max << endl;

	return 0;
}