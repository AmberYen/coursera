
#include <iostream>
using namespace std;
int main()
{
    int L, M, array[100000], b, c, sum;
    cin >> L >> M;
    for(int i = 0; i <= L; i++)
    {
        array[i]=1;
    }
    for(int j = 0; j < M; j++)
    {
        cin >> b >> c;
        for(int k = b; k <= c; k++)
        {
            array[k]=0;
        }
    }
    sum=0;
    for(int i = 0; i <=L; i++)
    {
        sum=sum+array[i];
    }
    cout << sum;
    return 0;
}