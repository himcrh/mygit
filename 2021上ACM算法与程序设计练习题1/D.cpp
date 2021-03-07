#include<stdio.h>
#include<math.h>
using namespace std;
int gcd(int x,int y){
	if(y==0)	return x;
	return gcd(y,x%y);
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b,c,d;
		char h;
		scanf("%d %d %d %d %c",&a,&b,&c,&d,&h);
		if(h=='+'){
			int high=a*d+b*c;
			int low=b*d;
			int num=gcd(high,low);
			high/=num;
			low/=num;
			if(low==1){
				printf("%d/%d+%d/%d=%d\n",a,b,c,d,high);
			}
			else{
				printf("%d/%d+%d/%d=%d/%d\n",a,b,c,d,high,low);
			}
		}
		if(h=='-'){
			int high=a*d-b*c;
			int low=b*d;
			if(high==0){
				printf("%d/%d-%d/%d=0\n",a,b,c,d);
				continue;
			}
			if(high<0){
				high=abs(high);
				int num=gcd(high,low);
				high/=num;
				low/=num;
				if(low==1){
					printf("%d/%d-%d/%d=-%d\n",a,b,c,d,high);
				}
				else{
					printf("%d/%d-%d/%d=-%d/%d\n",a,b,c,d,high,low);
				}
				continue;
			}
			int num=gcd(high,low);
			high/=num;
			low/=num;
			if(low==1){
				printf("%d/%d-%d/%d=%d\n",a,b,c,d,high);
			}
			else{
				printf("%d/%d-%d/%d=%d/%d\n",a,b,c,d,high,low);
			}
		}
		if(h=='*'){
			int high=a*c;
			int low=b*d;
			int num=gcd(high,low);
			high/=num;
			low/=num;
			if(low==1){
				printf("%d/%d*%d/%d=%d\n",a,b,c,d,high);
			}
			else{
				printf("%d/%d*%d/%d=%d/%d\n",a,b,c,d,high,low);
			}
		}
		if(h=='/'){
			int high=a*d;
			int low=b*c;
			int num=gcd(high,low);
			high/=num;
			low/=num;
			if(low==1){
				printf("%d/%d/%d/%d=%d\n",a,b,c,d,high);
			}
			else{
				printf("%d/%d/%d/%d=%d/%d\n",a,b,c,d,high,low);
			}
		}
	}
	return 0;
}