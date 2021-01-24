#include<iostream>
using namespace std;
string Operation(string str,string op)
{
	int i,j,len;
	len=op[2]-'0';
	i=op[1]-'0';
	j=op[1]-'0'+len-1;
	if(op[0]=='0')			//·­×ª
	{	
		reverse(s.begin()+start,s.begin) 
		
	}else if(op[0]=='1'){  //Ìæ»» 
		int cc=3;
		while(i<=j)
		{
			str[i]=op[cc];
			++cc;
			++i;
		}
	} 
	return str;
}
int main()
{
	string str,op;
	int n;
	cin >> str;
	cin >> n;
	while(n--)
	{
		cin >> op;
		str=Operation(str,op);
		cout << str <<endl;
	}
}

//181wtr
//0123456789
//jkygexrrwtrunuwxalgcbxistydvrxmfyhb
//jkygexrrw  unuwxalgcbxistydvrxmfyhb
//009
//wrrxegykjtrunuwxalgcbxistydvrxmfyhb
//wrrxegykjunuwxalgcbxistydvrxmfyhb
