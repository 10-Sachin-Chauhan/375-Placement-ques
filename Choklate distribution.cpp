#include<iostream>
#include<vector>
#include<algorithm>
int n;
using namespace std;

int Choklate_Distribution(vector<int> &vec,int m){
	
	int min_diff=12345678;
	sort(vec.begin(),vec.end());
	for(auto x=vec.begin();x!=vec.end();x++){
		cout<<*x<< "  ";
	}
	for(int i=0;(m+i-1)<n;i++){
		int diff=vec[m+i-1]-vec[i];
		if(diff<min_diff){
			min_diff=diff;
		}
	}
	return min_diff;
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
	int m;
	cout<<"Enter how many students are : ";
	cin>>m;
	
	cout<<"The Minimum Difference is : "<<Choklate_Distribution(nums,m);
}
