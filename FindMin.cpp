#include<iostream>
using namespace std;
struct S
{
	int x;
	int y;
}arr[100];
S FindMin(int n)
{
	S min=arr[0];
	int i;
	for(i=1;i<n;++i)
	{
		if(arr[i].x  <  min.x)
			min=arr[i];
		else if(arr[i].x == min.x)
		{
			if(arr[i].y < min.y)
				min=arr[i];
		}
	}
	return min;
}
int main()
{
	int n,i;
	cin >> n;
	for(i=0;i<n;++i)
		cin >>arr[i].x >>arr[i].y;
	S s=FindMin(n);
	cout << s.x <<" "<<s.y;
}
