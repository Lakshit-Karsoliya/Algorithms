#include <stdio.h>
//n=size of array ,e=element you want to search in array
long int count=0;
void search(long int a[],long int n,long int e){
	for(long int i=0;i<=n;i++){
		if(a[i]==e){
			printf("element %ld foind at position %ld\n",e,i);
			count++;
			}
		}
		if(count==0){
			printf("\neoement you are searching for not present in list\n");
			}
	}
	
int main(){
	long int data[1000],n,e;
	printf("--linear search--\n");
	printf("enter no of elements:");
	scanf("%ld",&n);
	printf("enter elements\n");
	n=n-1;
	for(long int i=0;i<=n;i++){
		scanf("%ld",&data[i]);
		}
	printf("\nenter element you want to search:");
	scanf("%ld",&e);
	search(data,n,e);
	}