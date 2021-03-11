#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cout << "Nhap vao 1 so nguyen duong N bat ki: ";
	cin >> n;
	int a[100],b[100];
	cout << "Nhap vao ban phim day thu nhat gom N so: ";
	for(int i=0;i<n;i++)
	cin >> a[i];
	cout << "Nhap vao ban phim day thu hai gom N+1 so: ";
	for(int i=0;i<=n;i++)
	cin >> b[i];
	int temp=0;
	for(int i=temp;i<n;i++)
	{
		for(int j=temp;j<=n;j++)
		if(a[i]==b[j])
		{
		swap(b[i],b[j]);
		temp++;
		break;
		}
	}
	cout << "So bi an la " << b[n];
	return 0;
}