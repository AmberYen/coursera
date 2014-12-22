#include <iostream>
#include <iomanip>
using namespace std;

void bubble_sort(char (*num)[3], float *value,int m);
void swap(char (*a)[3],char (*b)[3]);
void swap2(float *a,float *b);

int main(){

	int m = 0,i=0;
	
	char (*p)[3],num[50][3];
	float value[50] = {0.0},*q,a = 0.0;
	bool isNeed = false;
	cin >> m >> a;

    p = num;
    q = value;
	while(i < m){
		cin >> *(p+i)>> *(q+i);
		i++;
	}


	bubble_sort(p,value,m);

	for(int j = 0; j < m; j++){
		for(int x = 0; x < 3;x++){
		  if(*(value+j) > a){
			isNeed = true;
			cout << num[j][x];
		  }
		}
		if(*(value+j) > a){	
			cout << " " << fixed<< setprecision(1) << *(q+j) << endl;
		}
	}

	

	if(!isNeed){
		cout << "None." << endl;
	}
	//system("pause");
	return 0;
}

void bubble_sort(char (*num)[3], float *value,int m){

	for(int i = 0; i < m; i++){
		for(int j = 0; j < m - i; j++){
			if(*(value+j) < *(value + j + 1)){
				swap(num+j,num+j+1);
				swap2(value+j,value+j+1);
			}
				
		}
	}

}

void swap(char (*a)[3],char (*b)[3]){

   for(int i = 0; i < 3; i++){
	char temp = (*a)[i];
	(*a)[i] = (*b)[i];
	(*b)[i] = temp;
   }
	
}

void swap2(float *a,float *b){

	float temp = *a;
	*a = *b;
	*b = temp;
}