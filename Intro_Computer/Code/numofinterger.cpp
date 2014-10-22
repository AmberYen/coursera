#include <iostream>
using namespace std;
int main (){

	int one=0,five=0,ten=0,num[100],n=0;

	cin >> n ;

	for(i =0;i < n;i++)
		cin >> num[i];

	for(i = 0; i < n; i++)
	{
		switch(num[i])
		{
			case 1:
				one++;
			case 5:
				five++;
			case 10:
				ten++;
			default:
		}

	}

	count << one << endl;
	count << five <<endl;
	count << ten << endl;

	return 0;
}