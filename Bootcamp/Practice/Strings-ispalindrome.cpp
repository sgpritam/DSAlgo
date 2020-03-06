#include <string>
#include <algorithm>
#include <iostream>
int main()
{
    std::string s;
    std::cin >> s;
    if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
        std::cout << "true\n";
    else
        std::cout << "false\n";
}
