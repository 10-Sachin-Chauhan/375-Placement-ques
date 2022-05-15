#include<iostream>
#include<vector>
#include<algorithm>

int n;
using namespace std;

bool ContainDuplicate(vector<int> &nums){
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(nums[i]==nums[j]){
				return true;
			}
		}
	}
	return false;
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
	
	
	
	cout<<"There is any duplicate : "<<ContainDuplicate(nums);
}
	
