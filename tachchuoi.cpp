#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int tachso(char*n){
	int len=strlen(n);
	if(len%2!=0){
		printf("khong tach duoc");
		return 0;
	}
	for(int i=0; i<len; i+=2){
		char m[3];
		m[0]=n[i];
		m[1]=n[i+1];
		m[3]='\0';
		int k=atoi(m);
		printf("%02d ", k);
	}
	printf("\n");
}

int main(){
	char n[101]; scanf("%s", &n);
	tachso(n);
	return 0;
} 
