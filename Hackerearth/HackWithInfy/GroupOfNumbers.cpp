#include <bits/stdc++.h>
using namespace std;
#define kmax 1001

template <typename K, typename V>
std::multimap<V, K> invertMap(std::map<K, V> const &map)
{
    std::multimap<V, K> multimap;

    for (auto const &pair : map)
    {
        multimap.insert(std::make_pair(pair.second, pair.first));
    }

    return multimap;
}

int main()
{
    int n;
    cin >> n;
    int arr[kmax];
    map<int, int> repeat;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        repeat[arr[i]]++;
    }
    std::multimap<int, int> multimap = invertMap(repeat);

    vector<int> number;
    for (auto const &pair : multimap)
    {
        number.push_back(pair.second);
    }
    reverse(number.begin(), number.end());
    for (auto print : number)
    {
        cout << print << " ";
    }
    cout << endl;
    return 0;
}