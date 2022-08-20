//Allah Hu Akbar
///Bismillahir Rahmanir rahim
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string name;
        int number;
        cin>>name>>number;
        int flag = 0;
        for (int i=0;i<name.size();i++)
        {
            if (isPrime(name[i] + number))
            {
                cout << "YES" << endl;
                flag++;
                break;
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
    }
}