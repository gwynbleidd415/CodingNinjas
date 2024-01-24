Distinct Islands
================

Problem statement
-----------------

You are given a two-dimensional array/list of integers consisting of 0s and 1s. In the list, 1 represents land and 0 represents water.

The task is to find the number of distinct islands where a group of connected 1s(horizontally or vertically) forms an island.

**Note:**

    Two islands are considered to be the same if and only if one island is equal to another(not rotated or reflected) i.e if we can translate one island on another without rotating or reflecting then it would be considered as the same islands. 
    

**For example:**

    1 1 0
    0 0 1
    0 0 1
    
    In this example, we have two islands and they would be considered as distinct islands as we can not translate them on one another even if they have the same no of 1's.
    

**For example :**

    1 1 0 0 0 
    1 1 0 0 0
    0 0 0 1 1
    0 0 0 1 1
    
    In this example, we have two islands and they are the same as we can translate one island onto another island, so our answer should be 1.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input format :**

    The first two lines contain two integer values, 'N' and 'M'. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.
    
    From the third line onwards, the next 'N' lines or rows represent the i-th row values.
    
    Each of the i-th rows contains 'M' column values separated by a single space.
    

**Output format:**

    The only line of output contains the total number of distinct Islands.
    

**Constraints**

     0 <= N <= 1000
     0 <= M <= 1000
     0 <= elements of array <= 1
    
    Time Limit: 1 sec
    

**Sample Input 1:**

     4
     5
     1 1 0 1 1
     1 0 0 0 0
     0 0 0 0 1
     1 1 0 1 1
    

**Sample Output 1:**

     3
    

**Explanation For Sample Input 1:**

    Distinct islands in the example above are: 
    
    1st -> at the top left corner; 
    
    2nd -> at the top right corner  
    
    3rd -> at the bottom right corner. 
    
    We ignore the island at the bottom left corner since it is identical to the top right corner.
    

**Sample Input 2:**

    3
    2
    1 0
    0 1
    1 1
    

**Sample Output 2:**

    2
