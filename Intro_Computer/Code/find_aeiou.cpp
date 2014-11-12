#include <iostream>
using namespace std;
int main(){

	char s[80];
	int i,couts = 80,coutA = 0,coutE = 0,coutI = 0,coutO = 0,coutU = 0;;

	cin.getline(s,couts);

	for(i = 0; i < couts; i++){
		switch(s[i]){
			case 'a':
				coutA++;
				break;
			case 'e':
				coutE++;
				break;
			case 'i':
				coutI++;
				break;
			case 'o':
				coutO++;
				break;
			case 'u':
				coutU++;
				break;
			default:
				break;
		}
	}


	cout << coutA << " " << coutE << " " << coutI << " " << coutO << " " << coutU << endl; 

	return 0;
}