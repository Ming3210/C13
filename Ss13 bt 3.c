#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int count[26]={0};
	printf("Nhap cac ki tu:");
	gets(str);
	for(int i=0;i<strlen(str);i++){
		count[str[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(count[i]!=0){
			printf("%c: %d\n",(i+'a'),count[i]);
		}
	}
}
