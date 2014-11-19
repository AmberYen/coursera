#include <iostream>
#include <iomanip>
using namespace std;
int main(){

	int matrix[5][5]={{0}},temp;
	int i,j,k,m = 0,n = 0;

	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++)
			cin >> matrix[i][j];
	}
	cin >> n >> m;

	if((n >= 0 && n < 5) && (m >= 0 && m < 5)){
		for(k = 0; k < 5; k++){
			temp = matrix[n][k];
			matrix[n][k] = matrix[m][k];
			matrix[m][k] = temp;
		}

		for(i = 0; i < 5; i++){
			for(j = 0; j < 5; j++){
				cout << setw(4) << matrix[i][j];
			}
			cout << endl;
		}

	}	
	else{
		cout << "error" << endl;
	}

	return 0;
}