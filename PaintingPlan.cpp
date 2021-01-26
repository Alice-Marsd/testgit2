#include<iostream>
using namespace std;
/****
小扣注意到秋日市集上有一个创作黑白方格画的摊位。
摊主给每个顾客提供一个固定在墙上的白色画板，画板不能转动。画板上有 n * n 的网格。
绘画规则为，小扣可以选择任意多行以及任意多列的格子涂成黑色，所选行数、列数均可为 0。
小扣希望最终的成品上需要有 k 个黑色格子，请返回小扣共有多少种涂色方案。
注意：两个方案中任意一个相同位置的格子颜色不同，就视为不同的方案。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/ccw6C7
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
****/
int C(int x,int n)
{
	int i,sum0=1,sum1=1;
	for(i=0;i<x;++i)
	{
		sum0=sum0*(n-i);
		sum1=sum1*(x-i);
	}	
	return sum0/sum1;
}
int paintingPlan(int n, int k) 
{
	if(k==0 || k==n*n) return 1;
	int i,j,sum=0,time=0;
	for(i=0;i<=n;++i)
		for(j=0;j<=n;++j)
		if((i*n)+(j*n)-(i*j)==k)
		time+=C(i,n)*C(j,n);
	return time;
}
int main()
{
	int n,k;
	cin >> n >> k;
	cout << paintingPlan(n,k) <<endl;
}
