#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[100];
	char temp;
	int count=0;
	int choice;
	do{
		printf("\nMENU\n");
		printf("1. Nhap chuoi ki tu\n");
		printf("2. in ra do dai va noi dung vua nhap\n");
		printf("3. In ra chuoi dao nguoc\n");
		printf("4. In ra so luong chu cai\n");
		printf("5. In ra so luong so\n");
		printf("6. In ra so luong cac ki tu dac biet\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1 :
				fflush(stdin);
				printf("\nNhap vao chuoi ki tu:\n");
				gets(str);
				break;
			case 2 :
				printf("Do dai chuoi: %d\n",strlen(str));
				printf("Ban vua nhap: %s\n",str);
				break;
			case 3 :
				{
				int length = strlen(str);
				for(int i=0;i<length/2;i++){
					temp = str[i];
					str[i]=str[length-i-1];
					str[length-i-1]=temp;
				}
				printf("Chuoi dao nguoc:\n%s",str);
				}
				break;
			case 5:
				printf("So luong chu so trong chuoi:");
				for(int i=0;i<strlen(str);i++){
//					printf("str[%d]=%d\n",i,str[i]);
					if(47<str[i] && str[i]<58) {
						count++;
					}
				}
				printf("%d",count);
				count=0;
				break;
			case 4:
				printf("So luong chu cai trong chuoi:");
				for(int i=0;i<strlen(str);i++){
					if(96<str[i] && str[i]<123 || 64<str[i] && str[i]<91){
						count++;
					}
				}
				printf("%d",count);
				count=0;
				break;
			case 6:
				printf("So ki tu dac biet:");
				for(int i=0;i<strlen(str);i++){
					count++;
				if(47<str[i] && str[i]<58){
					count--;
				}else if(96<str[i] && str[i]<123|| 64<str[i] && str[i]<91){
					count--;
				}else if(str[i]==32){
					count--;
				}
			}
				printf("%d",count);
				break;
			case 7:
				exit(0);
			default:
				printf("\nNhap tu 1-7:");
	}
	}while(1==1);
}