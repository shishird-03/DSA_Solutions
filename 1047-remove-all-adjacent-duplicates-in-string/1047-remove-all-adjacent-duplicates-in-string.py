class Solution:
    def removeDuplicates(self, s: str) -> str:
        str=[]
        for ch in s:
            if str and str[-1]==ch:
                str.pop()
            else:
                str.append(ch)
        return "".join(str) 
        