#include <bits/stdc++.h>
using namespace std;
string smallestSubsequence(string text)
{

    string str = "";
    vector<int> count(26, 0);
    vector<bool> used(26, false);
    for (auto i : text)
        count[i - 'a']++;
    for (auto i : text)
    {
        count[i - 'a']--;

        if (used[i - 'a'] == false)
        {

            while (str.length() > 0 && i < str.back() && count[str.back() - 'a'] > 0)
            {
                used[str.back() - 'a'] = false;
                str.pop_back();
            }

            str.push_back(i);
            used[i - 'a'] = true;
        }
    }
    return str;
}

int main()
{
 //   int t;
  //  for(int i=0;i<t;i++){
    string given;
    cin >> given;
    cout << smallestSubsequence(given);
  //  }
    return 0;
}