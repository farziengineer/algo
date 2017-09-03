// http://practice.geeksforgeeks.org/problems/binary-array-sorting/0

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;

	cin>>t;

	while(t--)
	{
		int n,a[5000];

		cin>>n;
		for(i=1;i<=n;i+=1)
		{
			cin>>a[i];
		}

		int low,high;
		low=0;
		high=1;

		while(high<=n)
		{
			if(a[high]==1)
				high+=1;
			else if(a[high]==0)
			{
				low+=1;
				int temp=a[low];
				a[low] = a[high];
				a[high] = temp;
				high+=1;
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