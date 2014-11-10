#include <iostream>
using namespace std;
int main(){

	int i,j,n,K,num[1000];


	cin >> n >> K;

	for(i = 0; i < n; i++)
		cin >> num[i];

	for(i = 0; i < n; i++){
		for(j = i; j < n;j++){

			if(num[i] + num[j] == K){
				cout << "yes"<< endl;
				
				return 0;
			}
				
		}
	
	}
	cout << "no" << endl;	

	return 0;
}