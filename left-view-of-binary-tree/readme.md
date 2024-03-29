Left View Of a Binary Tree
==========================

Problem statement
-----------------

You have been given a binary tree of integers. You are supposed to find the left view of the binary tree. The left view of a binary tree is the set of all nodes that are visible when the binary tree is viewed from the left side.

**Example:**

![example](https://files.codingninjas.in/leftview_0-6345.png)

    The left view of the above binary tree is  {5, 7, 14, 25}.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input Format:**

    The first line contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.
    
    The only line of each test case contains elements in the level order form. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place. So -1 would not be a part of the tree nodes.
    
    For example, the input for the tree depicted in the below image will be:
    

![alt text](https://files.codingninjas.in/0000000000004189.png)

    1
    2 3
    4 -1 5 6
    -1 7 -1 -1 -1 -1
    -1 -1
    

Explanation :

    Level 1 :
    The root node of the tree is 1
    
    Level 2 :
    Left child of 1 = 2
    Right child of 1 = 3
    
    Level 3 :
    Left child of 2 = 4
    Right child of 2 = null (-1)
    Left child of 3 = 5
    Right child of 3 = 6
    
    Level 4 :
    Left child of 4 = null (-1)
    Right child of 4 = 7
    Left child of 5 = null (-1)
    Right child of 5 = null (-1)
    Left child of 6 = null (-1)
    Right child of 6 = null (-1)
    
    Level 5 :
    Left child of 7 = null (-1)
    Right child of 7 = null (-1)
    
    The first not-null node(of the previous level) is treated as the parent of the first two nodes of the current level. The second not-null node (of the previous level) is treated as the parent node for the next two nodes of the current level and so on.
    The input ends when all nodes at the last level are null(-1).
    

**Note :**

    The above format was just to provide clarity on how the input is formed for a given tree. 
    The sequence will be put together in a single line separated by a single space. Hence, for the above-depicted tree, the input will be given as:
    
    1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1
    

**Output Format:**

    For each test case, print the left view of the given binary tree separated by a single space.
    
    Print the output of each test case in a separate line.
    

**Note:**

    You don’t need to print anything; It has already been taken care of.
    

**Constraints:**

    1 <= T <= 100
    0 <= N <= 3000
    1 <= data <= 10^5 and data!=-1
    
    Where ‘T’ is the number of test cases, and ‘N’ is the total number of nodes in the binary tree, and “data” is the value of the binary tree node
    
    Time Limit: 1 sec
    

**Sample Input 1:**

    2
    3 4 -1 -1 -1 
    2 8 7 -1 5 -1 -1 1 -1 -1 -1
    

**Sample Output 1:**

    3 4
    2 8 5 1
    

**Explanation of Sample Input 1:**

    For the first test case, node 3 and node 4 are visible when the binary tree is viewed from the left.
    
    For the second test case, nodes 2, 8, 5, 1 are visible when the binary tree is viewed from the left.
    

**Sample Input 2:**

    2
    1 3 5 12 -1 8 -1 -1 -1 -1 -1 
    9 6 3 -1 -1 4 8 -1 -1 -1 -1 
    

**Sample Output 2:**

    1 3 12
    9 6 4
    

**Explanation of Sample Input 2:**

    For the first test case, nodes 1, 3, 12 are visible when the binary tree is viewed from the left.
    
    For the second test case, nodes 9, 6, 4 are visible when the binary tree is viewed from the left.
