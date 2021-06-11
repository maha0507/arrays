#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,sum,s;
	cin>>n;
	cin>>sum;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			s=0;
			for(int k=i;k<=j;k++)
			{
				cout<<a[k]<<"-";
				s+=a[k];
			}
			if (sum==s)
			{
		       cout<<"yes";
	        }
	        else
         	{
		        cout<<"no";
	        }
			
	
	
		}
	}
	
	
	
	
}
