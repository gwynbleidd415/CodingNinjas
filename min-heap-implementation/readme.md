Min Heap Implementation
=======================

Problem statement
-----------------

Implement the Min Heap data structure. For information about Heap [click here](https://www.codingninjas.com/codestudio/library/binary-heap).

    Min heap is a tree data structure where the root element is the smallest of all the elements in the heap. Also, the children of every node are smaller than or equal to the root node. 
    
    The insertion and removal of elements from the heap take log('N'), where 'N' is the number of nodes in the tree. 
    

Implement the “minHeap” class. You will be given the following types of queries:-

    0 extractMinElement(): Remove the minimum element present in the heap, and return it.
    
    1 deleteElement( i ): Delete the element present at the 'i' th index.
    
    2 insert( key ): Insert the value 'key' in the heap.
    
    For queries of types 0 and 1, at least one element should be in the heap.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input Format :**

    The first line will contain a single integer 'N', the number of queries.
    
    Then each of the following ‘N’ lines contains queries of the following type:-
    0 
    1 X
    2 X
    
    Where 'X' is some value and 0, 1, and 2 are the respective values as shown in the queries above.
    

**Output format :**

    Print the output of each query if there is some output.
    

**Note :**

    The input will contain at least one operation of type 1.
    
    You don't need to print anything. It has already been taken care of. Just implement the given function.
    

**Sample Input 1 :**

    3
    2 2
    2 1
    0
    

**Sample Output 1 :**

    1
    

**Explanation Of Sample Input 1 :**

    Insert 2 in the heap, and currently, 2 is the smallest element in the heap.
    
    Insert 1 in the heap and now the smallest element is 1.
    
    Return the smallest element, which is 1.
    

**Sample Input 2 :**

    5
    2 5
    2 43
    2 15
    1 2
    0
    

**Sample Output 2 :**

    15
    

**Explanation Of Sample Input 2 :**

    Insert 5 in the heap.
    Insert 43 in the heap.
    Insert 15 in the heap.
    
    Remove element at index 2 i.e. X from the heap.
    
    Return the smallest element, which is 15.
    

**Constraints :**

    1 <= N <= 10^5
    1 <= X <= 50
    
    Time Limit: 1 sec
