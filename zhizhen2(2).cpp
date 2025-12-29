#include <iostream>
#include<cctype>
using namespace std;

int parseHex(const char* const hexString) {
    if (hexString == nullptr) return 0;

    const char* ptr = hexString;

    if (ptr[0] == '0' && (ptr[1] == 'x' || ptr[1] == 'X')) {
        ptr += 2;
    }

    int result = 0;

    while (*ptr != '\0') {
        char c = *ptr;
        int digit;

        if (c >= '0' && c <= '9') {
            digit = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        }
        else {
            return 0;
        }

        result = result * 16 + digit;
        ptr++;
    }

    return result;
}
int main()
{
    cout<<parseHex("A5")<<endl;
}