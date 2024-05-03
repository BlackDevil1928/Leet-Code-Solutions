from collections import deque

class MyStack:

    def __init__(self):
        self.queue1 = deque()
        self.queue2 = deque()

    def push(self, x: int) -> None:
        # Move all elements from queue1 to queue2
        while self.queue1:
            self.queue2.append(self.queue1.popleft())
        
        # Add the new element to queue1
        self.queue1.append(x)
        
        # Move elements back from queue2 to queue1
        while self.queue2:
            self.queue1.append(self.queue2.popleft())

    def pop(self) -> int:
        if self.queue1:
            return self.queue1.popleft()
        return None

    def top(self) -> int:
        if self.queue1:
            return self.queue1[0]
        return None

    def empty(self) -> bool:
        return not bool(self.queue1)

# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()
