class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        depth=0
        current=0
        for i in s:
            if i=="(":
                depth=depth+1
            elif depth:
                depth=depth-1
            else:
                current=current+1
        return depth+current            

        