#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'funnyString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string funnyString(string s) 
{
    string a = "f";
    a.assign(s);
    reverse(s.begin(),s.end());
    int b[s.size()-1] , c[s.size()-1];  
    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(a.begin(),a.end(),a.begin(),::tolower);
    int d=0;
    int e=0;
    for(int i=1;s[i]!='\0';i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            b[d]=abs(s[i]-s[i-1]);
            d++;
        }
    }
    for(int i=1;a[i]!='\0';i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            c[e]=abs(a[i]-a[i-1]);
            e++;
        }
    }
    int y=0;
    for(int i=0;i<d;i++)
    {
        if(c[i]==b[i])
        {
            y++;
        }
    }
    if(y==d)
    {
        return "Funny";
    }
    return "Not Funny";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
