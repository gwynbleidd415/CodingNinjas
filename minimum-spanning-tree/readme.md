Kruskal’s Minimum Spanning Tree Algorithm
=========================================

Problem statement

A minimum spanning tree is a subset of the edges of a connected, edge-weighted undirected graph that connects all the vertices without any cycles and with the minimum possible total edge weight.

  

A spanning tree’s weight is the sum of the weights of each edge in the spanning tree.

  

You have been given a connected undirected weighted graph having _**'n'**_ vertices, from 1 to 'n', and _**'m'**_ edges.

  

You are given an array _**'edges'**_ of size 'm', containing the details of the edges of the graph.

  

Each element of 'edges' contains three integers, the two vertices that are being connected and the weight of the edge.

  

Find the weight of the minimum spanning tree of the given graph.

  

**Example :**

    Input: 'n' = 5, 'm' = 6
    'edges' = [[1, 2, 6], [2, 3, 5], [3, 4, 4], [1, 4, 1], [1, 3, 2], [3, 5, 3]]
    
    Output: 11
    
    Explanation: The given graph is:
    

![Example](https://files.codingninjas.in/mst1-7060.png)

    The minimum spanning tree of the graph is:
    

![Example](https://files.codingninjas.in/mst2-7059.png)

    And its weight is 1 + 2 + 5 + 3 = 11.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input Format:**

    The first line contains two integers, 'n' and 'm' denoting the number of vertices and edges in the graph, respectively.
    
    The next 'm' lines contain three space integers, the vertices 'u' and 'v', and the weight 'w'.
    

  

**Output Format:**

    Print the weight of the minimum spanning tree of the given graph.
    

  

**Note :**

    You do not need to print anything; it has already been taken care of. Just implement the given function.
    

**Sample Input 1:**

    5 6
    1 2 6
    2 3 5
    3 4 4
    1 4 1
    1 3 2
    3 5 3
    

  

**Sample Output 1:**

    11
    

  

**Explanation of sample input 1 :**

    As shown in the example above, The minimum spanning tree of the graph is:
    

![Example](https://files.codingninjas.in/mst2-7059.png)

    And its weight is 1 + 2 + 5 + 3 = 11.
    

  

**Sample Input 2:**

    2 1
    1 2 4
    

  

**Sample Output 2:**

    4
    

  

**Explanation of sample input 2 :**

    The graph has only one edge. So the minimum spanning will be the graph itself. And its weight is 4.
    

  

**Expected time complexity :**

    The expected time complexity is O(m * log(m) + n).
    

  

**Constraints :**

    2 <= 'n' <= 10000
    n - 1 <= 'm' <= min(10000, n * (n - 1) / 2)
    1 <= 'w' <= 10000
    1 <= 'u', 'v' <= n
    
    The graph is connected.
    
    Time limit: 1 sec
