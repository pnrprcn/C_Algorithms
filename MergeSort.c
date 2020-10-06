#include<stdio.h>
#include<limits.h>

void merge(int*,int,int,int);
void mergeSort(int*,int,int);


void main(){
	int arr[]={4,6,17,9,0,20,8};
	int n=sizeof(arr)/sizeof(arr[0]),i;
	
	
	
	mergeSort(&arr[0],0,n-1);
	
	for(i=0;i<n;i++){
		printf("%3d",arr[i]);
	}
	
	
}
void merge(int *array,int min,int mid,int max){
	int n1=mid-min+1,n2=max-mid;
	int tmp1[100],tmp2[100];
	int i,j,k;
	
	for(i=0;i<n1;i++)
		tmp1[i]=array[i+min];
	for(j=0;j<n2;j++)
		tmp2[j]=array[j+mid+1];
	
	i=0;
	j=0;
	k=min;
	
	while(i<n1&&j<n2){
		
		if(tmp1[i]<=tmp2[j]){
			array[k]=tmp1[i];
			i++;
		}else{
			array[k]=tmp2[j];
			j++;
		}
		k++;
		
	}
	
	while(i<n1){
		array[k]=tmp1[i];
		i++;
		k++;
	}
	while(j<n2){
		array[k]=tmp2[j];
		j++;
		k++;
	}
	
}

void mergeSort(int *array,int min,int max){
	
	if(min<max){
	
		int middle=(max+min)/2;
	
		mergeSort(&array[0],min,middle);
		mergeSort(&array[0],middle+1,max);
		
	    merge(&array[0],min,middle,max);
	}
	
}
