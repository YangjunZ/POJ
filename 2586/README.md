POJ2586
----------

Y2K Accounting Bug
Time Limit: 1000MS		Memory Limit: 65536K
Total Submissions: 10272		Accepted: 5113
Description

Accounting for Computer Machinists (ACM) has sufferred from the Y2K bug and lost some vital data for preparing annual report for MS Inc. 
All what they remember is that MS Inc. posted a surplus or a deficit each month of 1999 and each month when MS Inc. posted surplus, the amount of surplus was s and each month when MS Inc. posted deficit, the deficit was d. They do not remember which or how many months posted surplus or deficit. MS Inc., unlike other companies, posts their earnings for each consecutive 5 months during a year. ACM knows that each of these 8 postings reported a deficit but they do not know how much. The chief accountant is almost sure that MS Inc. was about to post surplus for the entire year of 1999. Almost but not quite. 

Write a program, which decides whether MS Inc. suffered a deficit during 1999, or if a surplus for 1999 was possible, what is the maximum amount of surplus that they can post.
Input

Input is a sequence of lines, each containing two positive integers s and d.
Output

For each line of input, output one line containing either a single integer giving the amount of surplus for the entire year, or output Deficit if it is impossible.
Sample Input

59 237
375 743
200000 849694
2500000 8000000
Sample Output

116
28
300612
Deficit