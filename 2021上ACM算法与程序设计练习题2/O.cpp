#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;
//撞过一次的墙还要再撞一次
int main(){
    int n,m;
    int a[100010];
    memset(a,0,sizeof(a));
    scanf("%d %d",&n,&m);
    int maxn = 0;
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        maxn=max(maxn,x);
        a[x]++;
    }
    
    int add = a[maxn];
    for(int i=maxn-1;i>=1;i--){
        add+=a[i];
        a[i]=add;
    }
    
    while(m--){
        int x;
        scanf("%d",&x);
        printf("%d\n",a[x]);
    }
    return 0;
}