#include<iostream>
using namespace std;
void bubble(int *a,int n)
{
	for(int i=0;i<n-1;++i)
	for(int j=i+1;j<n;++j)
	{
		if(a[i]>a[j])
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
int WPL(int a[],int n)
{
	if(a==NULL && n<=0) return 0;
	int i;
	int wpl=0;
	for(i=0;i<n-1;++i)
	{
		bubble(a+i,n-i);	
		a[i+1]=a[i]+a[i+1];
		wpl+=a[i+1];
	}
	return wpl;
}
int main()
{
	int a[1001];
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	cout <<WPL(a,n) <<endl;
}
