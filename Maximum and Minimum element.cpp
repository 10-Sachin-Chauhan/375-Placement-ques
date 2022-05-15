#include<iostream>
using namespace std;


void MaxMin(int arr[],int n){
	int minVal=arr[0];
	int maxVal=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>maxVal){
			maxVal=arr[i];
		}
		if(minVal>arr[i]){
			minVal=arr[i];
		}
	}
	cout<<"Maximum Value is :"<<maxVal<<endl;
	cout<<"Minimum Value is :"<<minVal<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	MaxMin(arr,n);
	return 0;
}
