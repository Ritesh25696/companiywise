iven a text 'str' and a wildcard pattern 'pattern',your task is to complete the function wildcard that returns '1' if the  wildcard pattern is matched with text else returns '0'.The function takes two strings as arguments 'str' and 'pattern'.

The wildcard pattern can include the characters ‘?’ and ‘*’
‘?’ – matches any single character
‘*’ – Matches any sequence of characters (including the empty sequence)

For example,

Text = "baaabab",
Pattern = “*****ba*****ab", output : true
Pattern = "baaa?ab", output : true
Pattern = "ba*a?", output : true
Pattern = "a*ab", output : false 

Note: The matching should cover the entire text (not partial text).

Input
The first line of input will contain no of test cases T . Then T test cases follow . Each test case contains 2 lines. The first line of each test case represent a string pat denoting the pattern and the next line contains string str .

Output
Output will be 1 if the string follows the pattern else it will be 0.

Constraints:
1<=T<=50
1<=length of(str,pat) <=50

Example
Input
2
a*a
aa
a?a
aa

Output
1
0

**For More Examples Use Expected Output**

***************************************************************************************************************************************************************

int wildCard(string pattern,string str)
{
    int m = pattern.length();
    int n = str.length();
    
     if (m == 0)
        return (n == 0);
 
    bool lookup[n + 1][m + 1];
 
    memset(lookup, false, sizeof(lookup));
 
    lookup[0][0] = true;
 
    for (int j = 1; j <= m; j++)
        if (pattern[j - 1] == '*')
            lookup[0][j] = lookup[0][j - 1];
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (pattern[j - 1] == '*')
                lookup[i][j] = lookup[i][j - 1] ||
                               lookup[i - 1][j];
 
            else if (pattern[j - 1] == '?' ||
                    str[i - 1] == pattern[j - 1])
                lookup[i][j] = lookup[i - 1][j - 1];
 
            else lookup[i][j] = false;
        }
    }
 
    return lookup[n][m];
}
