// http://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		int n,i,a[4000];
		cin>>n;
		for(i=1;i<=n;i+=1)
		{
			cin>>a[i];
		}
		int max_at_here[4000];
		for(i=1;i<=n;i+=1)
			max_at_here[i]=0;

		int global_max=0;
		int flag=0;
		for(i=1;i<=n;i+=1)
		{
			if(max_at_here[i-1]+a[i]>=0)
			{
				max_at_here[i]=max_at_here[i-1]+a[i];
				global_max=max(global_max,max_at_here[i]);
				flag=1;
			}
		}

		if(flag==0)
		{
			global_max=a[1];
			for(i=1;i<=n;i+=1)
			{
				global_max=max(global_max,a[i]);
			}
		}

		cout<<global_max<<endl;


	}



	return 0;
}