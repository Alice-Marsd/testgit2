#include<iostream>
using namespace std;
int MinK(int a[],int n,int k)
{
	int i,j;
	for(i=0;i<n-1;++i)
	for(j=i+1;j<n;++j)
	{
		if(a[i]>a[j])
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	
	for(i=0;k;++i)
	{
		if(a[i]!=a[i+1]) k--; 	
	}
	return a[i-1];	
}
int main()
{
	int n,k,i;
	int a[1001];
	cin >>n;
	for(i=0;i<n;i++)
	 cin>>a[i];
	cin >> k;
	cout << MinK(a,n,k);
}
