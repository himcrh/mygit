#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int a[25][25];
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		memset(a,0,sizeof(a));
		int x=n,y=1;
		a[x][y]=1;
		for(int i=2;i<=n*n;i++){
			if(!a[x][y+1]&&y+1<=n){
				a[x][y+1]=i;
				y++;
			}
			else if(!a[x-1][y]&&x-1>=1){
				a[x-1][y]=i;
				x--;
			}
			else if(!a[x][y-1]&&y-1>=1){
				a[x][y-1]=i;
				y--;
			}
			else {
				while(!a[x+1][y]){
					a[x+1][y]=i;
					x++;
					i++;
				}
				i--;
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				printf("%4d",a[j][i]);
			}
			puts("");
		}
	}
	return 0;
}