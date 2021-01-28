#include<iostream>
#include<vector>
using namespace std;
vector<int> exchange(vector<int>& nums) 
{
	int i=0,j=nums.size()-1;
	while(i<j)
	{
		if(nums[i]&1)	++i;
		else{
			if(nums[j]&1)	swap(nums[i],nums[j]);
			else j--;
		}
	}
	return nums;
}
int main()
{
	vector<int> nums;
	int n,x,i;
	cin >> n;
	for(i=0;i<n;++i)
	{
		cin >> x;
		nums.push_back(x);
	}	
	nums=exchange(nums);
	for(i=0;i<nums.size();++i)
	 cout <<nums[i]<<" ";
}
