#include <iostream>

using namespace std;

int main(){
	int i=0,k=0,num,delete_count=0;
	char answer;
	char s[100000] = {'\0'},delete_answer[100000] = {'\0'};
	
	cin >> num;

	while(i < num){
		answer = NULL;
		cin.clear();
		cin.ignore();
		cin.getline(s,100000);
		for(int j = 0; s[j] != '\0'; j++){
			k = j+1;
			answer = s[j];
			for(; s[k] != '\0'; k++){
			
				if(answer == s[k]){
					delete_answer[delete_count] = answer;
					answer = NULL;
					delete_count++;
				}
			}
			if(answer != NULL)
			{
				for(int x = 0; x < delete_count; x++){
					if(answer == delete_answer[x]){
						answer = NULL;
						break;
					}
				}
				if(answer != NULL){
					
					break;
				}
				
			}
			
		}
		if(answer != NULL){
			cout << answer << endl;
		}
		else
			cout << "no" << endl;

		i++;
	}

	return 0;
}
