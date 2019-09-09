# problem-1

Program to check the equality of two arrays

sample input:

11,12,13,14,15,16
11,12,13,14,15,16

sample output:

the arrays are equal

##Problem 2

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

#problem 3

to find whether it is anagram or not

#Hamiltonian and Lagrangian

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

