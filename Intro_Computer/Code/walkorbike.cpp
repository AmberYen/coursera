#include <iostream>
using namespace std;
int main(){

	int n,tmp,i,biketime= 50;
	float btime,wtime;
	cin >> n;

    //because 100 / 1.2 > 100 / 3.0 + 50
    //so the distance large than 100 should use bike 

	for(i = 0;i < n;i++){
		cin >> tmp;

		if(tmp > 100)
			cout << "Bike" << endl;
		else
			cout << "Walk" << endl;
	}

	return 0;
}