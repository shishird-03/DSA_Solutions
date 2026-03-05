class Solution {
public:
    string convertToTitle(int columnNumber) {
      if (columnNumber ==0){
        return "";
      }
      columnNumber--;
        return convertToTitle(columnNumber/26)+char('A' + columnNumber % 26);
      }
        
    
};