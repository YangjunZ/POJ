Poj2109

---------


Description


Current work in cryptography involves (among other things) large prime numbers and computing powers of numbers among these primes. Work in this area has resulted in the practical use of results from number theory and other branches of mathematics once considered to be only of theoretical interest. 
This problem involves the efficient computation of integer roots of numbers. 
Given an integer n>=1 and an integer p>= 1 you have to write a program that determines the n th positive root of p. In this problem, given such integers n and p, p will always be of the form k to the nth. power, for an integer k (this integer is what your program must find).

Input


The input consists of a sequence of integer pairs n and p with each integer on a line by itself. For all such pairs 1<=n<= 200, 1<=p<10^101 and there exists an integer k, 1<=k<=10^9 such that kn = p.

Output


For each integer pair n and p the value k should be printed, i.e., the number k such that k^n =p.

Sample Input


2 16

3 27

7 4357186184021382204544

Sample Output


4

3

1234


在使用html标签<br>无效后，使用正则表达式 “([a-zA-Z0-9\-\.])\n”查找，提换成“\1\n\n”，将单\n提换成\n\n,使得gitlab wiki能够正确换行


解题方法：

利用p的长度p.size()/n有时候要加一，得到k的最大最小范围，并使用二分法进行猜测。使用字符串实现大整数，模拟竖式乘法实现大整数乘法。


扩展：傅里叶快速大整数乘法（精度问题），牛顿快速求平方根