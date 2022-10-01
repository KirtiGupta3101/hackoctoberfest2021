//Find the safe Position,Lucky alive person in a circle,Last Surviving bot/human in a round table elimination etc.



// Recursive approach to implement problems based on Josephus problems
#include <bits/stdc++.h>
using namespace std;
int safePlace(int n, int k)
{
    if (n == 1)
        return 1;
    else
        // The position returned by safePlace(n - 1, k)
        // is adjusted because the recursive call
        // safePlace(n - 1, k) considers the
        // original position k % n + 1 as position 1
        return (safePlace(n - 1, k) + k - 1) % n + 1;
}
 
// Driver code
int main()
{   
    ios_base::sync_with_stdio(false); //This disables the synchronization between the C and C++ standard streams. 
    cin.tie(0);//Tied streams ensure that one stream is flushed automatically before each I/O operation on the other stream.
    cout.tie(0);
    int n = 10; //an example
    int k = 3;
    cout << "The chosen place is " << safePlace(n, k);
    return 0;
}
//Time Complexity: O(N)
//Auxiliary Space: O(N) the space used in recursion call stack