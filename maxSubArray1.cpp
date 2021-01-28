#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) 
{
	int i;
	int sum=0,preSum=0;
	for(i=0;i<nums.size();++i)
	{
		sum=nums[i];
		if(preSum<=0)
		 preSum=sum;
		else
		 preSum+=sum;			
	}
	return preSum;
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
	cout << maxSubArray(nums);
}
