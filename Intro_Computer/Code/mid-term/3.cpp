#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // 每组数据，停车的时间
    double duration;
    // 输入每组数据，输入结束则while循环终止
    while(cin >> duration){
        double cost = 0;
        // TODO 你的代码，计算价格
        //three case: <3, >3 & <40, >40
        if(duration <= 3)
        	cost = 5;
        else{
        	cost = 5 + (duration - 3)*2;
        	if(cost > 40)
        		cost = 40;
        }        
        cout << fixed << setprecision(2) << cost << endl;
    }
    
    return 0;
}