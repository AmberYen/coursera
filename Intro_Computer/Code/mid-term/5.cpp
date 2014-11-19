 #include <iostream>
using namespace std;
int main(){
    int n;
    //cin >> n;
    // isNone 记录对于n这个数，是否截止目前还没有被3或5或7整除
    bool isNone = true;
    // 判断是否可以被3、5、7整除，
    // 注意输出格式，不可以多、缺空格、换行
    int num[3] = {3,5,7};
    // TODO 你的代码
    while(cin >> n){
    	if(n % (3*5*7) == 0)
    		cout << 3 << " " << 5 << " " << 7 << endl;
    	else if(n % (3*5) == 0)
    		cout << 3 << " " << 5 << endl;
    	else if(n % (3*7) == 0)
    		cout << 3 << " " << 7 << endl;
    	else if(n % (5*7) == 0)
    		cout << 5 << " " << 7 << endl;
    	else if(n % 3 == 0)
    		cout << 3 << endl;
    	else if(n % 5 == 0)
    		cout << 5 << endl;
    	else if(n % 7 == 0)
    		cout << 7 << endl;
    	else
    		cout << "n" << endl;
    }

    
    
    return 0;
}