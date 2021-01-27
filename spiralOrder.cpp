#include<iostream>
#include<vector>
//超出时间限制 
using namespace std;
vector<int> spiralOrder(vector<vector<int > >& matrix) 
{
	int i=0,j=0,col=matrix.size(),row=matrix[0].size(),count=col * row;
	int cols=0,rows=0;
	vector<int> list;
	while(count)
	{
		while(j<row-1-rows && count )
		{
			
			list.push_back(matrix[i][j]);
			j++;
			count--;
		}
		
		while(i<col-1-cols && count  )
		{
			
			list.push_back(matrix[i][j]);
			i++;
			count--;
		}
		while(j>rows && count )
		{
			
			list.push_back(matrix[i][j]);
			j--;
			count--;
		}
		cols++;
		while(i>cols && count )
		{
			
			list.push_back(matrix[i][j]);
			i--;
			count--;
		}
		rows++;
	}
	return list; 
}
int main()
{
	vector<vector<int> > matrix;
	vector<int> aa;
	int i,j,m,n,x;
	cin >> m >> n;
	for(i=0;i<m;++i)
	{
		aa.clear();
		for(j=0;j<n;++j)
		{
			cin >> x;
			aa.push_back(x);
		}
		matrix.push_back(aa);
	}
	vector<int>	bb = spiralOrder(matrix);
	for(i=0;i<m*n;++i)
	 cout << bb[i] << " " ;
} 
