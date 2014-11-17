#include <iostream>
using namespace std;
int main(){

	char word1[80]={0},word2[80]={0},result = '=';
	int couts=80,i;

	cin.getline(word1,couts);
	cin.getline(word2,couts);

	for(i = 0; !(word1[i]!=0 && (word1[i]==word2[i])); i++){

		if(word1[i] > word2[i]){
			if((word2[i]+32) == word1[i]){
				result = '=';
				continue;
			}
			else{
				result = '>';
				break;
			}
				
		}
		else if(word1[i] < word2[i]){
			if((word1[i]+32) == word2[i]){
				result = '=';
				continue;
			}
			else{
				result = '<';
				break;
			}
				
		} 
		else
			result = '=';
	}

	cout << result << endl;
	return 0;
}