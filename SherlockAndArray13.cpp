#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int t=0;t<T;t++)
	{
		int n,sum=0,temp=0;
		cin >> n;
		int a[n+1];
		a[0]=0;
		for(int i=1;i<=n;i++)
		{
		cin >> a[i];
		a[i]=a[i]+a[i-1];
		}
		if(a[n]==0) 
		{
			cout << "YES" << "\n";
			temp=1;
		}
		else 
		{
			for(int i=1;i<=n;i++)
			if(a[i-1]==a[n]-a[i])
			{
				cout << "YES" << "\n";
				temp=1;
				break;
			}
		}
		if(temp==0) cout << "NO" << "\n";
	}
	return 0;
}