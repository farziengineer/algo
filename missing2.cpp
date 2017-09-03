// http://www.geeksforgeeks.org/find-two-missing-numbers-set-2-xor-based-solution/

#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n,i,c[500];
	int cxor=0;
	int xor_total=0;

	cin>>n;
	for(i=1;i<=n;i+=1)
	{
		cin>>c[i];
		cxor=(cxor^c[i]);
		xor_total=(xor_total^i);
	}
	xor_total^=(n+1);
	xor_total^=(n+2);

	int f_xor = (xor_total^cxor);

	int l=0;
	int x;
	while(1)
	{	
		x=(1<<l);
		if((f_xor&x)!=0)
		{
			break;
		}
		l+=1;
		cout<<x<<endl;
	}
	int p,q;
	p=q=0;

	for(i=1;i<=n+2;i+=1)
	{
		if((i&(1<<l))!=0)
			p=(p^i);
		else
			q=(q^i);
	}

	for(i=1;i<=n;i+=1)
	{
		if((c[i]&(1<<l))!=0)
			p=(p^c[i]);
		else
			q=(q^c[i]);
	}

	cout<<p<<' '<<q<<endl;


	return 0;
}