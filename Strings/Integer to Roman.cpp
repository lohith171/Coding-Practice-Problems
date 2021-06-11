//https://www.interviewbit.com/problems/integer-to-roman/

string Solution::intToRoman(int A) {
    string res;
    int i=0;
    while(A){
        int d=A%10;
        A=A/10;
        i++;
        if(i==1){
            if(d==1){
                res="I"+res;
            }else if(d==2){
                res="II"+res;
            }else if(d==3){
                res="III"+res;
            }else if(d==4){
                res="IV"+res;
            }else if(d==5){
                res="V"+res;
            }else if(d==6){
                res="VI"+res;
            }else if(d==7){
                res="VII"+res;
            }else if(d==8){
                res="VIII"+res;
            }else if(d==9){
                res="IX"+res;
            }
        }else if(i==2){
            if(d==1){
                res="X"+res;
            }else if(d==2){
                res="XX"+res;
            }else if(d==3){
                res="XXX"+res;
            }else if(d==4){
                res="XL"+res;
            }else if(d==5){
                res="L"+res;
            }else if(d==6){
                res="LX"+res;
            }else if(d==7){
                res="LXX"+res;
            }else if(d==8){
                res="LXXX"+res;
            }else if(d==9){
                res="XC"+res;
            }
        }else if(i==3){
            if(d==1){
                res="C"+res;
            }else if(d==2){
                res="CC"+res;
            }else if(d==3){
                res="CCC"+res;
            }else if(d==4){
                res="CD"+res;
            }else if(d==5){
                res="D"+res;
            }else if(d==6){
                res="DC"+res;
            }else if(d==7){
                res="DCC"+res;
            }else if(d==8){
                res="DCCC"+res;
            }else if(d==9){
                res="CM"+res;
            }
        }else if(i==4){
            if(d==1){
                res="M"+res;
            }else if(d==2){
                res="MM"+res;
            }else if(d==3){
                res="MMM"+res;
            }
        }
    }
    return res;
}
