/*
Pow(x, n)

http://leetcode.com/onlinejudge#question_50

Implement pow(x, n).
*/

class Solution {
public:
    double pow(double x, int n) {
        if(n == 0) return 1;
        if(n%2 == 0) return pow(x*x, n/2);
        
        if(n < 0) return 1/pow(x, -1*n);
        else return x * pow(x*x, (n-1)/2);
    }
};

// =========================================================

class Solution {
public:
    double pow(double x, int n) {
        if(x==1 || n==0) return 1;
        if(n==INT_MIN) return 1/pow(x,INT_MAX)/x;
        if(n<0) return 1/pow(x,-1*n);
        
        return pow(x*x,n/2) * ((n%2) ? x : 1);
    }
};