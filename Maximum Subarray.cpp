#include<iostream>
#include<vector>
#include<String>
#include<algorithm>

int n;
using namespace std;

int MaxSubarray(vector<int>& vec){
	int maxVal=-123456;
	int currSum=0;
	for(int i=0;i<n;i++){
		currSum+=vec[i];
		maxVal=max(currSum,maxVal);
		
		if(currSum<0){
			currSum=0;
		}			
	}
	return maxVal;
}
int main(){
	
	cout<<"Enter the size of the array :";
	cin>>n;
	
	vector<int> nums;
	for(int i=0;i<n;i++){
		int num;
		cout<<"Enter the"<<i+1<<" th Element : ";
		cin>>num;
		nums.push_back(num);
	}
	
	int res=MaxSubarray(nums);
	cout<<"The Maximum Sum is " <<res;
	return 0;
}
