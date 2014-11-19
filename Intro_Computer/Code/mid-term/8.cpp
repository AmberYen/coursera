// TODO 改错

#include<iostream>
using namespace std;
int main(){
    // 上限
    int limit;
    cin >> limit;
    
    for(int a = 2; a <= limit; a++){
        for(int b = 2; b < limit; b++)
            for(int c = b; c < limit; c++)
                for(int d = c; d < limit; d++){
                    if(a * a * a == b * b * b + c * c * c + d * d * d)
                        cout << "Cube = " << a << ", Triple = ("
                             << b << "," << c << "," << d << ")" << endl;
                }
            
    }
}