// http://practice.geeksforgeeks.org/problems/subarray-range-with-given-sum/0


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		long n,i,a[155555],pref[155555],k;

		cin>>n;

		for(i=1;i<=n;i+=1)
		{
			cin>>a[i];
		}
		cin>>k;
		long cnt=0;
		for(i=0;i<155550;i+=1)
			pref[i]=0;
		
		map <long,long> mmap;
		mmap.clear();

		for(i=1;i<=n;i+=1)
		{
			pref[i]=pref[i-1]+a[i];
			cnt+=mmap[pref[i]-k];
			mmap[pref[i]]+=1;
		}
		cout<<cnt+mmap[k]<<endl;

	}


	return 0;
}