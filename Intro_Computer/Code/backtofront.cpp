#include <iostream>
using namespace std;

int main ()
{
	int n=0,i=0,array[100];


	cin >> n;

	for(i = 0; i < n; i++)
		cin >> array[i];

	while(n--)
	{
		cout << array[n] << " ";
		
	}

	return 0;

}