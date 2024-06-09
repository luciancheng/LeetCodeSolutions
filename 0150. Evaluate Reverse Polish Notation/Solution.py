class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []

        for i in range(len(tokens)):
            if tokens[i] == "+" or tokens[i] == "-" or tokens[i] == "*" or tokens[i] == "/":
                num1 = stack.pop()
                num2 = stack.pop()

                newnum = 0
                if tokens[i] == "+":
                    newnum = num2 + num1
                elif tokens[i] == "-":
                    newnum = num2 - num1
                elif tokens[i] == "*":
                    newnum = num2 * num1
                else:
                    newnum = int(num2 / num1)
                
                stack.append(newnum)

            else:
                stack.append(int(tokens[i]))

        return stack[-1]
        
