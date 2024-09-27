#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
string decode_secret(string s)
{
    string result;
    ifstream inputFile(s);
    // Create an input file stream

    if (!inputFile)
    { // Check if the file was successfully opened
        cerr << "Error opening file." << endl;
        return "error loading file";
    }
    string line;
    map<int, string> mp;
    while (getline(inputFile, line))
    {
        // cout << line << endl; // Output each line to the console
        int i = 0;
        int ans = 0;
        while (line[i] != ' ')
        {
            ans = ans * 10 + line[i] - 48;
            i++;
        }
        string tmp;
        i++;
        while (line[i])
        {
            tmp += line[i];
            i++;
        }
        mp[ans] = tmp;
    }

    int i = 1, inc = 2;
    while (mp[i] != "")
    {
        result += mp[i];
        result += " ";
        i += inc;
        inc++;
    }

    inputFile.close();
    return result;
}
int main()
{
    cout << decode_secret("input_dataset.txt");
    return 0;
}
