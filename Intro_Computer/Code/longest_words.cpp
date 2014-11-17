#include <iostream>
using namespace std;
int main(){

	char statence[500],longest[500]={0},temp[500]={0};
	int couts=500, i,j,count=0,tempcount=0;

	cin.getline(statence,couts);

	for(i = 0; i < 500 ;i++){
			//cin >> statence[i];

			if(statence[i] == 46){//".""

				if(count < tempcount){
					for(j = 0; j < tempcount; j++){

						longest[j] = temp[j]; 
						temp[j] = 0;
					}
					count = tempcount;
				}

				for(j = 0; j < count; j++)
					cout << longest[j];
			   cout << endl;
			   break;
			}
			else if(statence[i] == 32){//Space
				if(count < tempcount){
					for(j = 0; j < tempcount; j++){

						longest[j] = temp[j]; 
						temp[j] = 0;
					}
					count = tempcount;
					tempcount = 0;
				}
				else{
					for(j = 0; j < tempcount; j++){
						temp[j] = 0;
					}
					tempcount = 0;
				}
			
			}
			else{
				temp[tempcount] = statence[i];
				tempcount++;
			}
	}

	return 0;
}