#include <iostream>
using namespace std;
int main()
{
	int n,i=0,count[1000],num[1000];

	cin >> n;
		
	for(i = 0; i < n; i++)
		count[i] = 0;
	
	for(i = 0; i < n; i++)
		cin >> num[i];

	for(i = 0; i< n; i++)
	{
		while(num[i] != 0)
		{
			 count[i] += num[i] % 2;
			 num[i] = num[i]/2;
		}	

	}

	for(i = 0; i < n; i++)
		cout << count[i] << endl;

	return 0;

}