#include <iostream>
using namespace std;
void find_brackets(char *str,int Index, char *result,int length);
int main(){

	char str[101],str_copy[101], result[101]={'\0'};
	int length;
	while(cin.getline(str,101)){
	
		for(length = 0; str[length]!='\0';length++){
			str_copy[length] = str[length];
		}

		find_brackets(str,0,result,length);
	

		for(int k = 0; k < length; k++){
			cout << str_copy[k];
		}
		cout << endl;
		for(int k = 0; result[k] != '\0'; k++){
			cout << result[k];
		}

		cout << endl;
	}

	return 0;
}

void find_brackets(char *str, int Index, char *result,int length){

if(Index < length){
  if(str[Index] == '('){
  	result[Index] = '$';
  	for(int i= Index+1; str[i] != '\0'; i++){
  		if(str[i] == '('){
  			find_brackets(str,i,result,length);
  		}else if(str[i] == ')'){
			str[Index] = 1;
			str[i] = 1;
  			result[Index] = ' ';
  			result[i] = ' ';
			find_brackets(str,Index+1,result,length);
  			break;
  		}
  	}
  }	  
  else if(str[Index] == ')'){
  	  result[Index] = '?';
	  find_brackets(str,Index+1,result,length);
  }
  else{
	  result[Index] = ' ';
	  find_brackets(str,Index+1,result,length);
  }
}
}