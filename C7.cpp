#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
    string w ;
    cin >> w ;
    int l = w.length() , i , j , k ;
    for ( i = 0 ; i < l ; i++)
    {
        for ( j = 0 ; j < l ; j++)
        {
            for ( k = 0 ; k < l+1 ; k++)
            {
                cout << w[i] << w[j] ;
                if ( k != 0 ) 
				cout << w[k-1]; 
				cout << " " ;
            }
        }
    }
    return 0;
}
