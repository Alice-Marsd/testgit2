#include<iostream>
#include<vector>
using namespace std; 
int removeDuplicates(vector<int>& nums)
{
	if(nums.empty() || nums.size()<=0) return 0;
	int i;
	for(i=0;i<nums.size()-1;)
	{
		if(nums[i]==nums[i+1])
			nums.erase(nums.begin()+i,nums.begin()+i+1);
		else ++i;
	}
	return nums.size();
}
int main()
{
	vector<int> aa;
	int i,n,x;
	cin >> n;
	for(i=0;i<n;++i)
	{
		cin >> x;
		aa.push_back(x);
	}
	cout <<removeDuplicates(aa)<< endl;
	for(int i=0;i<aa.size();++i)
		cout << aa[i]<<" ";
	
}

