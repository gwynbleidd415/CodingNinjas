Tree Traversals
===============

Problem statement
-----------------

You have been given a Binary Tree of _**'N'**_

nodes, where the nodes have integer values.

  

Your task is to return the ln-Order, Pre-Order, and Post-Order traversals of the given binary tree.

  

**For example :**

    For the given binary tree:
    

![Binary - Tree1](https://files.codingninjas.in/tt1-6639.jpg)

    The Inorder traversal will be [5, 3, 2, 1, 7, 4, 6].
    The Preorder traversal will be [1, 3, 5, 2, 4, 7, 6].
    The Postorder traversal will be [5, 2, 3, 7, 6, 4, 1].
    

Detailed explanation ( Input/output format, Notes, Images )

**Input Format :**

    The first line contains elements of the tree in the level order form. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place.
    

**Example :**

    The input for the tree is depicted in the below image: 
    

![BT - 2](https://files.codingninjas.in/tt2-6640.jpg)

    1 3 8 5 2 7 -1 -1 -1 -1 -1 -1 -1
    

Explanation :

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

    The first line of output contains 'N' single space-separated integers denoting the node's values in In-Order traversal.
    
    The second line of output contains 'N' single space-separated integers denoting the node's values in Pre-Order traversal.
    
    The third line of output contains 'N' single space-separated integers denoting the node's values in Post-Order traversal.
    

**Note :**

    You don't need to print anything, it has already been taken care of. Just implement the given function.
    

**Sample Input 1 :**

    1 2 3 -1 -1 -1  6 -1 -1
    

**Sample Output 1 :**

    2 1 3 6 
    1 2 3 6 
    2 6 3 1
    

**Explanation of Sample Output 1 :**

     The given binary tree is shown below:
    

![BT - 3](https://files.codingninjas.in/tt3-6641.jpg)

    Inorder traversal of given tree = [2, 1, 3, 6]
    Preorder traversal of given tree = [1, 2, 3, 6]
    Postorder traversal of given tree = [2, 6, 3, 1]
    

**Sample Input 2 :**

    1 2 4 5 3 -1 -1 -1 -1 -1 -1
    

**Sample Output 2 :**

    5 2 3 1 4 
    1 2 5 3 4 
    5 3 2 4 1
    

**Explanation of Sample Output 2 :**

    The given binary tree is shown below:
    

![BT - 5](https://files.codingninjas.in/tt5-6643.jpg)

    Inorder traversal of given tree = [5, 2, 3, 1, 4]
    Preorder traversal of given tree = [1, 2, 5, 3, 4]
    Postorder traversal of given tree = [5, 3, 2, 4, 1]
    

**Constraints :**

    1 <= 'N' <= 10^5
    0 <= 'data' <= 10^5     
    
    where 'N' is the number of nodes and 'data' denotes the node value of the binary tree nodes.
    
    Time limit: 1 sec
