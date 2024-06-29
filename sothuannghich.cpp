#include<stdio.h>
#include<string.h>

int checkstn(char*n){
	int len=strlen(n);
	for(int i=0; i<len; i++){
		if(n[i]!=n[len-i-1]) return 0;
	}
	return 1;
}

int main(){
	char a[50];
	while(1){
		scanf("%s", &a);
		if(strlen(a)==0) break;
		if(checkstn(a) && strlen(a)<50){
			printf("yes\n");
		}
		else printf("no\n");
	}
	return 0;
} 
