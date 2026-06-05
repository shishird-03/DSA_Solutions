class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        answer=[0]*len(temperatures)
        str=[]
        for curr_day,curr_temp in enumerate(temperatures):
            while str and curr_temp>temperatures[str[-1]]:
                pop_day=str.pop()
                answer[pop_day]=curr_day-pop_day
            str.append(curr_day)
        return answer
        