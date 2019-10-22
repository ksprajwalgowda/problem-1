# Problem-1

Program to check the equality of two arrays

sample input:

11,12,13,14,15,16
11,12,13,14,15,16

sample output:

the arrays are equal

# Problem 2

Someone just won the Code Jam lottery, and we owe them N jamcoins! However, when we tried to print out an oversized check, we encountered a problem. The value of N, which is an integer, includes at least one digit that is a 4... and the 4 key on the keyboard of our oversized check printer is broken.

Fortunately, we have a workaround: we will send our winner two checks for positive integer amounts A and B, such that neither A nor B contains any digit that is a 4, and A + B = N. Please help us find any pair of values A and B that satisfy these conditions.
Input

The first line of the input an integer N.
Output

For each test case, output one line containing  A B, where x is the test case number (starting from 1), and A and B are positive integers as described above.

It is guaranteed that at least one solution exists. If there are multiple solutions, you may output any one of them. (See "What if a test case has multiple correct solutions?" in the Competing section of the FAQ. This information about multiple solutions will not be explicitly stated in the remainder of the 2019 contest.)
Limits

1 ≤ T ≤ 100.
Time limit: 10 seconds per test set.
Memory limit: 1GB.
At least one of the digits of N is a 4.
Test set 1 (Visible)

1 < N < 105.
Test set 2 (Visible)

1 < N < 109.

Solving the first two test sets for this problem should get you a long way toward advancing. The third test set is worth only 1 extra point, for extra fun and bragging rights!
Test set 3 (Hidden)

1 < N < 10100.
Sample

Input
4
Output
 
3 1


 

In Sample Case #1, notice that A and B can be the same. The only other possible answers are 1 3 and 3 1.

# Problem 3

to find whether it is anagram or not

# Hamiltonian and Lagrangian

Students have become secret admirers of SEGP. They find the course exciting and the
professors amusing. After a superb Mid Semester examination, it’s now time for the
results. The TAs have released the marks of students in the form of an array, where arr[i]
represents the marks of the ith student.
Since you are a curious kid, you want to find all the marks that are not smaller than those
on its right side in the array.
Input Format
The first line of input will contain a single integer n denoting the number of students.
The next line will contain n space separated integers representing the marks of students.
Output Format
Output all the integers separated in the array from left to right that are not smaller than
those on its right side.
Constraints
1 <= n <= 1000000
0 <= arr[i] <= 10000

sample input:
6
16 17 4 3 5 2 

sample output:
17 5 2

# Micro and Array Update

Micro purchased an array A having N integer values. After playing it for a while, he got
bored of it and decided to update value of its element. In one second he can increase
value of each array element by 1. He wants each array element's value to become greater
than or equal to K. Please help Micro to find out the minimum amount of time it will take,
for him to do so.

Input:

First line consists of a single integer, T, denoting the number of test cases.
First line of each test case consists of two space separated integers denoting N and K.
Second line of each test case consists of N space separated integers denoting the array
A.

Output:

For each test case, print the minimum time in which all array elements will become
greater than or equal to K. Print a new line after each test case.

sample input:

2

3 4

1 2 5

3 2

2 5 5


sample output:

3

0

# Frustrated coders

There are N frustrated coders standing in a circle with a gun in their hands. Each coder
has a skill value S[ i ] and he can only kill those coders that have strictly less skill than
him. One more thing, all the guns have only 1 bullet. This roulette can take place in
any random order. Fortunately, you have the time stone (haaan wo harre wala) and
you can see all possible outcomes of this scenario. Find the outcome where the total
sum of the remaining coder's skill is minimum. Print this sum.
Input Format
The first line contains N the no. of coders
The next line contains N elements where the ith element is theS[ i ] of ith coder.
Output Format
Print a single line containing the minimum sum.

Constraints
1<= N <= 1000000
1<=S[ i ]<=1000

sample input
6
1 7 2 2 4 4 

sample output
11
