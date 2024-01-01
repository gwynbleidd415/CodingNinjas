Aggressive Cows
===============

Moderate

![](https://files.codingninjas.in/yellow-spark-22969.svg)

80/80

Average time to solve is 30m

[![profile](https://lh4.googleusercontent.com/-Fq4O0_6_JQY/AAAAAAAAAAI/AAAAAAAAAAA/ACHi3rdW32GmcLOpLF_p_xVI41mMy7Vtvg/s96-c/photo.jpg)](/studio/profile/d04967a1-c368-4064-98db-dcab53123432)

Contributed by

Pankaj Sharma

546 upvotes

![Adobe](https://files.codingninjas.in/87ff8e1f4c7028facc82a13858456dc7.webp)![Goldman Sachs](https://files.codingninjas.in/70b9c6bc6061e062f53cece30338e89e.webp)![Dunzo](https://files.codingninjas.in/c197be45962532ecf56f6e5c32459c4a.webp)

+10 more companies

Problem statement
-----------------

Send feedback

You are given an array **_'arr'_** consisting of **_'n'_** integers which denote the position of a stall.

  

You are also given an integer **_'k'_** which denotes the number of aggressive cows.

  

You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.

  

Print the maximum possible minimum distance.

  

**Example:**

    Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}
    
    Output: 2
    
    Explanation: The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input format :**

    The first line contains two integers ‘n’ and ‘k’ denoting the number of elements in the array and the number of aggressive cows.
    
    The second line contains ‘n’ single space-separated integers denoting the position of the stalls.
    

  

**Output format :**

    Return the largest possible minimum distance between cows.
    

  

**Note :**

    You do not need to print anything; it has already been handled.
    

**Sample Input 1 :**

    6 4
    0 3 4 7 10 9
    

  

**Sample Output 1 :**

    3
    

  

**Explanation to Sample Input 1 :**

    The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}. Here distance between cows are 3, 4 and 3 respectively.
    

  

**Sample Input 2 :**

    5 2
    4 2 1 3 6
    

  

**Sample Output 2 :**

    5
    

  

**Expected time complexity:**

    Can you solve this in O(n * log(n)) time complexity?
    

  

**Constraints :**

    2 <= 'n' <= 10 ^ 5
    2 <= 'k' <= n
    0 <= 'arr[i]' <= 10 ^ 9
    Time Limit: 1 sec.