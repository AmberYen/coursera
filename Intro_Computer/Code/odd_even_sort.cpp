#include <iostream>
using namespace std;
void bubble_sort(int *list, int size);
void swap(int *a,int *b);
int main (){

	int i=0,n=10,oddcount=0,evencount=0,odd[10],even[10];
	int num[10];
	for(i = n-1; i >= 0;i--)
		cin >> num[i];

	//bubble sort
	bubble_sort(num,n);

	for(i = n-1; i >= 0; i--)
	{
		if(num[i] % 2 != 0)//odd number
		{
			odd[oddcount] = num[i];
			oddcount++;
		}
		else{			  //even num
			even[evencount] = num[i];
			evencount++;
		}

	}

	for(i = oddcount-1;i >=0;i--)
		cout << odd[i] << " ";
	for(i = evencount-1; i >=0; i--)
		cout << even[i] << " ";

	cout << endl;

	return 0;
}

void bubble_sort(int *list, int size)
{
	int i=0,j=0;

	for(i = size-1; i >= 0; i--)
	{
		for(j = size-1; j >= 0; j--)
		{
			if(list[j] < list[j-1])
				swap(list[j],list[j-1]);
		}
	}
}
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}