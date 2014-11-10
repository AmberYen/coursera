#include <iostream>
using namespace std;
int main(){

	int N,K,i;
	double house,interest_rate = 1;

	while(cin>>N>>K){

		house = 200;

		for(i = 0; i < 20; i++){

			if((i+1)*N > house){
				cout << i + 1 << endl;
				break;
			}
			house = house + (house * K/100);

			if(i == 19)
				cout << "Impossible" << endl;		  
		}

	}


	return 0;
}