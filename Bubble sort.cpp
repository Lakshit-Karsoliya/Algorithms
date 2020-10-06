/*here function sortA sort array in ascending order and sortD sort in decending order*/
#include<iostream>
using namespace std;
class test{
	int i,data,temp,j,n;
	int arr[ 1000];
	public:
	
	void get_arr(){
		cout<<"enter no of elements to store\n";
		cin>>n;
		n=n-1;
		arr[n];
		cout<<"enter elements to store\n";
		for(i=0;i<=n;i++){
			cin>>data; 
			arr[i]=data;
			}
				}
	void put_arr(){
		cout<<"\nelements are\n";
		for(i=0;i<=n;i++){
			cout<<arr[i]<<" ";
			}
				}
		//sort in decending order
		void sortD(){
			cout<<"sorting in descending order\n";
			for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
		if(arr[j]<arr[j+1]){
			temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
			}}
		}
		}
		//sort in ascending order
		void sortA(){
			cout<<"\nsorting in ascending order\n";
				for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
		if(arr[j]>arr[j+1]){
			temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
			}}
		}
			}
	};
	
int main(){
	
	test t1;
	t1.get_arr();
	t1.put_arr();
	t1.sortA();
    t1.put_arr();
    t1.sortD();
    t1.put_arr();
	}
