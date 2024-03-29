Power Set
=========

Problem statement
-----------------

You are given a sorted array of 'N' integers. You have to generate the power set for this array where each subset of this power set is individually sorted.

A set is a well-defined collection of distinct elements. Power set P(ARR) of a set 'ARR' is defined as a set of all possible subsets of 'ARR'.

You have to return the array of subsets. The elements in the subset should be sorted in ascending order. The order of subsets in the array does not matter. Hence there can be more than 1 possible solution for a given array.

**For example :**

    If we are given an array ARR=[1,2,3] then the power set P(ARR) of the set ARR is: [ [], [1], [2], [1,2], [3], [1,3], [2,3], [1,2,3] ]
    

**Note :**

    For every subset 'X' present in power set P(ARR) of set ARR, X must be sorted i.e. in the example above:
    P1(ARR) =  [ [], [1], [2], [1,2], [3], [1,3], [2,3], [1,2,3] ]
    P2(ARR) =  [ [], [1], [1,2,3], [2], [1,2], [3], [1,3], [2,3] ]
    P3(ARR) =  [ [], [1], [2], [1,2], [3], [1,3], [2,3], [2,3,1] ]
    P1(ARR) and P2(ARR) will be considered correct power sets but P3(ARR) will not be considered correct because there the last subset [2, 3, 1] is not sorted.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input Format :**

    The first line contains a number 'N' denoting the size of the array.
    The second line contains 'N' space-separated distinct integer denoting the elements of the array.
    

**Output format :**

     For each given 'N' print 2^N separate lines each denoting a subset.
     For each subset, print its element separated by space.
    

**Note :**

    You don’t have to print anything, it has already been taken care of. Just implement the given function.
    

**Constraints :**

    1 <= N <= 15
    1 <= ARR[i] <= 50    
    Time limit : 1 second
    

**Sample input 1 :**

    3
    1 2 3    
    

**Sample output 1 :**

    1
    2
    3
    1 2
    1 3
    2 3
    
    1 2 3 
    

**Explanation of sample input 1 :**

    The power set P(ARR) of set ARR = [1, 2, 3] is [ [], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3] ].
    

**Sample input 2 :**

    3
    5 7 8    
    

**Sample output 2 :**

    8
    7
    
    5
    5 8
    5 7
    5 7 8
