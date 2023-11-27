#include<stdio.h>
#include<string.h>

int main(){
	char str[1000];
	scanf("%s",str);
	int cnt=0,max=-1e9;
	for(int i=0;i<strlen(str);i++){
		cnt++;
		if(str[i]==str[i+1]){
			if(max<cnt){
				max=cnt;
			} 
			cnt=0;
		}
	}
	printf("\n%d",max);
}
