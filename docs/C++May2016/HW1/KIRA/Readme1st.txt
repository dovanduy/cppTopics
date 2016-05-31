Тъй като "Курсът C++ Programming е предназначен за хора, 
желаещи да научат основите на обектно-ориентираното програмиране, ..."
реших че задачата 1 е подходяща, като упражнение по ООП.

Условието на задача 1 е във файла HW1.txt и поражда съответно ToDo.

Решението на задача 2 от HW1.txt е по-същество бърз преговор
за структурно програмиране на C++.
Надявам се решението ми й да Ви е било полезно. 

	ToDo:
Ето и интересни задачи за низове:

1) How to Print duplicate characters from String?

To start with, we have a simple String related coding question frequently asked in programming interviews.
You need to write a program in C, C++, Java or Python to print duplicate characters from a given String,
for example if String is "Java" then program should print "a".
Bonus points if your program is robust and handle different kinds of input e.g.
String without duplicate, null or empty String etc.
Bonus points if you also write unit tests for normal and edge cases.


2) How to check if two Strings are anagrams of each other?

A simple coding problem based upon String with numbers.
You need to write a program to check if two given strings are anagrams of Each other.
Two strings are anagrams if they are written using the same exact letters,
ignoring space, punctuation and capitalization.
Each letter should have the same count in both strings.
For example, Army and Mary are anagram of each other.


3) How to program to print first non repeated character from String?

Find the first non-repeated (unique) character in a given string.
for Example if given String is "Morning" then it should print "M".


4) How to reverse String in Java using Iteration and Recursion?

Your task is to write a program to reverse String.
You also need to provide both iterative and recursive algorithm for String reversal.


5) How to check if a String contains only digits? 

You need to write a program to check a String contains only numbers by using Regular expression.


6) How to find duplicate characters in a String?

You need to write a program to print all duplicate character and their count.
For example if given String is "Programming" then your program should print
g : 2
r : 2
m : 2


7) How to count number of vowels and consonants in a String?

You have to write a program which will take a String input and print out number of vowels and consonants on that String.
For example the if input is "Java" then your program should print "2 vowels and 2 consonants".
You should clarify that whether String can contain numbers, special characters
or not e.g. anything other than vowels and consonants.


8) How to count occurrence of a given character in String?

To count occurrence of more than one character than you can either use an array,
hash table or any additional data structure.
In order to solve this problem, you are not allowed to do so.
Your method must return count of given character,
for example if input String is "Java" and given character is 'a' then it should return 2.
Bonus point if you handle case, null and empty String and come up with unit tests.


9) How to convert numeric String to an int?

A classical coding problem based upon String.
You need to write a method like atoi() from C/C++,
which takes a numeric String and return its int equivalent.
For example, if you pass "67263" to the program then it should return 67263.
Make sure your solution is robust i.e.
it should be able to handle + and - character, null and empty String,
integer overflow and other corner cases.
Bonus points if you come up with good unit test cases.



10) How to replace each given character to other e.g. blank with %20?

Write a program to replace a given character in a String to other provided character,
for example if you are asked to replace each blank in a String with %20,
similar to URL encoding done by the browser, so that Server can read all request parameters.
For example if the input is "Java is Great" and asked to replace space with %20
then it should be "Java%20is%20Great".

11) How to find all permutations of String?

It has a easy recursive solution but thinks get really tricky when
you solve this question without using recursion.
You can use Stack though.
Write a program to print all permutations of a String in Java,
for example, the if input is "xyz" then
it should print "xyz", "yzx", "zxy", "xzy", "yxz", "zyx".


12) How to reverse words in a sentence without using library method?

Write a function, which takes a String word and returns sentence on which words are reversed in order e.g.
if an input is "Java is best programming language",
the output should be "language programming best is Java".


13) How to check if String is Palindrome?

Your program should return true if String is Palindrome, otherwise false.
For example, if the input is "radar", the output should be true,
if input is "madam" output will be true, 
and if input is "Java" output should be false.

14) How to remove duplicate characters from String?

This is one of the interesting String problems, which also has lots of variants.
You need to remove duplicate characters from a given string keeping only the first occurrences.
For example, if the input is ‘bananas’ the output will be ‘bans’.
Pay attention to what output could be, because
if you look closely original order of characters are retained the in output.
This is where many developer make the a mistake of shorting character array of String and removing duplicates,
similar to how you remove duplicates from array.
That destroys original order of characters and will not be correct solution in this case.

15) How to check if a String is valid shuffle of two String?

One more difficult String algorithm based coding question for senior developers.
You are given 3 strings: first,  second, and  third.  
third String is said to be a shuffle of first and second
if it can be formed by interleaving the characters of first and second String 
in a way that maintains the left to right ordering of the characters from each string.
For example, given first = "abc" and second = "def",  
third = "dabecf"  is a valid shuffle since it preserves the character ordering of the two strings.
So, given these 3 strings write a function that
detects whether third String is a valid shuffle of first and second String.


16) Write a program to check if a String contains another String e.g. indexOf()?

You need to write a function to search for the existence of a string (target) in another string (source).
The function takes two strings as the input and returns the index where the second string is found.
If the target string cannot be found, then return -1.
If you are a Java developer, then you can related its behavior to indexOf() method from java.lang.String class.
This question is also asked as Code and algorithm to check 
if a given short string is a substring of a main string.
Can you get a linear solution (O(n)) if possible?


17) How  to return highest occurred character in a String?

You need to write a function to implement an algorithm which
will accept a string of characters and should find the highest occurrence of the character and display it.
For example if input is "aaaaaaaaaaaaaaaaabbbbcddddeeeeee" it should return "a".


18) Write a program to remove a given characters from String?

One of favorite coding problems.
You need to write a method which will accept a String and a character to be removed and return a String,
which doesn't has that character e.g remove(String word, char ch). 
You need to provide both iterative and recursive solution of this method 
and also has to write tests to cover cases like null and empty String, 
input which only contains letter to be removed, String which doesn't contain given character etc.


19) Write a program to find longest palindrome in a string?

This is one of the tough coding problems based upon String.
It's hard to think about an algorithm to solve this problem until you have practiced good.
What makes it more difficult is the constraint that your solution has 
O(n) time complexity and O(1) space complexity.


20) How to sort String on their length?

Write a Program to sort String on their length?
Your method should accept  an array of String and
return a sorted array based upon the length of String.
Don't forget to write unit tests for your solution.

P.S. http://javarevisited.blogspot.bg/2015/01/top-20-string-coding-interview-question-programming-interview.html

These are really good String algorithm problems, not only you can expect same question on a real interview
but also it will prepare you how to tackle algorithmic coding interview questions.
Even if you don't find same question, you would be able to apply the knowledge you gain by solving these question by yourself.

Always remember, you are judged by the code you write,
so always write production quality code, which would pass general test, corner cases,
invalid inputs, robustness test and also pass performance test.
Whenever asked to solve a coding problem, always think about all possible input and write test for that.





