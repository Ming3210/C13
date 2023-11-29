#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100];
	int choice;
	char find;
	int count = 0;
	char newVallue;
	do{
		printf("\nMENU\n");
		printf("1. Nhap vao chuoi ki tu\n");
		printf("2. In ra noi dung chuoi\n");
		printf("3. Nhap vao 1 ki tu, dem so lan xuat hien\n");
		printf("4. Nhap vao 2 ki tu, thay the cac ky tu thu 2 trong chuoi thanh ki tu thu 1\n");
		printf("5. Thap vao 1 ki tu,xoa cac ki tu trong chuoi\n");
		printf("6. Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				fflush(stdin);
				printf("\nNhap vao chuoi ki tu:\n");
				gets(str);
				break;
			case 2:
				printf("Do dai chuoi: %d\n",strlen(str));
				printf("Ban vua nhap: %s\n",str);
				break;
			case 3:
				printf("\nNhap ky tu muon tim kiem: ");
                scanf(" %c", &find);
                for (int i = 0; i < strlen(str); i++) {
                    if (str[i] == find) {
                        count += 1;
                    }
                }
                printf("So lan xuat hien cua ky tu do la: %d", count);
                break;
            case 4:
            	printf("Nhap phan tu muon thay the: ");
            	scanf(" %c",&find);
            	printf("Nhap ky tu thay the:");
            	scanf(" %c",&newVallue);
            	for(int i=0;i<strlen(str);i++){
            		if(str[i] == find){
            			str[i]=newVallue;
					}
				}
				printf("%s",str);
				break;
			case 5:
				printf("Nhap vao ky tu muon xoa: ");
				scanf(" %c",&find);
					for(int i=0;i<strlen(str);i++){
						if(str[i] == find){
							int j;
							for(j=i;j<strlen(str);j++){
								str[j]=str[j+1];
							}
							str[j+1]='\0';
							i--;
						}
					}
				printf("%s",str);
				break;
			case 6:
				exit(0);
			default:
				printf("Vui long chon tu 1-6");
		}
	}while(1==1);
}	