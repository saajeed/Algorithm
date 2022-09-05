#include<bits/stdc++.h>
using namespace std;
vector<string>findTheAnagram(vector<string>s)
{
	vector<string>ans=s;
	for(int i = 0 ;i<s.size();i++)
	{
        sort(s[i].begin(),s[i].end());
	}
	vector<string>result;
	map<string,int> mp;
	for(auto el:s)
		mp[el]++;
	for(int i = 0;i<ans.size();i++)
	{
		string temp = ans[i];
		sort(temp.begin(),temp.end());
		if(mp[temp]>1)
			result.push_back(ans[i]);
	}
	return result;
}
int main()
{
	int n ;
	cin>>n ;
	vector<string>s;

	for(int i = 0 ;i<n;i++)
	{
		string val;
		cin>>val;
		s.push_back(val);
	}
	vector<string> result =findTheAnagram(s);
	for(auto &el: result)
		cout<<el<<" ";
	cout<<endl;
}