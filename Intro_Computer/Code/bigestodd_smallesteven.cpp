#include <iostream>
using namespace std;
void bubble_sort(int *list);
void swap(int *a, int *b);
int main(){


	int list[6],i=0,s_even,b_odd;

	for(i = 0; i < 6; i++)
		cin >> list[i];

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

 
 	if(b_odd > s_even)
 		cout << b_odd - s_even << endl;
 	else
 		cout << s_even - b_odd << endl;

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