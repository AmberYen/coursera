#include <iostream>
using namespace std;
int main(){

	int i,j,count = 0,N=0,matrix[100][100]={0},compare;

	cin >> N ;

	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++)
			cin >> matrix[i][j];
	}

	for(i = 1; i < N-1; i++){
		for(j = 1;j < N-1; j++){

			compare = matrix[i][j]+50;

			if((compare <= matrix[i-1][j]) && (compare <= matrix[i+1][j]) && (compare <= matrix[i][j-1]) && (compare <= matrix[i][j+1]))
				count++;
		}

	}

	cout << count << endl;
	return 0;
}