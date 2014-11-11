#include <iostream>
using namespace std;
int main(){

	int best;
	bool a,b,c,d;

	for(best = 1; best <= 4; best++){
		
		a = (best == 2);
		b = (best == 4);
		c = !(best == 3);
		d = !b;

		if(a + b + c + d == 1)
			break;

	} 	

	cout << best << endl;

	if(a == 1)
		cout << "A" << endl;
	else if(b == 1)
		cout << "B" << endl;
	else if(c == 1)
		cout << "C" << endl;
	else
		cout << "D" << endl;

	return 0;
}