#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    while (1){
        int n;
        scanf("%d",&n);
        if(!n)
            break;
        getchar();
        int r=0,y=0;
        for(int i=1;i<n;i++){
            char c;
            scanf("%c",&c);
            if(c=='R')
                r++;
            if(c=='Y')
                y++;
        }
        char d;
        scanf("%c",&d);
        if(d=='B'){
            if(r==7)
                printf("Red\n");
            else
                printf("Yellow\n");
        }
        if(d=='L'){
            if(y==7)
                printf("Yellow\n");
            else
                printf("Red\n");
        }
    }
    return 0;
}