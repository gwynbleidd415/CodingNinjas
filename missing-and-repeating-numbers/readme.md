Missing And Repeating Numbers
=============================

Moderate

![](https://files.codingninjas.in/yellow-spark-22969.svg)

80/80

Average time to solve is 30m

[![profile](https://lh3.googleusercontent.com/a/ALm5wu0J2RAvKi5D7SkKiVoxeMkuP5IFXSb6J3R55ynS=s96-c)](/studio/profile/19ddbe5e-db0c-4dab-a7a5-432b5be48361)

Contributed by

Prashant Thakur

75 upvotes

Problem statement
-----------------

Send feedback

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