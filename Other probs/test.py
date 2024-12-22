class Stack:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return len(self.items) == 0

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if not self.isEmpty():
            return self.items.pop()

    def peek(self):
        if not self.isEmpty():
            return self.items[-1]

def is_operand(char):
    return char.isalnum()

def precedence(op):
    if op in ['*', '/']:
        return 2
    if op in ['+', '-']:
        return 1
    return 0

def infix_to_postfix(infix):
    stack = Stack()
    postfix = []
    for char in infix:
        if is_operand(char):
            postfix.append(char)
        elif char == '(':
            stack.push(char)
        elif char == ')':
            while not stack.isEmpty() and stack.peek() != '(':
                postfix.append(stack.pop())
            stack.pop()  # Remove '('
        else:
            while not stack.isEmpty() and precedence(char) <= precedence(stack.peek()):
                postfix.append(stack.pop())
            stack.push(char)
    
    while not stack.isEmpty():
        postfix.append(stack.pop())
    
    return ''.join(postfix)

def infix_to_prefix(infix):
    # 反转中缀表达式，括号也要反转
    infix = infix[::-1].replace('(', '#').replace(')', '(').replace('#', ')')
    # 转换为后缀
    postfix = infix_to_postfix(infix)
    # 再次反转得到前缀
    return postfix[::-1]

def postfix_to_infix(postfix):
    stack = Stack()
    for char in postfix:
        if is_operand(char):
            stack.push(char)
        else:
            op2 = stack.pop()
            op1 = stack.pop()
            stack.push(f"({op1}{char}{op2})")
    return stack.pop()

def prefix_to_infix(prefix):
    stack = Stack()
    for char in reversed(prefix):
        if is_operand(char):
            stack.push(char)
        else:
            op1 = stack.pop()
            op2 = stack.pop()
            stack.push(f"({op1}{char}{op2})")
    return stack.pop()

# 测试
infix = "a+b*(c+d)-e/f"
print("Infix:", infix)
postfix = infix_to_postfix(infix)
print("Postfix:", postfix)
prefix = infix_to_prefix(infix)
print("Prefix:", prefix)
print("Postfix to Infix:", postfix_to_infix(postfix))
print("Prefix to Infix:", prefix_to_infix(prefix))