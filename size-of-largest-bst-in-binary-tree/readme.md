Size of Largest BST in Binary Tree
==================================

Problem statement
-----------------

You have been given a Binary Tree of _**'N'**_ nodes, where the nodes have integer values. Your task is to return the size of the largest subtree of the binary tree which is also a BST.

  

A binary search tree (BST) is a binary tree data structure which has the following properties.

    • The left subtree of a node contains only nodes with data less than the node’s data.
    • The right subtree of a node contains only nodes with data greater than the node’s data.
    • Both the left and right subtrees must also be binary search trees.
    

  

**Example:**

    Given binary tree:
    

![Explanation](https://files.codingninjas.in/image2-5995.png)

    In the given binary tree, subtree rooted at 2 is a BST and its size is 3.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input Format**

    The first line contains elements in the level order form. The input consists of values of nodes separated by a single space in a single line.
    
    In case a node is null, we take -1 on its place.
    

**Example :**

    The input for the tree is depicted in the below image: 
    

![BT - 2](https://files.codingninjas.in/tt2-6640.jpg)

    1 3 8 5 2 7 -1 -1 -1 -1 -1 -1 -1
    

**Explanation :**

    Level 1 :
    The root node of the tree is 1
    
    Level 2 :
    Left child of 1 = 3
    Right child of 1 = 8
    
    Level 3 :
    Left child of 3 = 5
    Right child of 3 = 2
    Left child of 8 =7
    Right child of 8 =  null (-1)
    
    
    Level 4 :
    Left child of 5 = null (-1)
    Right child of 5 = null (-1)
    Left child of 2 = null (-1)
    Right child of 2 = null (-1)
    Left child of 7 = null (-1)
    Right child of 7 = null (-1)
    
    1
    3 8
    5 2 7 -1
    -1 -1 -1 -1 -1 -1
    

**Note :**

    1. The first not-null node(of the previous level) is treated as the parent of the first two nodes of the current level. The second not-null node (of the previous level) is treated as the parent node for the next two nodes of the current level and so on.
    
    2. The input ends when all nodes at the last level are null(-1).
    
    3. The above format was just to provide clarity on how the input is formed for a given tree. The sequence will be put together in a single line separated by a single space. Hence, for the above-depicted tree, the input will be given as:
    
    1 3 8 5 2 7 -1 -1 -1 -1 -1 -1 -1
    

**Output Format :**

    The output contains an integer denoting the largest size of the subtree of the binary tree which is also a BST.
    

**Note:**

    You do not need to print anything; it has already been taken care of. Just implement the given function.
    

**Sample Input 1 :**

    2 1 3 -1 -1 -1 -1
    

**Sample Output 1:**

    3
    

#### Explanation for Sample 1:

    In the given binary tree, subtree rooted at 2 is a BST and its size is 3.
    

![Explanation](https://files.codingninjas.in/image1-5996.png)

**Sample Input 2 :**

    50 -1 20 -1 30 -1 40 -1 50 -1 -1
    

**Sample Output 2:**

    4
    

**Constraints :**

    1 <= 'N' <= 10^5
    0 <= 'data' <= 10^5     
    
    where 'N' is the number of nodes and 'data' denotes the node value of the binary tree nodes.
    
    Time limit: 1 sec
