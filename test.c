#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int max=-1e9;
	int cnt;
	scanf("%s",str);
	for(int i=0;i<strlen(str);i++){
		cnt=0;
		for(int j=i+1;j<strlen(str);j++){
			cnt++;
			if(str[j]==str[i]){
			break;	
			}
		}
		if(max<cnt){
			max=cnt;
		}
	}
	printf("%d",max);
}
