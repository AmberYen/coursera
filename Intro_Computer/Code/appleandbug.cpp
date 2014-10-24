#include <iostream>
using namespace std;
int main(){

	int n=0,x=0,y=0;

	cin >> n >> x >> y;
	int eaten = y/x;
	//(y/x) + (y%x!=0)
	if(eaten >= n)
		eaten = n;
	else if(y%x != 0)//left the apple was bite by bugs
		eaten++;

	//output
	cout << n - eaten << endl;

	return 0;
}