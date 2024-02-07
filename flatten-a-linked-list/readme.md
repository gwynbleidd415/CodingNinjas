Flatten A Linked List
=====================

Problem statement
-----------------

You are given a linked list containing **_'n'_** **_'head'_** nodes, where every node in the linked list contains two pointers:

  

(1) **_‘next’_** which points to the next node in the list

(2) **_‘child’_** pointer to a linked list where the current node is the head.

  

Each of these child linked lists is in sorted order and connected by 'child' pointer.

  

Your task is to flatten this linked such that all nodes appear in a single layer or level in a **_'sorted order'_**__.__

__**Example:**

    Input: Given linked list is:
    

![](https://files.codingninjas.in/image1-7731.png)

    Output:
    1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → 9 → 12 → 20 → null.
    
    
    Explanation:
    The returned linked list should be in a sorted order. All the elements in this returned linked list are connected by 'child' pointers and 'next' pointers point to null.__

Detailed explanation ( Input/output format, Notes, Images )

**Input format :**

    The first line of the input contains a single integer ‘n’ which represents the number of head nodes in the linked list.
    
    The next '2n' lines represent 'n' linked lists connected by next pointer at the head. Description of each of these linked lists is as follows:
    
    The first line contains a single integer 'k', number of nodes in the current linked list.
    
    The next line contains 'k' spaced integers, representing elements of the linked list.
    

  

**Output format :**

    Return the head node of the final linked list.
    

  

**Note:**

    You don’t have to print anything, it has already been taken care of. Just implement the given function. The flattened list will be printed using the child pointer.
    

  

**Sample Input 1 :**

    4
    3
    1 2 3
    3
    8 10 15
    2
    18 22
    1
    29
    

  

**Sample Output 1 :**

    1 2 3 8 10 15 18 22 29
    

  

**Explanation For Sample Input 1:**

    The given linked list is 
    

![](https://files.codingninjas.in/image2-7732.png)

    Therefore after flattening the list will become-
    1 -> 2 -> 3 -> 8 -> 10 -> 15 -> 18 -> 22 -> 29 ->null
    

  

**Sample Input 2 :**

    5
    2
    4 6
    2
    5 71
    3
    7 8 9
    3 
    11 12 19
    3
    14 15 17
    

  

**Sample Output 2 :**

    4 5 6 7 8 9 11 12 14 15 17 19 71
    

  

**Expected Time Complexity:**

    Try solving this in O(n*n*k), where ‘n’ denotes the number of head nodes and ‘k’ is the average number of child nodes in all 'n' sub-lists.     
    

  

**Expected Space Complexity:**

    Try solving this without using any extra space.   
    

  

**Constraints:**

    1 <= n <= 100
    1 <= k <= 20
    1 <= Node.data <= 10^9
    
    Time Limit: 1 sec
