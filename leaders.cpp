// http://practice.geeksforgeeks.org/problems/leaders-in-an-array/0

#include <bits/stdc++.h>
using namespace std;

int main()
{

	int t;

	cin>>t;

	while(t--)
	{
		int n,i,a[500],lead[500];

		cin>>n;

		for(i=1;i<=n;i+=1)
		{
			cin>>a[i];
			lead[i]=0;
		}

		int max_so_far=-5;
		for(i=n;i>=1;i--)
		{
			if(max_so_far<a[i])
				lead[i]=1;
			max_so_far=max(max_so_far,a[i]);
		}
		for(i=1;i<=n;i+=1)
		{
			if(lead[i]==1)
				cout<<a[i]<<" ";
		}
		cout<<endl;

	}



	return 0;
}