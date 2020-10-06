#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a[]={2,6,7,11,21,34,45,53};
	int n=8;
	int i=0;
	int x;
	int low,high,mid;
	
	printf("Pick a number from the array\n");
	scanf("%d",&x);
	
		low=0;
		high=n-1;
		mid=(low+high)/2;
	
	while(low<=high && a[mid]!=x){
		if(a[mid]<x){
			low=mid+1;
		}else{
			high=mid-1;
		}
		mid=(low+high)/2;
	}
	
	if(low>high){
		printf("Not found");
	}else{
		printf("Found on %d . index ",mid);
	}
	

	return 0;
}
