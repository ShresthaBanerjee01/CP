/*

Input

The first line of the input gives the number of test cases, T. T lines follow. 
Each line describes a test case with two integers N and C, 
the size of the wanted list and the desired cost, respectively.

Output

For each test case, if there is no list of size N such that applying Reversort to it costs exactly C,
output one line containing Case #x: IMPOSSIBLE, where x is the test case number (starting from 1). 
Otherwise, output one line containing Case #x: y1 y2 ... yN, where x is the test case number (starting from 1) 
and each yi is a distinct integer between 1 and N, representing the i-th element of one such possible list.


Findings :

If the length od the array in " n ".
minimum cost  = (n-1)
maximum cost  = ((n*(n+1))/2)-1
