#include<iostream>
using namespace std;
int main()
{
    char lowercaseLetter;

    cout << " Enter a lowercase letter : ";
    cin >> lowercaseLetter;

    char uppercaseLetter = static_cast <char> ('A' + (lowercaseLetter - 'a'));

    cout << " The corresponding uppercase letter is " << uppercaseLetter << endl;

    return 0;
}
