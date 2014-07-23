Poj2109<br>
---------<br>
<br>
Description<br>
<br>
Current work in cryptography involves (among other things) large prime numbers and computing powers of numbers among these primes. Work in this area has resulted in the practical use of results from number theory and other branches of mathematics once considered to be only of theoretical interest. <br>
This problem involves the efficient computation of integer roots of numbers. <br>
Given an integer n>=1 and an integer p>= 1 you have to write a program that determines the n th positive root of p. In this problem, given such integers n and p, p will always be of the form k to the nth. power, for an integer k (this integer is what your program must find).<br>
Input<br>
<br>
The input consists of a sequence of integer pairs n and p with each integer on a line by itself. For all such pairs 1<=n<= 200, 1<=p<10101 and there exists an integer k, 1<=k<=109 such that kn = p.<br>
Output<br>
<br>
For each integer pair n and p the value k should be printed, i.e., the number k such that k n =p.<br>
Sample Input<br>
<br>
2 16<br>
3 27<br>
7 4357186184021382204544<br>
Sample Output<br>
<br>
4<br>
3<br>
1234<br>
<br>