# Stupid-Machine-CodeChef-Question-Sollution
As  usual,  I  went  to  work  in  the  morning.  Unfortunately,  I  found  out  that  my  manager  bought  a  new machine and I have to learn to operate it. There  are NN boxes  in  a  line  (numbered 11 through NN).  Initially,  the  boxes  are  empty,  and  I  need  to  use  the  machine  to  put  tokens  in  them.  For  each  valid ii,  the ii-th  box  has  a  maximum  capacity SiSi tokens.  I  can  perform  the  following  operation  any  number  of  times:  choose  an  integer LL (1≤L≤N1≤L≤N) and put one token in each of the boxes 1,2,...,L1,2,...,L. My manager told me to put as many tokens as possible into the boxes in total (the distribution of  tokens  in  the  boxes  does  not  matter).  Of  course,  it  is  not  allowed  to  perform  an  operation  that  would  result  in  the  number  of  tokens  in  some  box  exceeding  its  capacity.  Can  you  help  me  calculate the maximum number of tokens that can be put in these boxes?
Input
 The  first  line  of  the  input  contains  a  single  integer TT denoting  the  number  of  test 
cases. The description of TT test cases follows.
 The first line of each test case contains a single integer NN.
 The second line contains NN space-separated integers S1,S2,...,SNS1,S2,...,SN.
Output
For each test case, print a single line containing one integer - the maximum number of tokens.
Constraints
 1≤T≤1001≤T≤100
 1≤N≤1061≤N≤106
 1≤Si≤1091≤Si≤109 for each valid ii
 the sum of NN over all test cases does not exceed 5⋅1065⋅106
Subtasks
Subtask #1 (50 points):
 1≤N≤1,0001≤N≤1,000
 1≤Si≤1,0001≤Si≤1,000 for each valid ii
 the sum of NN over all test cases does not exceed 5,0005,000
Subtask #2 (50 points): original constraints
Example Input
1
3
2 1 3
Example Output
4
Explanation
Example case 1: The optimal way is to perform the following operations:
 Choose L=3L=3 and use the machine to put one token in each box.
 Choose L=1L=1 and use the machine to put one more token in the first box.
