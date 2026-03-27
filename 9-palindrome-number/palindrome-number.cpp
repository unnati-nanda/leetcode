class Solution {
public:
    bool isPalindrome(int n) {
        int x=n;
    long long rev=0;
    while(n>0){
        int y =n%10;
        n/=10;
         rev=rev*10+y;
         
    }
    if(x==rev){
        return true;
    } else {
        return false;
    }
    }
};