Find Nth Root Of M
==================

Problem statement
-----------------

You are given two positive integers _**'n'**_ and _**'m'**_. You have to return the 'nth' root of 'm', i.e. 'm(1/n)'. If the 'nth root is not an integer, return -1.

  

**Note:**

    'nth' root of an integer 'm' is a number, which, when raised to the power 'n', gives 'm' as a result.
    

  

**Example:**

    Input: ‘n’ = 3, ‘m’ = 27
    
    Output: 3
    
    Explanation: 
    3rd Root of 27 is 3, as (3)^3 equals 27.
    

  

Detailed explanation ( Input/output format, Notes, Images )

**Input Format:**

    The first line of the input consists of two space-separated integers, n and m.
    

  

**Output Format:**

    Return an integer that denotes the nth root of m in a separate line. If such an integer doesn't exist return -1.
    

  

**Note:**

    You don't have to print anything. It has already been taken care of. Just Implement the given function.
    

**Sample Input 1:**

    3 27
    

  

**Sample Output 1:**

    3
    

  

**Explanation For Sample Input 1:**

    3rd Root of 27 is 3, as (3)^3 equals 27.
    

  

**Sample Input 2:**

    4 69
    

  

**Sample Output 2:**

    -1
    

  

**Explanation For Sample Input 2:**

    4th Root of 69 is not an integer, hence -1.
    

  

**Expected Time Complexity:**

    Try to do this in O(log(n+m)).
    

  

**Constraints:**

    1 <= n <= 30
    1 <= m <= 10^9
    
    Time Limit: 1 sec.
