#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
const int N = 101;
struct ant_type{
    int pos;
    char name[11];
}ants[N];
struct event_type{
    int drop_time;
    char dir;
}event[N];
bool ant_cmp(ant_type x,ant_type y){
    return x.pos<y.pos;
}
bool event_cmp(event_type x,event_type y){
    return x.drop_time<y.drop_time;
}
//drop_time排序 距离左端点距离排序
//如果当前点向右，那必然先下去的是最右的点
int main(){
    int T;
    char dir[2];
    scanf("%d",&T);
    int k = 0;
    while (T--){
        int n,l;
        scanf("%d %d",&n,&l);
        for(int i=1;i<=n;i++){
            scanf("%s %d %s",ants[i].name,&ants[i].pos,dir);
            event[i].dir=dir[0];
            event[i].drop_time = (dir[0] == 'L' ? ants[i].pos : l-ants[i].pos);
        }
        sort(ants+1,ants+n+1,ant_cmp);
        sort(event+1,event+n+1,event_cmp);
        printf("Case #%d:\n",++k);
        int L=1;
        int R=n;
        for(int i=1;i<=n;i++){
            if(event[i].dir=='L'){
                printf("%d %s\n",event[i].drop_time,ants[L].name);
                L++;
            }
            else{
                printf("%d %s\n",event[i].drop_time,ants[R].name);
                R--;
            }

        }
    }    
    return 0;
}