#include <iostream>
using namespace std;


int main(){

	int m=0,n=0,sum=0,i=0;

	cin >> m >> n;	

	//for to find the odd interger between m and n
	for(i = m; i <= n; i++)
	{
		if(i % 2 !=0)
			sum += i;
	}

	cout << sum << endl;
}