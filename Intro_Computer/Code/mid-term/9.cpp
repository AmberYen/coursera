#include<iostream>
using namespace std;
int main(){
    // 输入这个数字
    int num;
    cin >> num;
    
    // 判断是否为1
    if (num == 1){
        cout << "no" << endl;
        return 0;
    }
        
    // 遍历1--sqrt(num)，看是否num能整除它
    for(int f = 2; f < num; f++){
        // 如果 1--sqrt(num)都没有数能整除num，则num一定是个素数
        // 因为假设k>sqrt(num)能整除num，
        // 那么 num/k 一定小于sqrt(num)，并且能整除num
        if (num % f == 0){
            cout << "no" << endl;
            return 0;
        }
        
    }
    cout << "yes" << endl;
    
    return 0;
}