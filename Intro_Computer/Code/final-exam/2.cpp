#include <iostream>

#define harmful_bacteria_grow 1000000
using namespace std;

int main(){
	int i=0, time_count=0,num;
	int harmful_bacteria,unharmful_bacteria;
	cin >> num;

	while(i < num){
		time_count = 0;
		cin >> harmful_bacteria >> unharmful_bacteria;

		while(harmful_bacteria > 0){
		
		    harmful_bacteria = (harmful_bacteria-unharmful_bacteria) * 2;
		    unharmful_bacteria *= 1.05;
			if(harmful_bacteria > harmful_bacteria_grow)
				harmful_bacteria = harmful_bacteria_grow;
			time_count++;
		}
		cout << time_count << endl;
		i++;
	}

	return 0;
}