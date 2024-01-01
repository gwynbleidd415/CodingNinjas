Minimize Max Distance to Gas Station
====================================

Moderate

![](https://files.codingninjas.in/yellow-spark-22969.svg)

80/80

[![profile](https://lh3.googleusercontent.com/a/ALm5wu378WI6_7WXMmS3SlI1K2LxX1RMPaP1Gltt6hjQ=s96-c)](/studio/profile/034bea1e-9aef-4a4a-a452-8be27ddfbf17)

Contributed by

Utkarsh Kumar Choubey

137 upvotes

![undefined](https://s3-ap-southeast-1.amazonaws.com/codestudio.codingninjas.com/studio/assets/icons/company.svg)

Problem statement
-----------------

Send feedback

You are given a sorted array **_‘arr’_** of length **_‘n’_**, which contains positive integer positions of **_‘n’_** gas stations on the X-axis.

  

You are also given an integer **_‘k’_**.

  

You have to place 'k' new gas stations on the X-axis.

  

You can place them anywhere on the non-negative side of the X-axis, even on non-integer positions.

  

Let **_'dist'_** be the maximum value of the distance between adjacent gas stations after adding 'k' new gas stations.

Find the minimum value of dist.

  

**Example:**

    Input: ‘n' = 7 , ‘k’=6, ‘arr’ = {1,2,3,4,5,6,7}.
    
    Answer: 0.5
    
    Explanation:
    We can place 6 gas stations at 1.5, 2.5, 3.5, 4.5, 5.5, 6.5. 
    
    Thus the value of 'dist' will be 0.5. It can be shown that we can't get a lower value of 'dist' by placing 6 gas stations.
    

  

**Note:**

    You will only see 1 or 0 in the output where:
      1 represents your answer is correct.
      0 represents your answer is wrong. 
    Answers within 10^-6 of the actual answer will be accepted.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input format:**

    The first line contains two integers, ' n' and 'k', representing the size of the array 'arr' and the number of additional gas stations you need to place.
    The second line contains 'n' integers, denoting the array 'arr' elements.
    

  

**Output Format:**

    Return the minimum value of 'dist'. 
    

  

**Note:**

    You do not need to print anything. It has already been taken care of. Just implement the given function. 1 will be printed for answers with an error less than 10^-6 from the actual answer and 0 otherwise.
    

  

**Sample Input 1:**

    5 4
    1 2 3 4 5
    

  

**Expected Answer:**

    0.5
    

  

**Output Printed On Console:**

    1
    

  

**Explanation of sample output 1:**

    k = 4, arr = {1,2,3,4,5} 
    
    One of the possible ways to place 4 gas stations is {1,1.5,2,2.5,3,3.5,4,4.5,5}
    
    Thus the maximum difference between adjacent gas stations is 0.5. 
    
    Hence, the value of ‘dist’ is 0.5. It can be shown that there is no possible way to add 4 gas stations in such a way that the value of ‘dist’ is lower than this. (Note: 1 will be printed in the output for the correct answer). 
    

  

**Sample Input 2:**

    10 1
    1 2 3 4 5 6 7 8 9 10
    

  

**Expected Answer:**

    1
    

  

**Output Printed On Console:**

    1
    

  

**Explanation of sample output 2:**

    k = 1, arr = {1,2,3,4,5,6,7,8,9,10} 
    
    One of the possible ways to place 1 gas station is {1,1.5,2,3,4,5,6,7,8,9,10} 
    
    Thus the maximum difference between adjacent gas stations is still 1. 
    
    Hence, the value of ‘dist’ is 1. It can be shown that there is no possible way to add 1 gas station in such a way that the value of ‘dist’ is lower than this. (Note: 1 will be printed in the output for the correct answer). 
    

  

**Expected Time Complexity**

    Try solving this in O(n*log(A)), where A is the maximum value in array 'arr'.
    

  

**Constraints:**

    2 <= n <= 10^5
    1 <= k <= 10^6 
    1 <= arr[i] <= 10^9
    
    Time Limit: 1 sec
