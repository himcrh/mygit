#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    while(1){
        int n;
        int a[30],b[30];
        memset(a,-1,sizeof(a));
        memset(b,-1,sizeof(b));
        scanf("%d",&n);
        if(!n)
            break;
        getchar();
        for(int i=1;i<=n;i++){
            char c[200];
            memset(c,0,sizeof(c));
            cin.getline(c,200);
            //cout<<c<<endl;
            int L=0;
            for(int i=199;i>=0;i--){
                if(c[i]=='d'){
                    L=i;break;
                }  
            }
            //printf("L = %d\n",L);
            if(c[L-4]==' '&&c[L-5]=='o'&&c[L-6]=='n'&&c[L-7]==' '){
                i&1?a[i]=0:b[i]=0;
            }
            else
                i&1?a[i]=1:b[i]=1;
        }
        for(int i=1;i<=n/2+(n&1);i++)
            printf("%d ",i);
        printf("Score\n");
        int num=0;
        for(int i=1;i<=n;i+=2){
            if(!a[i])
                printf("X ");
            if(a[i]==1)
                printf("O "),num++;
        }
        printf("%d\n",num);
        num = 0;
        for(int i=2;i<=n+1;i+=2){
            if(!b[i])
                printf("X ");
            if(b[i]==1)
                printf("O "),num++;
            if(b[i]==-1)
                printf("- ");
        }
        printf("%d\n",num);
    }
    return 0;
}