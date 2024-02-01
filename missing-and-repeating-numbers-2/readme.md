Missing and repeating numbers
=============================

Problem statement
-----------------

You are given an array of size ‘N’. The elements of the array are in the range from 1 to ‘N’.

Ideally, the array should contain elements from 1 to ‘N’. But due to some miscalculations, there is a number R in the range \[1, N\] which appears in the array twice and another number M in the range \[1, N\] which is missing from the array.

Your task is to find the missing number (M) and the repeating number (R).

**For example:**

    Consider an array of size six. The elements of the array are { 6, 4, 3, 5, 5, 1 }. 
    The array should contain elements from one to six. Here, 2 is not present and 5 is occurring twice. Thus, 2 is the missing number (M) and 5 is the repeating number (R). 
    

**Follow Up**

    Can you do this in linear time and constant additional space? 
    

Detailed explanation ( Input/output format, Notes, Images )

**Input Format**

    The first line contains an integer ‘N’ denoting the size of the array.
    The second line contains ‘N’ space-separated integers.
    

**Output Format:**

    Print the missing number (M) and the repeating number (R) separated by a single space. 
    

**Note**

    You don’t have to print anything, it has already been taken care of. Just implement the function. 
    You have to return a pair whose first element is the missing number ‘M’ and the second element is the repeating number ‘R’. 
    

**Constraints:**

    2 <= N <= 5 * 10^4
    1 <= data <= N
    
    Where ‘N’ is the size of the array and ‘data’ denotes the value of the elements of the array.
