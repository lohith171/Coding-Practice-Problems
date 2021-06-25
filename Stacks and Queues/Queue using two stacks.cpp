//https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int>s1,s2;
    MyQueue() {
        while(!s1.empty())s1.pop();
        while(!s2.empty())s2.pop();
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int k;
        if(!s2.empty()){
            k=s2.top();
            s2.pop();
        }
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return k;
    }
    
    /** Get the front element. */
    int peek() {
         while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int res=-1;
         if(!s2.empty()){
            res=s2.top();
        }
   
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return res;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty()==true;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
