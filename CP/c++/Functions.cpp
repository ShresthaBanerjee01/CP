/*
Input Format

Input will contain four integers -  , one per line.

Output Format

Return the greatest of the four integers.
PS: I/O will be automatically handled.

Sample Input

3
4
6
5
Sample Output

6



CODE**************************************************************************

*/


#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d)
{
    if(b>a && b>c && b>d )
    {
        return b;
    }
    if(a>b && a>c && a>d )
    {
        return a;
    }
    if(c>a && c>b && c>d )
    {
        return c;
    }
    if(d>a && d>c && d>a )
    {
        return d;
    }
    return 0;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
