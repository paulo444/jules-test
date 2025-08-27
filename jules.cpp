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
    for (int j = 0; j < 350; ++j) {
        std::cout << toBase26(j) << " Hello Jules" << std::endl;
    }

    return 0;
}
