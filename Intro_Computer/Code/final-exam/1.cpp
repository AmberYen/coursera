#include <iostream>

using namespace std;

int main(){
	int i=0,k=0,num,delete_count=0;
	char answer;
	char s[100000] = {'\0'},delete_answer[100000] = {'\0'},*p,*tmp;
	bool duplicate=false;
	
	cin >> num;
	cin.clear();
	cin.ignore();
	while(i < num){
		cin.getline(s,100000);
		p = s;
		tmp = s;

		for(int j=0;*(p+j) != '\0';j++)
		{
			duplicate = false;
			for(int k = 0;*(tmp+k) != '\0';k++){
				if((*(p+j) == *(tmp+k)) && k != j){
					duplicate = true;
				}
			}
			if(!duplicate){
				cout << *(p+j) << endl;
				break;
			}
		}
		if(duplicate)
			cout << "no" << endl;
		i++;
	}
	//system("pause");
	return 0;
}
