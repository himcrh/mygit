#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int m,n;
		scanf("%d %d",&m,&n);
		int a[210];
		memset(a,0,sizeof(a));
		int num=m;
		int i=1;
		int cont=0;
		while(num!=1){
			if(!a[i]){
				cont++;
				if(cont==n){
					a[i]=1;
					num--;
					cont = 0;
				}
			}
			i++;
			if(i>m){
				i=1;
			}
		}
		for(int i=1;i<=m;i++){
			if(!a[i]){
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}