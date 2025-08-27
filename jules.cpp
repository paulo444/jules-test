#include <iostream>
#include <string>
#include <algorithm>

std::string toBase26(int n) {
    std::string res = "";
    n++;
    while (n > 0) {
        n--;
        res += (char)('A' + n % 26);
        n /= 26;
    }
    std::reverse(res.begin(), res.end());
    return res;
}

int main()
{
    for (int i = 0; i < 350; ++i) {
        std::cout << toBase26(i) << " Hello Jules" << std::endl;
    }

    return 0;
}
