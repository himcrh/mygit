#include<stdio.h>
using namespace std;
int main(){
    int m,n,k;
    scanf("%d %d %d",&n,&m,&k);
    if(k==-1&&(n+m)%2)
        printf("0\n");
    else
        printf("%d\n",1<<((m-1)*(n-1)));
    return 0;
}