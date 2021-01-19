#include<iostream>
#include<string.h>
using namespace std;
struct matrix
{
	int a[100][100];
 } origin,res;
matrix MiK(matrix *A,matrix *B,int n)
{
	matrix temp;
	memset(temp.a,0,sizeof(temp.a));
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			for(int k=0;k<n;++k)
			{
				temp.a[i][j]+=A->a[i][k]*B->a[k][j];
			}
		}
	}
    return temp;
}
matrix fastpow(matrix A,int n,int k)
{
	matrix matrix;
	int i,j;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			if(i==j)
			matrix.a[i][j]=1;
			else
			matrix.a[i][j]=0;
		}
	}// 构造单位矩阵 
	while(k>0)
	{
		if(k&1)
			matrix=MiK(&A,&matrix,n);
		k/=2;
		A=MiK(&A,&A,n);
	}
		return matrix;
}
int main()
{
    int T,n,k,i,j;
    cin >> T;
    while(T--)
    {
	  	cin >> n;
	  	cin >> k;
	    for(i=0;i<n;++i)
		for(j=0;j<n;++j)
		    cin>>origin.a[i][j];
		res=fastpow(origin,n,k);
		for(i=0;i<n;++i)
		{
			for(j=0;j<n-1;++j)
			{
				printf("%d ",res.a[i][j]);
			}
			printf("%d\n",res.a[i][j]);
		}
	}
}
