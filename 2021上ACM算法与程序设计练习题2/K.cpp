#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
const int N=2010;
int a[N];
int mp[N][N];
bool b[110];
//测试数据过多，先遍历出所有情况
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        memset(b,0,sizeof(b));
        int ans = 0;
        for(int j=i;j<=n;j++){
            if(!b[a[j]])
                b[a[j]]=1,ans++;
            mp[i][j]=ans;
        }
    }
    int T;
    scanf("%d",&T);
    while(T--){
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d\n",mp[x][y]);
    }
    return 0;
}