#include <iostream>
#include <string>
using namespace std;
bool cpal(string clean, int i)
{
    bool k = true;
    int p = clean.length();
    if (i == (p / 2))
    {
        return true;
    }
    if (clean[i] != clean[p - 1 - i])
    {
        return false;
    }

    return cpal(clean, i + 1);
}

int main()
{
    string s;
    getline(cin, s);

    string clean = ""; // empty string to store cleaned result

    // Go through each character in the input
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        // Check if c is a letter or number
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {

            // Convert uppercase letters to lowercase by adding 32
            if (c >= 'A' && c <= 'Z')
            {
                c = c + 32; // 'A' (65) + 32 = 'a' (97)
            }

            clean += c; // add cleaned character to string
        }
        // If it’s not letter/number, skip it
    }

    cout << "Cleaned string: " << clean << endl;
    if (cpal(clean, 0) == true)
    {
        cout << "it is palindrome" << endl;
    }
    else
    {
        cout << "not a palindrome";
    }
}