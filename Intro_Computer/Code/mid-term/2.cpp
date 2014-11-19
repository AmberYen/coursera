// TODO 改错
#include<iostream>
using namespace std;

int main(){

    //公元a年(0<a<3000)
    int a;
    cin >> a;
    
    /*
    闰年的判断条件：
    能被4整除的大多数是闰年
    但能被100整除，而不能被400整除的不是闰年
    能被3200整除的也不是闰年
    */
    if ( a % 4 == 0 ){ 
        if ( (a % 100 == 0) &&  (a % 400 != 0)){ //能被100整除，而不能被400整除的不是闰年
            cout << "N";
        } 
        else if ( a % 3200 == 0) {
            cout << "N";
        }
        else
            cout << "Y";
    }
    else
        cout << "N";

    cout << endl;
    return 0;
}