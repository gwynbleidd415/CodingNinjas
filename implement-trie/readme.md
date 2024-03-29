Problem statement
-----------------

Ninja has to implement a data structure ”TRIE” from scratch. Ninja has to complete some functions.

    1) Trie(): Ninja has to initialize the object of this “TRIE” data structure.
    
    2) insert(“WORD”): Ninja has to insert the string “WORD”  into this “TRIE” data structure.
    
    3) countWordsEqualTo(“WORD”): Ninja has to return how many times this “WORD” is present in this “TRIE”.
    
    4) countWordsStartingWith(“PREFIX”): Ninjas have to return how many words are there in this “TRIE” that have the string “PREFIX” as a prefix.
    
    5) erase(“WORD”): Ninja has to delete one occurrence of the string “WORD” from the “TRIE”.
    

Note:

    1. If erase(“WORD”) function is called then it is guaranteed that the “WORD” is present in the “TRIE”.
    
    2. If you are going to use variables with dynamic memory allocation then you need to release the memory associated with them at the end of your solution.
    

Can you help Ninja implement the "TRIE" data structure?

Detailed explanation ( Input/output format, Notes, Images )

**Input Format:**

    The first line contains a single integer “T” representing the number of test cases. 
    
    The first line of each test case will contain a single integer “N” which denotes how many times the functions(as discussed above) will be called.
    
    The next “N” lines contain the two space-separated strings, the first one is the name of the function and the second one is a “WORD”.
    

**Output Format:**

    For each test case, complete all the functions as we discussed above.
    
    The output for every test case will be printed in a separate line.
    

Note:

    You do not need to print anything; it has already been taken care of. Just implement the given function.
    

**Constraints:**

    1 <= “T” <= 50
    1 <= “N” <= 10000
     “WORD” = {a to z}
    1 <= | “WORD” | <= 1000
    
    Where “T” is the number of test cases, “N” denotes how many times the functions(as discussed above) we call, “WORD” denotes the string on which we have to perform all the operations as we discussed above, and | “WORD” | denotes the length of the string “WORD”.
    
    Time limit: 1 sec.
    

**Sample Input 1:**

    1
    5
    insert coding
    insert ninja
    countWordsEqualTo coding
    countWordsStartingWith nin
    erase coding
    

**Sample Output 1:**

    1
    1   
    

**Explanation of sample input 1:**

    After insertion of “coding” in “TRIE”:
    

![](https://files.codingninjas.in/trieex1-8873.png)

    After insertion of “ninja” in “TRIE”:
    

![](https://files.codingninjas.in/trieex1_2-8872.png)

    Count words equal to “coding” :
    

![](https://files.codingninjas.in/trieex3-8871.png)

    Count words those prefix is “nin”:
    

![](https://files.codingninjas.in/trieex4-8870.png)

    After deletion of the word “coding”, “TRIE” is:
    

![](https://files.codingninjas.in/trieex1-5-8869.png)

**Sample Input 2:**

    1
    6
    insert samsung
    insert samsung
    insert vivo
    erase vivo
    countWordsEqualTo samsung
    countWordsStartingWith vi
    

**Sample Output 2:**

    2
    0
    

**Explanation for sample input 2:**

    insert “samsung”: we are going to insert the word “samsung” into the “TRIE”.
    
    insert “samsung”: we are going to insert another “samsung” word into the “TRIE”.
    
    insert “vivo”: we are going to insert the word “vivo” into the “TRIE”.
    
    erase “vivo”: we are going to delete the word “vivo” from the “TRIE”.
    
    countWordsEqualTo “samsung”: There are two instances of “sumsung” is present in “TRIE”.
    
    countWordsStartingWith “vi”: There is not a single word in the “TRIE” that starts from the prefix “vi”.
