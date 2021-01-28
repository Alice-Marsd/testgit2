#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) 
{
	int i;
	int sum=0,preSum=0x80000000;
	for(i=0;i<nums.size();++i)
	{
		if(sum<=0)
		{
			sum=nums[i];
		}else{
			sum+=nums[i];
		}
		if(sum >preSum)
			preSum=sum;
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
