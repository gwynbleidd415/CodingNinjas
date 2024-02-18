Children Sum Property
=====================

Problem statement
-----------------

Return true if all non-leaf nodes in a given binary tree have a value that is equal to the sum of their child nodes, otherwise return false..

  

**For Example:**

![add-image](https://files.codingninjas.in/untitled-8-27832.jpg)

    Output: true 
    Explanation: Node 2 and 3 are children of Node 1 and (3+1)=4.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input format:**

    The first line of each test case contains an integer ‘N’ i.e. the number of nodes in a tree.
    The second line contains an array of integers of length (2*N +1), denoting the level order traversal of binary trees separated by a single space. Refer the image for input format. 
    

![add-image](https://files.codingninjas.in/untitled-16-27868.jpg)

**Output Format:**

    The output contains a string “true” or “false”.
    

**Note:-**

    You don’t need to print anything. Just implement the given function.
    

**Sample Input 1:**

    4
    5 3 2 3 -1 -1 -1 -1 -1
    

**Sample Output 1:**

    true
    

**Explanation Of Sample Input 1:**

![add-image](https://files.codingninjas.in/untitled-9-27834.jpg)

    Node 1: The sum of its child nodes is 3 + 2 = 5, which is equal to its value.
    Node 2: The sum of its child nodes is 3, which is equal to its value.
    Node 3: It is a leaf node with no child nodes, so the condition is satisfied.
    Node 4: It is a leaf node with no child nodes, so the condition is satisfied.
    

**Sample Input 2:**

    6
    7 3 4 3 -1 2 3 -1 -1 -1 -1 -1 -1
    

**Sample Output 2:**

    false
    

**Explanation Of Sample Input 2:**

![add-image](https://files.codingninjas.in/untitled-10-27836.jpg)

    Node 1: The sum of its child nodes is 3 + 4 = 7, which is equal to its value.
    Node 2: The sum of its child nodes is 3, which is equal to its value.
    Node 3: The sum of its child nodes is 2 + 3 = 5, which is not equal to its value 4, so the condition is not satisfied. Hence the answer is false.
    

**Constraints:**

    1 <= N <= 10^3
    1 <= data <= 10^5
    Time Limit: 1 sec
