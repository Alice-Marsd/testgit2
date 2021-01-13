class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> a;
        vector<int> b(2,-1);
        for(int i=0;i<nums.size();i++)
            a.insert(map<int,int>::value_type(nums[i],i));
        for(int i=0;i<nums.size();i++)
         {   
            if(a.count(target-nums[i])>0 && (a[target-nums[i]]!=i))
            {
                b[0]=i;
                b[1]=a[target-nums[i]];
                break;
            }
         }
         return b;
    };
    
};
/***
	map是STL的一个关联容器 ，它提供一对一的hash。
	第一个可以称为关键字（key），每个关键字只能在map中出现一次
	第二个是该关键字的类型(value)
	 map内部实现自建一颗红黑树，这棵树具有 对数据自动排序的功能。在map内部所有的数据都是有序的。 
**/ 
