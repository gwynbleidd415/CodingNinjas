Rat In a Maze
=============

Problem statement
-----------------

You are given a _**N\*N**_ maze with a rat placed at _**'mat\[0\]\[0\]'**_. Find all paths that rat can follow to reach its destination i.e. mat\[N-1\]\[N-1\]. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right).

  

In the given maze, each cell can have a value of either 0 or 1. Cells with a value of 0 are considered blocked, which means the rat cannot enter or traverse through them. On the other hand, cells with a value of 1 are open, indicating that the rat is allowed to enter and move through those cells.

  

**Example:**

    mat:{{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
    
    All possible paths are:
    DDRDRR (in red)
    DRDDRR (in green)
    

![add-image](https://files.codingninjas.in/untitled-21-28443.jpg)

Detailed explanation ( Input/output format, Notes, Images )

**Input Format**

    The first line of input contains an integer 'N' denoting the rows and columns of a matrix
    The next N lines of input contain N space-separated integers representing the type of the cell.
    

**Output Format :**

    The output contains all the path in form of string. String consist of 'L' which means left, 'R' which means right, 'U' which means up and 'D' which means down. 
    If there is no path, -1 is printed.
    

**Note:-**

    You don’t need to print anything. Just implement the given function.
    

**Sample Input 1 :**

    3
    1 1 1
    1 0 1
    1 1 1
    

**Sample Output 1 :**

    DDRR
    RRDD
    

**Explanation of Sample Input 1:**

    Only 2 path is possible.
    

![add-image](https://files.codingninjas.in/untitled-20-28441.jpg)

**Sample Input 2 :**

    2
    1 1
    1 0
    

**Sample Output 2 :**

    -1
    

**Explanation of Sample Input 2:**

    No path exists.
    

**Constraints:**

    2 <= N <= 5
    0 <= mati][j] <=1
    
    Time Limit: 1sec
