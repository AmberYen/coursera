#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char s[200] = {0};
    while(cin.getline(s,200)){
        int tmp[200]={0}; 
        //数组tmp用来记录该位置上的括号是否匹配过，如果匹配过就把值赋为1.
        int t = 0;
        //找到第一个）并记录位置给t
        for (int i = 0; i < 200; i++){
            if (s[i]==')'){
                t = i;
                break;
            }
        }

        for (int i = t; i < 200; i++){
            //从第一个）开始，向后找未被匹配过的）
            if (tmp[i] ==1 || s[i] !=')')
                continue;
            for (int j = i-1; j >=0 ; j--){
            //从当前）开始往前找未被匹配过的（， 找到则将（和）都标记为匹配过并退出当前循环去找下一个为匹配过的）
                if (tmp[j] == 0 && s[j] =='('){
                    tmp[j] = 1;
                    tmp[i] = 1;
                    break;
                }
            }
        }

        for(int i = 0; s[i]!='\0' ;i++){
            cout << s[i];
        }
        cout << endl;
        //如果（和）没有标记为匹配过，则输出相应符号
        for (int i = 0; i<200; i++){
            if (s[i] =='\0')
                break;
            if (s[i] == '(' && tmp[i]==0)
                cout << '$';
            else if (s[i] == ')' && tmp[i]==0)
                cout << '?';
            else
                cout << ' ';
        }
        cout << endl;
        memset(s,'\0',200); //清除s里的内容
    }
    return 0;
}