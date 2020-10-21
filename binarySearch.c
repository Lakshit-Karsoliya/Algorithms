#include <stdio.h>
int temp,f,l,count=0;
int binarysearch(int arr[], int n,int e){
	for (int i=0;i<=n;i++){
		for(int j=0;j<=n-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<=n;i++){
		f=i;l=n;
		if(arr[((f+l)/2)]==e || arr[f]==e || arr[l]==e){
			printf("element %d present in array\n",e);
			count++;
			break;
		}
		else if(arr[((f+l)/2)]!=e && arr[((f+l))]>e){
			l=(l+f)/2;
			}
		else{
			f=(l+f)/2;
			}
			
		}
	if(count==0){
		printf("\nelement not present in list\n");
		}
	}

int main()
{
	int a[100], n,e;
	printf("--binary Search--");
	printf("\nenter no of elements:");
	scanf("%d\n", &n);
	n = n - 1;
	for (int i = 0; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nwhich element u want to search:");
	scanf("%d",&e);
	binarysearch(a,n,e);
}