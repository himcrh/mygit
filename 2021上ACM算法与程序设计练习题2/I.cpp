#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int x,y,n;
        scanf("%d %d %d",&x,&y,&n);
        getchar();
        int flag = -1;
        string c;
        cin>>c;
        if((!x)&&(!y)){
            printf("0\n");
            continue;
        }
        for(int i=0;i<c.size();i++){
            if(x) x>0?(c[i]=='R'?x--:1):(c[i]=='L'?x++:1);
            if(y) y>0?(c[i]=='U'?y--:1):(c[i]=='D'?y++:1);
            if((!x)&&(!y)){
                flag = i+1;
                break;
            }
        }
        printf("%d\n",flag>=0?flag:-1);
    }
    return 0;
}