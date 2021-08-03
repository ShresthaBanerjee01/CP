/*
Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example


Return '12:01:00'.


Return '00:01:00'.

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

string s: a time in  hour format
Returns

string: the time in  hour format
Input Format

A single string  that represents a time in -hour clock format (i.e.:  or ).

Constraints

All input times are valid
Sample Input 0

07:05:45PM
Sample Output 0

19:05:45


CODE***********************************************************************************************


*/


#include <bits/stdc++.h>
#include <sstream>
#include <iomanip>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int h , m , so;
    char ch;
    string st;
    stringstream ss(s);
    ss >> h >> ch >> m >> ch >> so >> st;
    if(st=="AM" && h>=12)
    {
        h = h-12;
    }
    else if(st=="PM" && h<12)
    {
        h = h + 12;
    }
    ss.str("");
    ss.clear();
    ss << fixed << setfill('0') << setw(2) << h << ch <<fixed << setfill('0') << setw(2) << m << ch << fixed << setfill('0') << setw(2) << so;
    return ss.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

















