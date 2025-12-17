// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int originalnumber = n ;
        int arm= 0 ;
        while(n>0){
            int lastdigit = n % 10 ;
            arm =pow(lastdigit,3) +arm;  
            n = n/ 10;
        }
        if(arm==originalnumber) return true ;
        else return false ;
        
    }
};