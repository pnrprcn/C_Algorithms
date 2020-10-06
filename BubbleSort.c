#include<stdio.h>
#include<stdlib.h>

//BUBBLE SORT

int bubbleSort(int,int*);
void swap(int*,int*);
void printArray(int,int*);


void main(){
	int array[]={5,8,2,0,10,1,30,7};
	int n=sizeof(array)/sizeof(array[0]);
	//note:arrays cannot passed by as a value. only can pass the first element's address.
	printf("Bubble Sorted:\n");
	bubbleSort(n,&array[0]);
	
	printArray(n,&array[0]);
		
}
//functions
int bubbleSort(int n,int *arr){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}
void swap(int*x,int*y){
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}

void printArray(int n,int *arr){
	int i;
	for(i=0;i<n;i++){
		printf("%3d",arr[i]);
	}
}
