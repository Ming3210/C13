#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int count=0;
	int max=count;
	printf("Nhap cac ky tu:");
	gets(str);	
	for(int i=0;i,strlen(str);i++){
		for(int j=i+1;str[j]=str[i];j++){
			count++;
		}
		count=0;
	}
	printf("Bai kho qua ko lam dc =((((");
}