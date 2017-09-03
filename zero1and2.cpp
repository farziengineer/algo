// http://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0

#include <bits/stdc++.h>
using namespace std;


int main()
{


	int t;

	cin>>t;

	while(t--)
	{
		int n,a[500],i;

		cin>>n;

		for(i=1;i<=n;i+=1)
		{
			cin>>a[i];
		}

		int lo=0;
		int mid=1;
		int high=n+1;

		while(mid<high)
		{
			if(a[mid]==0)
			{
				lo+=1;
				a[mid]=a[lo];
				a[lo]=0;
				mid+=1;
			}
			else if(a[mid]==1)
				mid+=1;
			else if(a[mid]==2)
			{
				high--;
				int temp=a[high];
				a[high]=a[mid];
				a[mid]=temp;
			}

		}

		for(i=1;i<=n;i+=1)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}





	return 0;
}