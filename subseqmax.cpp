#include <iostream>
#include <climits>
using namespace std;

int dp[105][1001][1005];

void pre()
{
	for(int i=0;i<105;i+=1)
	{
		for(int j=0;j<1001;j+=1)
		{
			for(int k=0;k<1005;k+=1)
				dp[i][j][k]=-1;
		}
	}
}

int MSIS(int arr[], int i, int n, int prev, int sum)
{
	if (i == n)
		return sum;

	int excl;
	if(dp[i+1][prev][sum]==-1)
	{
		excl =  MSIS(arr, i + 1, n, prev, sum);
		dp[i+1][prev][sum]=excl;
 	}
	else
	{
		excl = dp[i+1][prev][sum];
	}


	int incl = sum;
	if (arr[i] > prev)
		if (dp[i+1][arr[i]][sum+arr[i]]==-1)
		{
			incl = MSIS(arr, i + 1, n, arr[i], sum + arr[i]);
			dp[i+1][arr[i]][sum+arr[i]]=incl;
		}
		else
		{
			incl=dp[i+1][arr[i]][sum+arr[i]];
		}

			
    dp[i][prev][sum]=max(incl,excl);		
	return max(incl, excl);
}

int main()
{

	int t;

	cin>>t;

	while(t--)
	{
		pre();
		int n,a[500],i;
		cin>>n;
		for(i=0;i<n;i+=1)
		{
			cin>>a[i];
		}
		cout<<MSIS(a, 0, n, 0, 0);
	}


	return 0;
}