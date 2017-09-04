#include <bits/stdc++.h>
using namespace std;

int n,a[1000];

int max_sum_sub(int i,int last_choice,int sum)
{
	if(i>n)
		return sum;

	int excluded= max_sum_sub(i+1,last_choice,last_choice);
	

	int included=sum;

	if(last_choice<a[i])
	{
		int included= max_sum_sub(i+1,a[i],sum+a[i]);
	}

	return max(included,excluded);
}


int main()
{

	int t;

	cin>>t;

	while(t--)
	{
		// ini();

		int i;

		cin>>n;

		for(i=1;i<=n;i+=1)
			cin>>a[i];
		cout<<max(max_sum_sub(1,a[i],0),max_sum_sub(1,0,0));

	}



	return 0;
}