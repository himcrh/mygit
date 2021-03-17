#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        string c;
        cin>>c;
        int h,m;
        h=(c[0]-'0')*10+c[1]-'0';
        m=(c[3]-'0')*10+c[4]-'0';
        if(h>=12)
            h-=12;
        if(m%2)
            printf("%d/2\n",abs(m+h*60-m*12)>360 ? 720-abs(m+h*60-m*12) : abs(m+h*60-m*12));
        else
            printf("%d\n",abs(h*30+m/2-m*6)>180 ? 360-abs(h*30+m/2-m*6) : abs(h*30+m/2-m*6));
    }
    return 0;
}