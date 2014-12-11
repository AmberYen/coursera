#include <iostream>
using namespace std;
int main(){

	int *p,matrix[10000] = {'\0'}, m, n, sumOfEdge = 0, k;

	cin >> k;
	p = matrix;	
	for(int i = 0; i < k; i++){
		
		sumOfEdge = 0;
		cin >> m >> n;

		for(int x = 0; x < n; x++){
			for(int y = 0; y < m;y++){
				cin >> matrix[y + x*n];
				if(x == 0 || x == n-1)
					sumOfEdge += *((p+y)+x*n);
				else if(y == 0 || y == m - 1)
					sumOfEdge += *((p+y)+x*n);
				*((p+y)+x*n) = 0;
			}
		}
		cout << sumOfEdge << endl;
		
	}

	return 0;
}