#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int a[1100];
int main(){
    string c;
    cin>>c;
    for(int i=0;i<c.size();i++)
        a[i]=c[i]-'0';
    sort(a,a+c.size());
    for(int i=0;i<c.size();i++)
        if(a[i])    printf("%d",a[i]);
    return 0;
}