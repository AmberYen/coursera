#include <iostream>
using namespace std;

void bubble_sort(int *list,int num);
void swap(int *a, int *b);

int main(){


	int num[15000] = {0},i,mod,N = 0,postion;

	while(cin >> N){
		
		for(i = 0; i < N; i++)
			cin >> num[i];
		
		
		bubble_sort(num,N-1);
		
		mod = N % 2;
		postion = N / 2;

		if(mod != 0){//odd
			cout << num[N/2] << endl;
		}
		else{//even
			cout << (num[N / 2] + num[N/2 - 1])/2 << endl;
		}


	}

		

	return 0;
}

void bubble_sort(int *list,int num)
{
	int i,j;
	for(i = num; i >= 0; i--)
	{
		for(j = num; j >= (num-i); j--)
		{
			if(list[j] < list[j - 1])
				swap(list[j],list[j-1]);
		}
	}
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
    *b = temp;
}