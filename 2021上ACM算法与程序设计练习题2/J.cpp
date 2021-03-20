#include<stdio.h>
using namespace std;
int main(){
    int T;
    scanf("%d",&T);
    while (T--){
        int a,b;
        scanf("%d %d",&a,&b);
        b=b>=a?a-1:b;
        if(a==2&&b==1)
            printf("1\n");
        else
            printf("%d\n",(a<=1||b<2)?0:a*b/2);
    }
    return 0;
}