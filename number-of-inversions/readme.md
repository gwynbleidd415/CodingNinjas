Number of Inversions
====================

Problem statement
-----------------

There is an integer array _**‘A’**_ of size _**‘N’**_.

  

Number of inversions in an array can be defined as the number of pairs of ‘i’, ‘j’ such that ‘i’ < ‘j’ and ‘A\[i\]’ > ‘A\[j\]’.

You must return the number of inversions in the array.

  

**For example,**

    Input:
    A = [5, 3, 2, 1, 4], N = 5
    Output:
    7
    Explanation: 
    The pairs satisfying the condition for inversion are (1, 2), (1, 3), (1, 4), (1, 5), (2, 3), (2, 4), and (3, 4). 
    The number of inversions in the array is 7.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input Format:**

    The first line contains an integer, ‘N’.
    The second line has ‘N’ integers denoting the array ‘A’.
    

**Output Format:-**

    You must return the number of inversions in the array.
    

**Note:-**

    You don’t need to print anything. Just implement the given function.
    

**Sample Input 1:**

    4
    4 3 2 1
    

**Sample Output 1:**

    6
    

**Explanation Of Sample Input 1:**

    Input:
    A = [4, 3, 2, 1], N = 4
    Output:
    6
    Explanation: 
    The pairs satisfying the condition for inversion are (1, 2), (1, 3), (1, 4), (2, 3), (2, 4), and (3, 4).    
    The number of inversions in the array is 6.
    

**Sample Input 2:**

    5
    1 20 6 4 5
    

**Sample Output 2:**

    5
    

**Constraints:**

    1 <= N <= 10^5
    1 <= A[i] <= 10^9
    Time Limit: 1 sec
