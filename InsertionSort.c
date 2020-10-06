#include<stdio.h>
//INSERTION SORT
void printArray(int*,int);
void insertionSort(int*,int);
void swap(int*,int*);

void main(){
	int array[]={5,9,35,3,18,4};
	int n=sizeof(array)/sizeof(array[0]);
	
	printf("Insertion Sorted:\n");
	insertionSort(&array[0],n);
	
	printArray(&array[0],n);
	
}
void insertionSort(int *arr,int n){
	
	int i,j,min,minAdr;
	
	for(i=0;i<n;i++){
		min=arr[i];
		minAdr=i;
		for(j=i;j<n;j++){
			if(min>arr[j]){
				min=arr[j];
				minAdr=j;
				swap(&arr[i],&arr[j]);
			}
			
		}
	}




}

void swap(int*x,int*y){
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}
void printArray(int* arr,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%3d",arr[i]);
	}
}
