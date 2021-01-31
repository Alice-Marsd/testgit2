#include<iostream>
#include<vector>
using namespace std; 
void PrintData(vector<vector<int> > data)
{
	int i,j;
	cout <<"Data Number:"<<endl;
	for(i=0;i<data.size();++i)
	{
		for(j=0;j<2;++j)
		{
			cout << data[i][j]<<" ";
		}
		cout <<endl;
	}
}
vector<int> LRU(vector<vector<int> >& operators, int k) 
{
    // write code here
    if (operators.empty()) return {};
    
    int i,j;
    vector<vector<int> > data;
    vector<int> result;
    for(i=0;i < operators.size();++i)
    {
    	vector<int> aa;
    	
    	if(operators[i][0]==1)
    	{
    		if(data.size() >=k)
			{
    			data.erase(data.begin());
			}
    		//set(x,y)	
    		
    		aa.push_back(operators[i][1]);
    		aa.push_back(operators[i][2]);
    		data.push_back(aa);
		}
        else if(operators[i][0]==2)
        {
        	//get(x)
        	aa.clear();
            int key=operators[i][1];
            bool exit=false;
            for(j=0;j<data.size();++j)
            {
            	if(data[j][0]==key)
            	{
            		exit=true;
            		aa=data[j];
            		break;
				}
			}
			if(exit)
			{
            	result.push_back(aa[1]);
            	data.erase(data.begin()+j);
            	data.push_back(aa);
			}else{
            	result.push_back(-1);
			}
        }
       
    }
    return result;
}
int main()
{
	vector<vector<int> >  oprators;
	int i,j,k,n,x;
	cin >> n;
	for(i=0;i<n;++i)
	{
		vector<int> aa;
		for(j=0;j<3;++j)
		{
			cin >>x;
			aa.push_back(x);
		}
		oprators.push_back(aa);
	}
	cin >> k;
 	vector<int> a=LRU(oprators,k);
 	for(int i=0;i<a.size();++i)
 		cout << a[i]  <<" ";
}
/****
6
1 1 1
1 2 2
1 3 2
2 1 0
1 4 4
2 2 0
3
**/
