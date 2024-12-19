#include <iostream>

using namespace std;

int main(void)
{
    int num, d, rev = 0;
    cout << "Enter a number: ";     //cout is pre-defined object
    cin >> num;
    while (num > 0)
    {
        d = num % 10;
        num = num / 10;
        rev = rev * 10 + d;
    }
    cout << "Reverse: " << rev << endl;
    return 0;
}
