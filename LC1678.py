class Solution:
    def interpret(self, command: str) -> str:
        n = len(command)
        s = []
        i = 0

        while i < n:
            if command[i] == 'G':
                s.append('G')
                i += 1
            elif command[i] == '(':
                if command[i+1] == ')':
                    s.append('o')
                    i += 2
                else:
                    s.append('al')
                    i += 4
        
        return "".join(s)
