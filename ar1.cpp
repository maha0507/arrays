#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,index,element;
	cout<<"enter size";
	cin>>n;
	cout<<"enter element";
	cin>>element;
	int arr[n];
	cout<<"enter position";
	cin>>p;
	if(p!=n)
    {
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	index=p-1;
	for(int j=n-1;j>=index;j--)
    {
        arr[j]=arr[j-1];
    }
    arr[index]=element;
    n++;
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    }
    else
    {
        cout<<"cant insert";
    }
}
