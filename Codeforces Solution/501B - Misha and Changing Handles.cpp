/*
    Author: Mohamed Dwedar
    "Truth can only be found in one place: The Code"
*/
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
using namespace std;
/*----------------Solve func()----------------*/
void solved()
{
    // freopen("input.txt" , "right" , stdin);
    // freopen("output.txt" , "w" , stdout);  
	int tc , i;
    vector<pair<string,string>> v;
    string x , y;
	cin >> tc;
	while(tc--)
	{
		cin >> x >> y;
		for(i = 0 ; i < v.size() ; i++)
		{ 
			if(v[i].second == x)
			{
				v[i].second = y;
				break;
			}
		}
		if(i == v.size())
			v.push_back(make_pair( x , y ));

	}
	cout<< v.size() << endl;
	for( i = 0 ; i < v.size() ; i++)
	{
		cout << v[i].first << " " << v[i].second << endl;
	}
}  
/*---------------Start MAIN--------------------*/
int main()
{
    fast_io;
    solved();
    return 0;
}
/*-----------------End MAIN-----------------*/