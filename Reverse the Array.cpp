#include<iostream>
using namespace std;

int* Reverse(int arr[],int n){
	
	for(int i=0;i<n/2;i++){
		int temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	return arr;
}
int main(){
	int n;
	cout<<"Enter the size of the array :"<<endl;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the element of the index ["<<i<<"] : ";
		cin>>arr[i];
	}
	
	int *ans=Reverse(arr,n);
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
