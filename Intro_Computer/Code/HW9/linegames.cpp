#include <iostream>
using namespace std;
void find_right(char *line,int Index);
int main(){

	char line[100];

	cin >> line;

	find_right(line,0);
	system("pause");
	return 0;
}

void find_right(char *line,int Index){

	for(int i = Index+1; line[i] != '\0'; i++){

		if(line[i] == '('){
			find_right(line,i);
		}else if(line[i] == 1)
			continue;
		else{
			cout << Index << " " << i << endl;
			line[i] = 1;
			line[Index] =1;	
		}
			
	}
}