#include <iostream>
using namespace std;
int main (){

	int one=0,five=0,ten=0,num[100],n=0,i=0;

	cin >> n;

	for(i =0;i < n;i++)
		cin >> num[i];

	for(i = 0; i < n; i++)
	{
		switch(num[i])
		{
			case 1:
				one++;
				break;
			case 5:
				five++;
				break;
			case 10:
				ten++;
				break;
			default:
				break;
		}

	}

	cout << one << endl;
	cout << five <<endl;
	cout << ten << endl;

	return 0;
}