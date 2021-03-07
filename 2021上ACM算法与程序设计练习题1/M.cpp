#include<stdio.h>
using namespace std;

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int a,b,m;
		scanf("%d %d %d",&a,&b,&m);
		a%=3;
		b%=3;
		for(int i=1;i<=m;i++){
			int n;
			scanf("%d",&n);
			if((a==1&&b==2)||(a==2&&b==1)){
				if((n-2)%4){
					printf("No\n");
				}
				else{
					printf("Yes\n");
				}
			}
			if((a==1&&b==1)||(a==2&&b==2)){
				if((n-3)%4){
					printf("No\n");
				}
				else{
					printf("Yes\n");
				}
			}
			if(a==0&&b==0){
				printf("Yes\n");
			}
			if((a==0&&b==1)||(a==0&&b==2)){
				if(n%4){
					printf("No\n");
				}
				else{
					printf("Yes\n");
				}
			}
			if((a==1&&b==0)||(a==2&&b==0)){
				if((n-1)%4){
					printf("No\n");
				}
				else{
					printf("Yes\n");
				}
			}
		}
	}
	return 0;
}