#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str)
{
	int i = str[0];
	int j = str[str.size()-1];
	while(i<=j)
	{
		if(str[i]!=str[j])
			return false;
		i++;
		j--;
	}
	return true;
}
int main()
{
	string a;
	cin>>a;
	cout<<isPalindrome(a)<<endl;
}