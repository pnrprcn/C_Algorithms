#include<stdio.h>

int main(){
	int ar[]={12,5,3,6,54,3};
	int n=6;
	int i=0;
	int x;
	printf("Enter a number");
	scanf("%d",&x);
	
	while((i<n)&&ar[i]!=x){
		i++;
	}
	
	if(i<n){
		printf("number found on index -> %d",i);
	}else{
		printf("not found..sad story");
	}
	
	
	
	return 0;
}
