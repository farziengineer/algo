// http://practice.geeksforgeeks.org/problems/missing-number-in-array/0

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,c[5000];

		cin>>n;
		n--;
		int xorsum=0;
		int cxor=0;
		for(i=1;i<=n;i+=1)
		{
			cin>>c[i];
			xorsum=(xorsum^i);
			cxor=(cxor^c[i]);
		}
		xorsum=(xorsum^(n+1));
		cout<<(xorsum^cxor)<<endl;
	}


	return 0;
}