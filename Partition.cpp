#include<iostream>
#include<vector>
using namespace std;
 
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 将给定数组排序
     * @param arr int整型vector 待排序的数组
     * @return int整型vector
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
