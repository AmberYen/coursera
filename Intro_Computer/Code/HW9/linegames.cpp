#include <iostream>
using namespace std;
void find_right(char *line,int Index);
char chr[2];
int main(){

	char line[100];

	cin >> line;
	chr[0] = line[0];

	find_right(line,0);
	return 0;
}

void find_right(char *line,int Index){

	for(int i = Index+1; line[i] != '\0'; i++){

		if(line[i] == chr[0]){
			find_right(line,i);
		}else if(line[i] == 1)
			continue;
		else{
			cout << Index << " " << i << endl;
			line[i] = 1;
			line[Index] =1;
			break;
		}
			
	}
}