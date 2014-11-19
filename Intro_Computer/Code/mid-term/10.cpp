#include <iostream>
using namespace std;
int main(){
    char str[11] = {'\0'}, substr[4]={'\0'};
    
    // 处理多组数据
    while(cin >> str){
        cin >> substr;

        // 用len遍历str，获得长度、最大ASCII字符及其下标
        int len = 0;
        char maxChar = 0;
        int maxIdx = 0;
        
        // 遍历数组，并获得相关信息
        // TODO 你的代码
        for(len = 0; str[len] != '\0' ; len++){
            if(str[len] > maxChar){
                maxChar = str[len];
                maxIdx = len;
            }
                
        }

        
        // 输出，先输出str的前半部分、再输出substr、最后输出str的后半部分
        // TODO 你的代码
        for(int j = 0; j <= maxIdx; j++)
            cout << str[j];
        for(int k = 0; substr[k] != '\0'; k++)
            cout << substr[k];
        for(int q = maxIdx+1; q < len; q++)
            cout << str[q];
        
        cout << endl;
        
    }
    
    return 0;
}