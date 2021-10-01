#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) 
{
    int h[26];
    for(int i=0;i<26;i++)
    {
        h[i]=0;
    }
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            h[s[i]-97]++;
        }
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(h[i]>=1)
        {
            c++;
        }
    }
    if(c==26)
    {
        return "pangram";
    }
    return "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
