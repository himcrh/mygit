#include<stdio.h>
using namespace std;
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n,f;
        scanf("%d %d",&n,&f);
        int minn=0;
        for(int i=1;i<=n;i++)
            minn+=i*((n-i)*2+1);
        if(minn>f)
            printf("-1\n");
        else{
            for(int i=1;i<=n-1;i++)
                printf("%d ",i);
            printf("%d\n",f-(minn-n));
        }
    }
    return 0;
}