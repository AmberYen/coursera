#include <iostream>
using namespace std;
int main(){

	int n,tmp,i,biketime= 50;
	double btime,wtime;
	double e = 1e-8;
	cin >> n; 

	for(i = 0;i < n;i++){
		cin >> tmp;

		btime = tmp / 3.0 + 50;
		wtime = tmp / 1.2;

		if(btime - wtime > e){
		    cout << "Walk\n";
		}else if (btime - wtime < -e){
		    cout << "Bike\n";
		}else{
		    cout << "All\n";
		}
	}

	return 0;
}