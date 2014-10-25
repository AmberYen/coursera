#include <iostream>
using namespace std;
#define PI 3.14159
int main(){

	int h,r,result;
	float bucket_capacity;
	
	cin >> h >> r;
	
	//h*r^2*pi
	bucket_capacity = h * r * r * PI/1000;//1 liter = 1000 cm^3

	result = 20/bucket_capacity;

	if(result * bucket_capacity > 20 - 0.001 && result * bucket_capacity < 20 + 0.001)
		cout << result << endl;
	else 
		cout << result + 1 << endl;

	return 0;
}