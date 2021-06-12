//https://www.interviewbit.com/problems/min-stack/

stack<int>st1,st2;
MinStack::MinStack() {
  while(!st1.empty()){
      st1.pop();
  }
  while(!st2.empty()){
      st2.pop();
  }
}

void MinStack::push(int x) {
    st1.push(x);
    if(st2.empty()){
        st2.push(x);
    }else{
        st2.push(min(st2.top(),x));
    }
}

void MinStack::pop() {
    if(!st1.empty()){
       st1.pop();
       st2.pop();
    }
}

int MinStack::top() {
    if(st1.empty())return -1;
    return st1.top();
}

int MinStack::getMin() {
    if(st1.empty())return -1;
    return st2.top();
}

