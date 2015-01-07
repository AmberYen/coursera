#include <iostream>
using namespace std;

bool compare_matrix(char *t,char *n,int size);
bool algorithm1(char *t,char *p,char *n,int size);
bool algorithm2(char *t,char *p,char *n,int size);
bool algorithm3(char *t,char *p,char *n,int size);

int main(){

	char input_matrix[100],target_matrix[100],new_matrix[100],*p,*n,*t;
	int case1[10]={7,4,1,8,5,2,9,6,3},case2[10]={3,6,9,2,5,8,1,4,7},case3[10] = {9,8,7,6,5,4,3,2,1},size=0,i=0,j=0;

	cin >> size;

	for(i = 0; i < size*size; i++)
		cin >> input_matrix[i];
	for(j = 0; j < size*size;j++)
		cin >> target_matrix[j];

	
	p = input_matrix;
	n = new_matrix;
	t = target_matrix;

	if(compare_matrix(t,p,size))
		cout << "4" << endl;
	else if(algorithm1(t,p,n,size))
		cout << "1" << endl;
	else if(algorithm2(t,p,n,size))
		cout << "2" << endl;
	else if(algorithm3(t,p,n,size))
		cout << "3" << endl;
	else
		cout << "5" << endl;

	return 0;
}

bool algorithm1(char *t,char *p,char *n,int size){

	//case 1
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		 *(n+(j*size+(size-i-1)))=*(p+(i*size+j));
	}

	bool same = compare_matrix(t,n,size);

	return same;
}

bool algorithm2(char *t,char *p,char *n,int size){

	//case 2
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		 *(n+((size-j-1)*size+i))=*(p+(i*size+j));
	}

	bool same = compare_matrix(t,n,size);

	return same;
}

bool algorithm3(char *t,char *p,char *n,int size){

	//case 3
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		 *(n+((size-i-1)*size+(size-j-1)))=*(p+(i*size+j));
	}

	bool same = compare_matrix(t,n,size);

	return same;
}

bool compare_matrix(char *t,char *n,int size){

	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		 if(*(t+(i*size+j)) == *(n+(i*size+j)))
			 continue;
		 else
			 return 0;
	}

	return 1;
}
