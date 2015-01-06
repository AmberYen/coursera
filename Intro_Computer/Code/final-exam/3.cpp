#include <iostream>
using namespace std;
int charToNum(char str);
int main(){
	char s[1000] = {'\0'},*p;
	int right=0,left,i=0,j=0,n,count[1000]={0},num[1000]={0};
	cin >> n;

	while(i < n){
		cin >> s;
		p = s;
		j = 0;
		left = 0;
		right = left+1;
		while(*(p+left) != '\0'){
			while(*(p+left) == *(p+right)){
				right++;
			}
			count[j] = right-left;
			num[j] = charToNum(*(p+left));
			j++;
			left = right;
			right = left+1;
			
		}
		for(int k = 0; k < j;k++){
			cout << count[k] << num[k];
		} 
		cout << endl;
		i++;
	}

	return 0;
}
int charToNum(char str){
	switch(str){
		case '0':
			return 0;
			break;
		case '1':
			return 1;
			break;
		case '2':
			return 2;
			break;
		case '3':
			return 3;
			break;
		case '4':
			return 4;
			break;
		case '5':
			return 5;
			break;
		case '6':
			return 6;
			break;
		case '7':
			return 7;
			break;
		case '8':
			return 8;
			break;
		case '9':
			return 9;
			break;
	}
}