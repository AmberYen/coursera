#include <iostream>
using namespace std;

int main()
{
	int n,j=0;
	char s[256]={};
	cin >> n;
	cin.get();
	for(int i=0;i<n;i++){

		cin.getline(s,256);
		while (s[j]!=0){

			if (s[j]=='A')
			{cout << "T";}
			else if (s[j]=='T')
		    {cout << "A";}
			else if (s[j]=='G')
			{cout << "C";}
			else if (s[j]=='C')
			{cout << "G";}
			j++;
	}
	cout << endl;
	j=0;
	}

return 0;

}