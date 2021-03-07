#include<stdio.h>
using namespace std;
int month[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int y,m,d;
		scanf("%d %d %d",&y,&m,&d);
		int ans=0;
		
		if(y%100){
			if(!(y%4)){
				month[2]++;
			}
		}
		else if(!(y%400)){
			month[2]++;
		}
		for(int i=1;i<m;i++){
			ans+=month[i];
		}
		printf("%d\n",ans+d);
		month[2]=28;
	}
	return 0;
}