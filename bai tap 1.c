#include<stdio.h>
#include<string.h>

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

int main(){
	char str[100];
	do{
		printf("\n1.Nhap vao chuoi ky tu\n");
		printf("2.In ra chuoi ky tu va noi dung vua nhap\n");
		printf("3.In ra chuoi dao nguoc\n");
		printf("4.In ra so luong chu cai trong chuoi\n");
		printf("5.In ra so luong chu so trong chuoi\n");
		printf("6.In ra so luong ky tu dac biet trong chuoi\n");
		printf("Lua chon cua ban la:");
		int choice,size;
		int cnt_alpha,cnt_digit,cnt_special;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				getchar();
			    printf("Nhap vao chuoi ky tu:");
				fgets(str,100,stdin);
				break;
			case 2:
				puts(str);
				break;
			case 3:
				for(int i=strlen(str)-2;i>=0;i--){
					printf("%c",str[i]);
				}
				break;
			case 4:
				cnt_alpha=0;
				for(int i=0;i<strlen(str)-1;i++){
					if(is_alpha(str[i])) cnt_alpha++;
				}
				printf("%d",cnt_alpha);
				break;
			case 5:
				cnt_digit=0;
				for(int i=0;i<strlen(str)-1;i++){
					if(is_digit(str[i])) cnt_digit++;
				}
				printf("%d",cnt_digit);
				break;
			case 6:
				cnt_digit=0;
				for(int i=0;i<strlen(str)-1;i++){
					if(is_alpha(str[i])) cnt_alpha++;
					if(is_digit(str[i])) cnt_digit++;
				}
				cnt_special=strlen(str)-1-cnt_alpha-cnt_digit;
				printf("%d",cnt_special);
				break;
			default:
				printf("Lua chon tu 1 den 6");
		}
	}while(1==1);
}
