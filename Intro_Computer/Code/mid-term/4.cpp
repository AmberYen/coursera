#include <iostream>
using namespace std;

int main(){

    //n是输入的数字个数，n<=100
    int n;
    //a记录输入的数字
    int a[100];
    //max记录最大数
    int max = 0;
    //sum记录除去最大数之后的数字之和
    int sum = 0;

    cin >> n;

    // 输入并找出最大数
    for (int i = 0; i < n; i++){
        // TODO 你的代码
        cin >> a[i];
        if(a[i] > max)
            max = a[i];
        
        
    }

    // 求最大数以外的和
    for (int i = 0; i < n; i++){
        // TODO 你的代码
        if(a[i] < max)
            sum += a[i];
        
        
    }
    
    // 输出
    cout << sum;

    return 0;
}