#include<bits/stdc++.h>
using namespace std;
main()

{
	int a[100],n,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int i=0;i<n-1;i++)
	{
		if (a[i]>a[i+1])
		count++;
	}
if(count==0)
{
	cout<<"yes";
}
else
{
	cout<<"no";
}
	
     
	
}

