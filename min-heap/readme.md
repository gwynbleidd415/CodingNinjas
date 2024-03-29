Min Heap
========

Problem statement
-----------------

Implement the Min Heap data structure. For information about Heap [click here](https://www.codingninjas.com/codestudio/library/binary-heap).

You will be given 2 types of queries:-

    0 X
    Insert X in the heap.
    
    1
    Print the minimum element from the heap and remove it.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input Format :**

    The first line will contain the integer 'T', denoting the number of test cases.
    
    For each test case, the first line will contain a single integer 'N', the number of queries.
    
    Then, each of the next ‘N’ lines contains two types of query either 0 ‘X’ or 1.
    

**Output format :**

    For each test case, output the answer for query of type 1.
    

**Note :**

    You don't need to print anything. It has already been taken care of. Just implement the given function.
    

**Constraints :**

    1 <= T <= 5
    1 <= N <= 10^5
    1 <= X <= 50
    
    Time Limit: 1 sec
    

**Sample Input 1 :**

    2
    3
    0 2
    0 1
    1
    2
    0 1
    1
    

**Sample Output 1 :**

    1
    1
    

**Explanation Of Sample Input 1 :**

    For the first test case:-
    Insert 2 in the heap and currently, 2 is the smallest element in the heap.
    Insert 1 in the heap and now the smallest element is 1.
    Return and remove the smallest element which is 1.
    
    For the second test case:-
    Insert 1 in the heap and currently, 1 is the smallest element in the heap.
    Return the smallest element from the heap which is 1 and remove it.
    

**Sample Input 2 :**

    2
    5
    0 5
    1
    0 43
    0 15
    0 5
    2
    0 4
    1
    

**Sample Output 2 :**

    5
    4
