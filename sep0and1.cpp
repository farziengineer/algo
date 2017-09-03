// http://practice.geeksforgeeks.org/problems/binary-array-sorting/0

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		int n,i,a[5000];

		cin>>n;

		for(i=1;i<=n;i+=1)
		{
			cin>>a[i];
		}

		int ptr1=1;
		int ptr2=n;

		while(1)
		{
			while(a[ptr1]==0 and ptr1<ptr2)ptr1+=1;

			while(a[ptr2]==1 and ptr1<ptr2)ptr2-=1;

			if(ptr1<ptr2)
			{
				int temp=a[ptr2];
				a[ptr2]=a[ptr1];
				a[ptr1]=temp;
			}
			else
				break;			
		}
		for(i=1;i<=n;i+=1)
			cout<<a[i]<<" ";
		cout<<endl;
	}



	return 0;
}