#include<iostream>
#include<vector>
using namespace std;
 
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     * ��������������
     * @param arr int����vector �����������
     * @return int����vector
     */
    int Partition(vector<int>& arr,int low,int high)
    {
        int base=arr[low];
        while(low<high)
        {
            while(low<high && arr[high]>=base) high--;
            arr[low]=arr[high];
            while(low<high && arr[low]<=base ) low++;
            arr[high]=arr[low];
        }
        arr[low]=base;
        return low;
    }
    void quicksort(vector<int>& arr,int low,int high)
    {
        int mid=Partition(arr,low,high);
        if(low < mid-1) quicksort(arr,low,mid-1);
        if(mid+1 < high) quicksort(arr,mid+1,high);
    }
    vector<int> MySort(vector<int>& arr) {
        // write code here
        if(arr.empty()) return {};
        quicksort(arr,0,arr.size()-1);
        
        return arr;
    }
int main()
{
	
}
