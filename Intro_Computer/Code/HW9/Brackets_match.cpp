#include <iostream>
using namespace std;
void find_brackets(char *str,int Index, char *result);
int main(){

	char str[100], char result[100]={'\0'};
	cin.getline(str,100);

	find_brackets(str,0,result);

	for(int k = 0; str[k] != '\0'; k++){
		cout << str[k];
	}
	cout << endl;
	for(int k = 0; result[k] != '\0'; k++){
		cout << str[k];
	}

	cout << endl;

	return 0;
}

void find_brackets(char *str, int Index, char *result){

 //for(int j = 0; ) 

  if(str[Index] == '('){
  	result[Index] = '$';
  	for(int i= Index+1; str[i] != '\0'; i++){
  		if(str[i] == '('){
  			find_brackets(str,i,result);
  		}else if(str[i] == ')'){
  			result[Index] = ' ';
  			result[i] = ' ';
  			break;
  		}
  	}
  }	  
  else if(str[i] == ')')
  	  result[Index] = '?';

  /*for(int i = Index; str[i] != '\0'; i++){
	 if(str[i] == '('){
	 	find_brackets(str,Index+1,result);
	 }else if(str[i] == ')'){
	 	str[Index] = ''
	 }
  }*/
}