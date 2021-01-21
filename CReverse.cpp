#include<iostream>
using namespace std;
struct matrix
{
	int a[6][6];
}res;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
matrix Operation12(matrix res,int m,int n)
{
	swap(&res.a[m][n],&res.a[m][n+1]);
	swap(&res.a[m+1][n],&res.a[m+1][n+1]);
	swap(&res.a[m][n],&res.a[m+1][n+1]);
	return res;	
} 
matrix Operation22(matrix res,int m,int n)
{
	swap(&res.a[m][n],&res.a[m][n+1]);
	swap(&res.a[m+1][n],&res.a[m+1][n+1]);
	swap(&res.a[m+1][n],&res.a[m][n+1]);
	return res;	
} 
matrix Operation13(matrix res,int x,int y)
{
	swap(&res.a[x][y],&res.a[x][y+2]);
    swap(&res.a[x+2][y],&res.a[x+2][y+2]);
    swap(&res.a[x][y],&res.a[x+2][y+2]);
 
    swap(&res.a[x][y+1],&res.a[x+1][y+2]);
    swap(&res.a[x+1][y],&res.a[x+2][y+1]);
    swap(&res.a[x][y+1],&res.a[x+2][y+1]);
	return res;	
}
matrix Operation23(matrix res,int x,int y)
{
	swap(&res.a[x][y],&res.a[x][y+2]);
    swap(&res.a[x+2][y],&res.a[x+2][y+2]);
    swap(&res.a[x][y+2],&res.a[x+2][y]);
 
    swap(&res.a[x][y+1],&res.a[x+1][y+2]);
    swap(&res.a[x+1][y],&res.a[x+2][y+1]);
    swap(&res.a[x+1][y],&res.a[x+1][y+2]);
	return res;	
}
matrix CReverse(matrix res,int a,int b,int m,int n)
{
	if(a==1)//顺时针 
	{
		if(b==2)//4个数字
		{
			res=Operation12(res,m,n); 
		} 
		if(b==3)//9个数字 
		{
			res=Operation13(res,m,n); 
		} 
	}else if(a==2)//逆时针 
	{
		if(b==2)//4个数字
		{
			res=Operation22(res,m,n); 
		} 
		if(b==3)//9个数字 
		{	
			res=Operation23(res,m,n); 
		} 	
	} 
	return res;
}
int main()
{
	int i,j,a,b,m,n;
	for(i=1;i<6;++i)
		for(j=1;j<6;++j)
			cin >> res.a[i][j];
	cin >> a >> b >> m >> n;
	res=CReverse(res,a,b,m,n);
	for(i=1;i<6;++i)
	{
		for(j=1;j<6;++j)
			cout<< res.a[i][j]<<" ";
		cout <<endl;
	}
			
}
