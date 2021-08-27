#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int a, b, c , first=0, second=0 ,third=0;
    int arr[3];
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    
    third = first = second = INT_MIN;
    for(int i = 0; i < 3; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
 
        else if (arr[i] > third)
            third = arr[i];
    }
    cout << second ;
	return 0;
}
