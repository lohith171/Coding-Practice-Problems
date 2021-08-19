//https://www.interviewbit.com/problems/prime-numbers/

/*
Given a number N, find all prime numbers upto N ( N included ).

Example:

if N = 7,

all primes till 7 = {2, 3, 5, 7}

Make sure the returned array is sorted.
*/


bool isprime(int n){
    if(n==0 || n==1)return 0;
    if(n==2)return 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}

vector<int> Solution::sieve(int A) {
  vector<int>res;
  for(int i=1;i<=A;i++){
      if(isprime(i))res.push_back(i);
  }
  return res;
}
