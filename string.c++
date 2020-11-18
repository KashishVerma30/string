
 #include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
// Function to find all substrings of string X that are
// permutations of string Y
void findAllAnagrams(string X, string Y)
{
    int m, n;
    if ((m = Y.length()) > (n = X.length()))
        return;
 
    for (int i = 0; i <= n - m; i++)
    {
        if (is_permutation(X.begin() + i, X.begin() + i + m, Y.begin()))
        {
            cout << "Anagram " << X.substr(i, m) <<
                    " present at index " << i << '\n';
        }
    }
}
 
// main function
int main()
{
    string X = "XYYZXZYZXXYZ";
    string Y = "XYZ";
 
    findAllAnagrams(X, Y);
 
    return 0;
}
