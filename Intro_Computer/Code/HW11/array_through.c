#include <stdio.h>
#define ARRAY_SIZE 100
int main() {
	int a[ARRAY_SIZE][ARRAY_SIZE] = {0};
	int i, j, k;
	int row, col;
	scanf("%d%d", &row, &col);
	for(i = 0; i < row; ++i)
	for(j = 0; j < col; ++j)
	scanf("%d", &a[i][j]);
	
	for(k = 0; k < row + col - 1; ++k) {
	
		for(i = 0; i <= k; ++i) {
		j = k - i;
		if(i < row && j < col)
		printf("%d\n", *(*(a + i) +j));        /* a[i][j] */
	    }                        
    }
return 0;
}