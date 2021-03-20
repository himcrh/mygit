#include<stdio.h>
int a[20],b[20];
int main(){
    int add=1;
    a[1]=b[1]=1;
    for(int i=2;b[i-1]<=100000;i++){
        a[i]=2*add+1;
        add+=a[i];
        b[i]=add;
    }
    int n;
    scanf("%d",&n);
    for(int i=1; ;i++){
        if(b[i]>=n){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}