#include<bits/stdc++.h>
using namespace std;

int main()
{
  //Converting lower to upper case
  string a;
  cin>>a;
	transform(a.begin(), a.end(), a.begin(), ::toupper);
	cout<<a<<endl;
  
  //Converting upper to lower case
  
	string b;
  cin>>b;
	transform(b.begin(), b.end(), b.begin(), ::tolower);
  cout<<b<<endl;
	return 0;
}
