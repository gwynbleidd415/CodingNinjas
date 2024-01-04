M-Coloring Problem
==================

Moderate

![](https://files.codingninjas.in/yellow-spark-22969.svg)

80/80

Average time to solve is 15m

[![profile](https://lh6.googleusercontent.com/-VSCxQGXuc_k/AAAAAAAAAAI/AAAAAAAAAAA/AMZuucmV2s7bAGI_HzA_K2C8vybo-vNo7A/s96-c/photo.jpg)](/studio/profile/69b9cecb-3360-4f81-8125-2ada19e5972c)

Contributed by

Nishant Chitkara

63 upvotes

![Bank Of America](https://files.codingninjas.in/asset_0000000000001184_1684814817_Bank%2520of%2520america.webp)![Infosys](https://files.codingninjas.in/a457967e81cb61f97c8039d63799d34a.webp)![Editorialist YX](https://files.codingninjas.in/asset_0000000000001366_1685986469_Editorialist.png)

+3 more companies

Problem statement
-----------------

Send feedback

You are given an undirected graph as an adjacency matrix consisting of _**'v'**_ vertices and an integer _**'m'**_.

  

You need to return 'YES' if you can color the graph using at most 'm' colors so that no two adjacent vertices are the same. Else, return 'NO'.

  

**For example:**

    Input:
    If the given adjacency matrix is:
    [0 1 0]
    [1 0 1]
    [0 1 0] and 'm' = 3.
    

![alt.txt](https://files.codingninjas.in/ex1-28434.png)

    Output: YES
    
    Explanation:
    The given adjacency matrix tells us that 1 is connected to 2 and 2 is connected to 3. We can use three different colors and color all three nodes.
    Hence we return true.
    

  

Detailed explanation ( Input/output format, Notes, Images )

**Input Format:**

    The first line contains two space-separated integers, 'v' and 'm', denoting the number of vertices in the undirected graph and the number of colors, respectively.
    
    Each of the next 'v' lines contains 'v' integers denoting the adjacency matrix of the undirected graph.
    

  

**Output Format:**

    You need to return “YES” if we can color the graph with at most M colors. Otherwise, return “NO”. (without the inverted commas)
    

  

**Note:**

    You are not required to print the expected output. It has already been taken care of. Just implement the function.
    

**Sample Input 1:**

    3 2
    0 1 0
    1 0 1
    0 1 0
    

**Sample Output 1:**

    YES
    

**Explanation of Input 1:**

    The adjacency matrix tells us that 1 is connected to 2, and 2 is connected to 3. We can see that a minimum of 2 colors would be needed to color the graph. So it is possible to color the graph in this case.
    

**Sample Input 2:**

    3 1
    0 1 0
    1 0 1
    0 1 0
    

**Sample Output 2**

    NO
    

**Constraints:**

    1 ≤ v ≤ 20
    1 ≤ m ≤ v
    
    Time Limit: 1 sec
