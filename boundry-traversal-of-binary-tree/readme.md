Boundary Traversal of Binary Tree
=================================

Problem statement
-----------------

You are given a binary tree having _**'n'**_ nodes.

  

The boundary nodes of a binary tree include the nodes from the left and right boundaries and the leaf nodes, each node considered once.

  

Figure out the boundary nodes of this binary tree in an Anti-Clockwise direction starting from the root node.

  

**Example :**

    Input: Consider the binary tree A as shown in the figure:
    

![alt text](https://files.codingninjas.in/boundarytraversal-5149.png)

    Output: [10, 5, 3, 7, 18, 25, 20]
    
    Explanation: As shown in the figure
    
    The nodes on the left boundary are [10, 5, 3]
    
    The nodes on the right boundary are [10, 20, 25]
    
    The leaf nodes are [3, 7, 18, 25].
    
    Please note that nodes 3 and 25 appear in two places but are considered once.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input Format:**

    The only line contains elements in the level order form. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place.
    
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
    
    The sequence will be put together in a single line separated by a single space. Hence, for the above-depicted tree, the input will be given as:
    
    1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1
    

  

**Output Format:**

    Print the boundary nodes of the given binary tree separated by single spaces.
    

  

**Note :**

    You do not need to print anything; it has already been taken care of. Just implement the given function.
    

**Sample Input 1:**

    10 5 20 3 8 18 25 -1 -1 7 -1 -1 -1 -1 -1 -1 -1
    

**Sample Output 1:**

    10 5 3 7 18 25 20
    

**Explanation of Sample Input 1:**

    The nodes on the left boundary are [10, 5, 3]
    
    The nodes on the right boundary are [10, 20, 25]
    
    The leaf nodes are [3, 7, 18, 25].
    
    Please note that nodes 3 and 25 appear in two places but are considered once.
    

**Sample Input 2:**

    100 50 150 25 75 140 200 -1 30 70 80 -1 -1 -1 -1 -1 35 -1 -1 -1 -1 -1 -1
    

**Sample Output 2:**

    100 50 25 30 35 70 80 140 200 150
    

**Constraints:**

    1 <= n <= 10000
    
    Where 'n' is the total number of nodes in the binary tree.
    
    Time Limit: 1 sec
