#include <iostream>
using namespace std;
int main(){

	int matrix[100] = {0},move,i,j,n=0,m=0;

	cin >> n >> m;
	
	move = n - m;
	
	for(i = 0;i < n;i++)
		cin >> matrix[i];

	//move to back
	for(i = n; i < n+move; i++)
		matrix[i] = matrix[i - n];
	//move to front
	for(i = 0; i < m; i++)
		matrix[i] = matrix[i+move];
	//move to back
	for(i = 0;i < move;i++)
		matrix[m+i] = matrix[n+i];

	for(i = 0;i < n;i++)
		cout << matrix[i] << " ";

	cout << endl; 
	return 0;
}