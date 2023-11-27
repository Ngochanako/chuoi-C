#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int is_alpha(char c){
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
		return 1;
	} 
	return 0;
}
int is_digit(char c){
	if(c>='0'&&c<='9')
	    return 1;
	return 0;
}
void delete_char(char str[],int n){
	for(int i=n;i<strlen(str);i++){
		str[i]=str[i+1];
	}
}

int main(){
	char str[100];
	char c,c1;
	int cnt_c;
	do{
		printf("\n1.Nhap vao chuoi ky tu\n");
		printf("2.In ra chuoi ky tu va noi dung vua nhap\n");
		printf("3.Nhap vao 1 ky tu, dem so lan xuat hien ky tu trong chuoi\n");
		printf("4.Nhap vao 2 ky tu, thay the ky tu thu 2 thanh ky tu thu 1\n");
		printf("5.Nhap vao 1 ky tu,xoa bo ky tu trong chuoi\n");
		printf("6.Thoat\n");
		printf("Lua chon cua ban la:");
		int choice,size;
		int cnt_alpha,cnt_digit,cnt_special;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				getchar();
			    printf("Nhap vao chuoi ky tu:");
				fgets(str,100,stdin);
				str[strlen(str)-1]='\0';
				break;
			case 2:
				puts(str);
				break;
			case 3:
				printf("Nhap vao 1 ky tu:");
				getchar();
				scanf("%c",&c);
				for(int i=0;i<strlen(str);i++){
					if(str[i]==c) cnt_c++;
				}
				printf("So lan xuat hien ky tu %c trong chuoi la:%d",c,cnt_c);
				break;
			case 4:
				printf("Nhap vao ky tu 1");
				scanf("%c",&c);
				printf("Nhap vao ky tu 2");
				scanf("%c",&c1);
				for(int i=0;i<strlen(str);i++){
					if(str[i]==c1){
						str[i]=c;
					}
				}
				puts(str);
				break;
			case 5:
				printf("Nhap vao 1 ky tu:");
				scanf("\n");
				scanf("%c",&c);
				for(int i=0;i<strlen(str);i++){
					while(str[i]==c){
						delete_char(str,i);
					}
				}
				puts(str);				
				break;
			case 6:
			    exit(0);
				break;               
			default:
				printf("Lua chon tu 1 den 6");
		}
	}while(1==1);
}
