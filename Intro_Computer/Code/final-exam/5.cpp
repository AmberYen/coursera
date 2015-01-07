#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>


using namespace std; //感觉真是标准的DFS，我刚学，想起了这道题，于是就把它AC出来了。
char a[110][110];    //迷宫，根据题目要求，这么大足够了。使用DFS也不会超时
int pa[110][110];   //0 1 2  标记位置如果是0，代表没走过的位置；如果是1，代表走过的位置；如果是2，代表死胡同（这里不仅仅是上下左右有三个方向都是墙的死胡同，墙的位置还可以是走过的位置）
int zx[4]={1,-1,0,0},zy[4]={0,0,1,-1};  //代表坐标的增量，上下左右
int n,Flag;                             //n代表地图的规模，Flag则是用来标记是否能够走到终点
int ans[101];                           //这个题目要求最后统一输出结果，一次用一个数组储存answer


void DFS(int x1,int y1,int x2,int y2)   //DFS
{
    if(x1==x2&&y1==y2)
    {
        //cout<<"YES"<<endl;
        Flag=0;
        return ;
    }
    if(a[x1][y1]=='#'||a[x2][y2]=='#')
    {
        //cout<<"NO"<<endl;
        return ;
    }
    int j,flag=1;
    pa[x1][y1]=1;
    for(j=0;j<4;j++)
    {
        int newx=x1,newy=y1;
        newx+=zx[j];
        newy+=zy[j];
        if(pa[newx][newy]==0&&a[newx][newy]!='#')
        {
            flag=0;
            DFS(newx,newy,x2,y2);                   //DFS核心部分，能看懂这，说明初步掌握
        }
    }
    if(flag)
    {
        pa[x1][y1]=2;
        a[x1][y1]='#';                              //这个可以不写，但写了可以解决行走路线问题（能走到目的地），最后所有1的位置加上目的地就是行走路线，是不是最短的我就不清楚了（最短路线可以有好多条）
    }
}


void print()                                     //这个是我用来Debug的
{
    int j,k;
    for(j=1;j<=n;j++)
    {
        for(k=1;k<=n;k++)
        cout<<a[j][k];
        cout<<endl;
    }
}


void printp()                                  //这个是我用来Debug的
{
    int j,k;
    for(j=1;j<=n;j++)
    {
        for(k=1;k<=n;k++)
        cout<<pa[j][k];
        cout<<endl;
    }
}


int main()
{
    int i,cas;
    cin>>cas;
    for(i=0;i<cas;i++)
    {
        int j,k;
        int x1,y1,x2,y2;
        memset(a,'#',sizeof(a));
        memset(pa,0,sizeof(pa));
        Flag=1;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
                cin>>a[j][k];
            getchar();
        }
        cin>>x1>>y1>>x2>>y2;
        //print();                               注释的代码都是用来Debug的
        DFS(x1+1,y1+1,x2+1,y2+1);
        //cout<<a[x1+1][y1+1]<<" "<<a[x2+1][y2+1]<<endl;
        //printp();
       // print();
       if(Flag)
        {
            ans[i]=0;
            //cout<<"NO"<<endl;
        }
        else
            ans[i]=1;
    }
    for(i=0;i<cas;i++)
        if(ans[i])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    return 0;
}