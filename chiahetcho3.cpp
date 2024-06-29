#include<stdio.h>
#include<math.h>

int main(){
	long long n; scanf("%lld", &n);
	int s=0;
	while(n!=0){
		s+=n%10;
		n/=10;
	}
	if(s%3==0) printf("yes");
	else printf("no");
	return 0;
	 
} 
