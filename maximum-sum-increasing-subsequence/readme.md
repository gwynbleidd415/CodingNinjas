Maximum Sum Increasing Subsequence
==================================

Problem statement
-----------------

Ninja has recently joined the gym. He decides to lift dumbbells to build muscles. The rack contains dumbbells with varying weights. His strategy is to pick a dumbbell randomly from the rack and after exercising place it back to its original position. Now for the next exercise he can only pick dumbbells that are heavier and positioned right to the previously used. After completing all the exercises he has to tell the sum of weights of all dumbbells he picked to his trainer.

In order to impress his trainer he wants this sum to be as maximum as possible. As Ninja is saving energy for exercises, he asks you to help him choose dumbbells. Can you help Ninja to impress his trainer?

**For example:**

    If the ‘RACK’ contains dumbbells with weights [5, 1,  2, 8], then the possible ways to choose dumbbells according to the given conditions are: [ 5 ], [ 1 ], [ 2 ], [ 8 ], [ 5, 8 ], [ 1, 2 ], [ 1, 2, 8 ], [ 2, 8 ].  Lifting dumbbells with weights [ 5, 8 ] gives the maximum sum of 13.
    

Detailed explanation ( Input/output format, Notes, Images )

**Input Format :**

    The first line of input contains an integer ‘T’ denoting the number of test cases to run. Then each test case follows.
    
    The first line of each test case contains a single integer ‘N’ denoting the number of dumbbells in the RACK.
    
    The second line of each test case contains ‘N’ single space-separated integers, denoting the weights of the dumbbells.
    

**Output Format :**

    For each test case, print the maximum weight Ninja can lift to impress his trainer as per given conditions.
    
    Output for each test case will be printed in a new line. 
    

**Note:**

    You do not need to print anything; it has already been taken care of. Just implement the given function.
    

**Constraints:**

    1 <= T <= 5
    1 <= N <= 1000
    1 <= RACK[i] <= 10^5
    
    Time Limit: 1 sec
    

**Sample Input 1 :**

    2
    4
    9 1 2 8 
    1
    8
    

**Sample Output 1:**

    11
    8
    

#### Explanation For Sample Output 1:

    For the first test case:
    [ 9 ], [ 1 ], [ 2 ], [ 8 ], [ 2, 8 ], [ 1, 2, 8 ], [ 1, 2  ], [ 1, 8 ]  these are the possible increasing dumbbell weights in which there is only one way i.e  [  1 , 2 , 8 ] to have a maximum sum of 11.
    
    For the second test case:
    There is only one dumbbell so the maximum weight that can be lifted is 8.
    

**Sample Input 2 :**

    2
    6
    1 2 3 4 5 6
    3
    3 2 1
    

**Sample Output 2 :**

    21
    3
