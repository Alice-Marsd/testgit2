package Findkth;

public class FindKthSolution {
	public static int findKth(int[] a, int n, int K) 
    {
        // write code here
		quicksort(a,0,n-1,K);
		return a[K];
        
    }
	private static void quicksort(int[] a, int begin, int end,int K) {
		// TODO Auto-generated method stub
		
		if(begin<end) 
		{	
			int mid=partition(a, begin, end);
			if(mid==K) return;
			quicksort(a,begin,mid-1,K);
			quicksort(a,mid+1,end,K);
		}	
	}
	private static int partition(int[] a,int begin,int end) {
		// TODO Auto-generated method stub
		int base=a[begin];
        while(begin < end)
        {
        	while(a[end] <= base && end>begin) end--;
        	a[begin]=a[end];
        	while(a[begin] >=base && end>begin) begin++;
        	a[end]=a[begin];	
        }
        a[begin]=base;
		return begin;
	}
	public static void main(String[] args) {
		int a[]= {1,3,5,2,2};
		int n=5,k=3;
		System.out.println(findKth(a,n,k));
	}
}
