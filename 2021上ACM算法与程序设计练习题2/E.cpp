#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int num1_0=0,num1_1=0;//0101
    int num2_0=0,num2_1=0;//1010
    getchar();
    for(int i=1;i<=n;i++){
        char c;
        scanf("%c",&c);
        i&1 ? (c-'0'?num1_0++:num2_1++) : (c-'0'?num2_0++:num1_1++);
    }
    printf("%d\n",min(abs(num1_0-num1_1)+min(num1_0,num1_1),abs(num2_0-num2_1)+min(num2_0,num2_1)));
    return 0;
}