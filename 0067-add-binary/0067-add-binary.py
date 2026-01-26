class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        decimal_sum= int(a,2)+int(b,2)
        binary_sum =bin(decimal_sum)[2:]
        return binary_sum
        