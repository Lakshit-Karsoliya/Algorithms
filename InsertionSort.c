#include <stdio.h>
void printarr(int a[],int n){
	for(int i=0;i<=n-1;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int a[10],n,temp,steps=1;
	printf("---------INSERTION SORT--------\n");
	printf("enter size of array:");
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
		}
	for(int i=1;i<=n-1;i++){
		for(int j=i-1;j>=0;j--){
			if(a[j]>a[i]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				printf("step:%d:",steps);
				steps++;
				printarr(a,n);
				printf("\n");
				i--; 	
				}
			}
		}
		printf("final sorted array is:");
		printarr(a,n);
}