Palindrome Partitioning ll
==========================

Problem statement
-----------------

You are given a string _**'str'**_ of length _**'n'**_.

  

Find the minimum number of partitions in the string so that no partition is empty and every partitioned substring is a palindrome.

  

**Example :**

    Input: 'str' = "aaccb"
    
    Output: 2
    
    Explanation: We can make a valid partition like aa | cc | b. 
    

Detailed explanation ( Input/output format, Notes, Images )

**Input format :**

    The first line contains the string 'str', the string to be partitioned.
    

  

**Output Format :**

    Print the minimum number of cuts to be done so that each partitioned substring is a palindrome.
    

  

**Note :**

    You do not need to print anything; it has already been taken care of. Just implement the given function.
    

**Sample Input 1 :**

    aaccb
    

  

**Sample Output 1 :**

    2
    

  

**Explanation of sample input 1 :**

    We can make a valid partition like aa | cc | b.
    

  

**Sample Input 2 :**

    ababa
    

  

**Sample Output 2 :**

    0
    

  

**Explanation of sample input 2 :**

    The string is already a palindrome, so we need not make any partition.
    

  

**Sample Input 3:**

    aababa
    

  

**Sample Output 3:**

    1
    

  

**Expected time complexity :**

    You can submit a solution of time complexity O(n ^ 3) but also try to write the solution having complexity O(n ^ 2).
    

  

**Constraints :**

    1 <= 'n' <= 100
    
    Time limit: 1 second
