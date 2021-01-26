#include<iostream>
using namespace std;
/****
С��ע�⵽�����м�����һ�������ڰ׷��񻭵�̯λ��
̯����ÿ���˿��ṩһ���̶���ǽ�ϵİ�ɫ���壬���岻��ת������������ n * n ������
�滭����Ϊ��С�ۿ���ѡ����������Լ�������еĸ���Ϳ�ɺ�ɫ����ѡ��������������Ϊ 0��
С��ϣ�����յĳ�Ʒ����Ҫ�� k ����ɫ���ӣ��뷵��С�۹��ж�����Ϳɫ������
ע�⣺��������������һ����ͬλ�õĸ�����ɫ��ͬ������Ϊ��ͬ�ķ�����
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/ccw6C7
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
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
