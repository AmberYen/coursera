#include <iostream>
using namespace std;
void bubble_sort(int *list);
void swap(int *a, int *b);
int main(){


	int list[6]={1,2,3,4,5,6},i=0,s_even,b_odd;

	bubble_sort(list);

	while(i < 6)
	{
		if(list[i] % 2 == 0)
		{
			s_even = list[i];
			break;
		}
			
		i++;
	}	
	for(i = 5; i >= 0; i--)
	{
		if(list[i] % 2 != 0)
		{
			b_odd = list[i];
			break;
		}	
 	}

 	cout << b_odd << " " << s_even << endl;
 	cout << abs(b_odd-s_even) << endl;

}

void bubble_sort(int *list)
{
	int i,j;
	for(i = 5; i >= 0; i--)
	{
		for(j = 5; j >= (5-i); j--)
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