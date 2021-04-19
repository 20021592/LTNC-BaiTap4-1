#include <iostream>
using namespace std;

int main()
{
	int temp = 0, read, a[1000], n, cnt = 0;
	cin >> n;
	for(int i = 1; i<= 1000; i++)
	a[i] = 0;
	for(int i = 1; i <= n; i++)
	{
	cin >> read;
	if(read == 0) cnt++;
	else if(read < 0)  
	a[-read] += read;
	else a[read] += read;
	if((a[read] == 0 && read != 0) || cnt == 2)
	{
		temp = read;
	}
	}
	if(cnt == 2) cout << "0 and 0" << endl;
	else if(temp < 0) cout << -temp << " and " << temp << endl;
	else if(temp > 0) cout << temp << " and " << -temp << endl;
	else if(temp == 0) cout << "No Chicken Dinner!";
	return 0;
}
