Missing And Repeating Numbers
=============================

Problem statement
-----------------

You are given an array of _**‘N’** _integers where each integer value is between ‘1’ and ‘N’.__

__Each integer appears exactly once except for _**‘‘P’**_, which appears exactly twice, and _**‘‘Q’**_, which is missing.____

___Your task is to find ‘P’ and ‘Q’ and return them respectively.

  

**Example:**

    Input: ‘N’ = 4
    ‘A’ = [1, 2, 3, 2]
    
    Output: {2, 4}
    
    Explanation: The integer appearing twice is ‘2’, and the integer missing is ‘4’._____

Detailed explanation ( Input/output format, Notes, Images )

**Input Format**

    The first line contains one integer, ‘N’, denoting the size of the array ‘A’.
    The following line contains ‘N’ integers, denoting the ‘A’.
    

**Output format:**

    Return the integers, ‘P’ & ‘Q’, where ‘P’ is the integer that appears exactly twice, and ‘Q’, is the integer that is missing. 
    

**Note:-**

    You don't need to print anything. Just implement the given function.
    

**Sample Input 1:**

    4
    1 2 3 2
    

**Sample Output 1:**

    2 4
    

**Explanation Of Sample Input 1:**

    Input: ‘N’ = 5
    ‘A’ = [1, 2, 3, 2]
    
    Output: {2, 4}
    
    Explanation: The integer appearing twice is ‘2’, and the integer missing is ‘4’.
    

**Sample Input 2:**

    3
    1 2 1
    

**Sample Output 2:**

    1 3
    

**Constraints:**

    2 <= N <= 10^5
    1 <= A[i] <= N
    
    Time Limit: 1-sec
