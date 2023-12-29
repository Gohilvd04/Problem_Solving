#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0, flag = 0, j = 1, i = 4, x;
    vector<int> ans;
    int a[] = {1, 1, 1, 1, 4};
    int b[] = {2, 5};
    while (i >= 0 && j >= 0)
    {
        sum = a[i] + b[j];
        if ((sum + flag) >= 10)
        {
            x = (sum + flag) % 10;
            cout << " " << x << " ";
            ans.push_back(x);
            flag = 1;
        }
        else
        {
            x = sum + flag;
            cout << " " << x << " ";
            ans.push_back(x);
            flag = 0;
        }
        j--;
        i--;
    }
    while (i >= 0)
    {
        if ((a[i] + flag) >= 10)
        {
            x = (a[i] + flag) % 10;
            cout << " " << x << " ";
            ans.push_back(x);
            flag = 1;
        }
        else
        {
            x = a[i] + flag;
            cout << " " << x << " ";
            ans.push_back(x);
            flag = 0;
        }
        i--;
    }
    while (j >= 0)
    {
        if ((b[j] + flag) >= 10)
        {
            x = (b[j] + flag) % 10;
            cout << " " << x << " ";
            ans.push_back(x);
            flag = 1;
        }
        else
        {
            x = b[j] + flag;
            cout << " " << x << " ";
            ans.push_back(x);
            flag = 0;
        }
        j--;
    }
    if (flag == 1)
    {
        cout << " 1" << endl;
        ans.push_back(1);
    }
    reverse(ans.begin(), ans.end());
    cout << endl;
    for(auto it: ans){
        cout << it << " ";
    }
    return 0;
}