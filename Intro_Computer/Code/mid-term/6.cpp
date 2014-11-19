#include <iostream>
using namespace std;
int main(){
    
    // 组数
    int num = 5;
    cin >> num;
    
    // 记录鸡尾酒疗法的总人数、有效人数
    double totalCock, positiveCock;
    cin >> totalCock >> positiveCock;
    double ratioCock = positiveCock / totalCock;
    
    // 处理n-1个数据
    for(int i = 0; i < num - 1; i++){
        double tmpTotal, tmpPositive;
        cin >> tmpTotal >> tmpPositive;
        double tmpRatio = tmpPositive / tmpTotal;
        if (tmpRatio > ratioCock + 0.05)
            cout << "better" << endl;
        else if (tmpRatio < ratioCock - 0.05)
            cout << "worse" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}