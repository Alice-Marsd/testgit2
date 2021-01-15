#include<iostream>
using namespace std;
int transfer(char c)
{
	int num=0;
	switch(c)
    {
        case 'I':num=1;break;
        case 'V':num=5;break;
        case 'X':num=10;break;
        case 'L':num=50;break;
        case 'C':num=100;break;
        case 'D':num=500;break;
        case 'M':num=1000;break;
        default: num=0;
    }
    return num;
 } 
int romanToInt(string s) {
        int num=0,num1=0,result=0;
        
        cout<<"i  "<<"s[i]  "<<"num  "<<"num1  "<<"result  "<<endl; 
        for(int i=0;i<=s.length();++i)
        {
            num=transfer(s[i]);
           
            if(num < transfer(s[i+1]))//的数字大于前边的，那么前边的数字取反相加
            {	
                num=num*(-1);
            }
            result+=num;
            cout<<i<<"   "<<s[i]<<"     "<<num  <<"     "<<num1  <<"      "<<result <<endl;
        }
        return result;
    }
int main()
{
	string str="IV";//"MCMXCIV";
	cout << romanToInt(str) <<endl;
}
/*****
通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

    I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
    X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
    C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。

给定一个罗马数字，将其转换成整数。输入确保在 1 到 3999 的范围内

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/roman-to-integer
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

************************************************************************
注意审题：左边小的数字只能有一个，故，只可能左边和右边的数字有联系
 
**/
