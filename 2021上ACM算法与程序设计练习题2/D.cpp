#include<stdio.h>
using namespace std;
int n,m;
int ret(bool pos,int floor){
    if(!floor){
        return pos ? 0 : 1;
    }
    return pos ?  (n-2)*ret(1,floor-1)+ret(0,floor-1) : (n-1)*ret(1,floor-1);
}
int main(){
    scanf("%d %d",&n,&m);
    printf("%d\n",ret(0,m));
    return 0;
}