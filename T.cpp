#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int ucount=0,lcount=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
           lcount++;
        }

        else
        {
            ucount++;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (ucount > lcount)
        {
            cout <<(char)toupper(s[i]);
        }
        else{
            cout<<(char)tolower(s[i]);
        }
    }

    return 0;
}