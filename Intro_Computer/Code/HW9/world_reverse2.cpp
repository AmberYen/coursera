#include <iostream>
using namespace std;
int main()
{
    char a[501] = {'\0'};
    int len = 0,space_postion = 0;
    cin.getline(a,501);
    int i=0;
    int p=0;

    for (i = 0;a[i]!='\0'; i++)
    {
        if (a[i] != ' ')
            len++,p++; // len and p are used to record the length of the word
        if (a[i] == ' ')//output the word before the space
            {
                    space_postion = i;
                    int x = len;        
                    for (; len>0; i--,len--)
                        cout << a[i-1];
                    i = i + x; // the value of i need to go back after this for recycle
                    cout <<a[i];
                    len = 0;
            }

    }
    
    if (a[i] == '\0'&& i != p)//output the last word in a multiple words sentence
    {
        for (int j = i; j > space_postion+1; j--)
            cout << a[j-1];
    }
  
    return 0;
}