Subset Sum
==========

Problem statement
-----------------

You are given an array _**'nums'**_ of _**‘n’**_ integers.

  

Return all subset sums of 'nums' in a non-decreasing order.

  

**Note:**

    Here subset sum means sum of all elements of a subset of 'nums'. A subset of 'nums' is an array formed by removing some (possibly zero or all) elements of 'nums'.
    

  

**For example**

    Input: 'nums' = [1,2]
    
    Output: 0 1 2 3
    
    Explanation:
    Following are the subset sums:
    0 (by considering empty subset)
    1 
    2
    1+2 = 3
    So, subset sum are [0,1,2,3].
    

Detailed explanation ( Input/output format, Notes, Images )

**Input Format :**

    The first line of input contains a single integer ‘n’, denoting the size of the array 'nums'.
    
    The second line of input contains ‘n’ space-separated integers denoting elements of the array 'nums'.
    

**Output Format :**

    Return the sum of all the subsets of 'nums' in non-decreasing order.
    

**Note :**

    You do not need to print anything, it has already been taken care of. Just implement the given function.
    

**Sample Input 1 :**

    3
    1 2 3
    

**Sample output 1 :**

    0 1 2 3 3 4 5 6
    

**Explanation For Sample Output 1:**

    For the first test case,
    Following are the subset sums:
    0 (by considering empty subset)
    1
    2
    1+2 = 3
    3
    1+3 = 4
    2+3 = 5
    1+2+3 = 6
    So, subset-sums are [0,1,2,3,3,4,5,6]
    

**Sample Input 2 :**

    2 
    4 5
    

**Sample output 2 :**

    0 4 5 9
    

**Expected Time Complexity:**

    Try to do this in O(n*2^n). 
    

**Constraints:**

    1 <= n <= 15
    0 <= nums[i] <= 5000
    
    Time limit: 1 sec
