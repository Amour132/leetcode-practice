class MyQueue {
private:
	stack<int>s1;
	stack<int>s2;
public:
	/** Initialize your data structure here. */
	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x) {
		s1.push(x);

	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		if (s1.size() == 0 && s2.size() == 0)
		{
			return 0;
		}
		if (s2.size() == 0)
		{
			while (s1.size() > 0)
			{
				int tmp = s1.top();
				s1.pop();
				s2.push(tmp);
			}
		}
		int data = s2.top();
		s2.pop();
		return data;
	}

	/** Get the front element. */
	int peek() {
		if (s2.size() == 0)
		{
			while (s1.size() > 0)
			{
				int tmp = s1.top();
				s1.pop();
				s2.push(tmp);
			}
		}
		return s2.top();
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		if (s1.empty() && s2.empty())
		{
			return true;
		}
		return false;

	}
};

/**
* Your MyQueue object will be instantiated and called as such:
* MyQueue obj = new MyQueue();
* obj.push(x);
* int param_2 = obj.pop();
* int param_3 = obj.peek();
* bool param_4 = obj.empty();
*/