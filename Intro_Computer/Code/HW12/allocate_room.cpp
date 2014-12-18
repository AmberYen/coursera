#include <iostream>
using namespace std;

void bubble_sort(int *num, int *value,int m);
void swap(int *a,int *b);

int main(){

	int m,a,i=0,num[50] = {"\0"},value[50] = {"\0"},*p,*q;
	bool isNeed = false;
	cin >> m >> a;
    p = num;
    q = value;
	while(i < m){
		cin >> *p >> *q;
		p++;
		q++;
		i++;
	}

	bubble_sort(num,value,m);

	for(i = 0; i < m; i++){
		if(*(value+i) > a){
			isNeed = true;
			cout << *(num+i) << " " << *(value+i) << endl;
		}
	}

	return 0;
}

void bubble_sort(int *num, int *value,int m){

	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
			if(*(num+i) < *(num + j)){
				swap(num+i,num+j);
				swap(value+i,value+j);
			}
				
		}
	}

}

void swap(int *a,int *b){

	int temp = *a;
	*a = *b;
	*b = temp;
}