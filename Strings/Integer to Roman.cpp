//https://www.interviewbit.com/problems/integer-to-roman/

string Solution::intToRoman(int A) {
            string M[] = {"", "M", "MM", "MMM"};
        // 100, 200, 300, .. 900
        string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        // 10, 20, ... 90
        string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        // 1, 2, ... 9
        string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        int i=0; 
        while(A) {
        int d=A%10;
    A=A/10;
    i++;
    if( i==1) {
        res= I[d]+res; 
    } else if( i==2){ 
      res= X[d]+res; 
        }else if( i==3){
            res= C[d]+res;
        }else res= M[d]+res;
        
} return res;
}
