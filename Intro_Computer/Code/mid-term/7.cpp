#include <iostream>
using namespace std;
int main(){
    for (int i = 2; i <= 100; i++)
        for (int j = i; j <= 100; j++){
            // TODO 你的代码
        	for(int k = j; k <= 100; k++){
        		int tmp = i*i + j * j;
        		if(tmp == k * k)
        			cout << i << "*" << i << " + " << j << "*" << j << " = " << k << "*" << k << endl;
        	} 
        }
            

    return 0;
}