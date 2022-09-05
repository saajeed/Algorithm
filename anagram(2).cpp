#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string a, string b)
{
	vector<int>charFreqA(261,0);
	//memset(charFreqA,0,sizeof charFreqA);
	vector<int>charFreqB(261,0);
	//memset(charFreqb,0,sizeof charFreqA);
	for(auto &el:a)
		charFreqA[el]++;
	for(auto &el:b)
		charFreqB[el]++;
	for(int i = 0 ;i<=260;i++)
	{
		if(charFreqA[i]!=charFreqB[i])
			return false;
	}
	return true;
}
int main()
{
   string a,b;
   cin>>a>>b;
  cout<< isAnagram(a,b)<<endl;	
}