#include <iostream>
using namespace std;
void word_reverse(char *word,int Index,int End);
int main(){

	char word[500] = {'\0'};
	int i=0,len=0,nextIndex;

	while(cin.getline(word,500)){

		for(int j = 0;word[j] != '\0'; j++)
				len++;

		for(int i = 0;i < len; i++){
			if(word[i+1] == ' '){
				word_reverse(word,0,i+1);
				nextIndex = i+2;
				cout << " ";
			}
			if(word[i+1] == '\0')
				word_reverse(word,nextIndex,i+1);
		}

	}

	return 0;
}

void word_reverse(char *word,int Index,int End){

	if(Index < End){
		word_reverse(word,Index+1,End);
		cout << word[Index];
	}

		
}