class Solution {
public:
    
    string dayOfTheWeek(int day, int month, int year) {
        int sum = 4;
        
        int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        string dayName[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", 
                             "Friday", "Saturday"};
        
        //calculating days
        sum += day;
        
        //calculating days in month
        for(int i = 1 ; i < month ; i++){
            if(i==2 && (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))){
                sum += 1;
            }
            sum += months[i];
        }
        
        //calculating days in year
        for(int i = 1971 ; i < year ; i++){
            if(((i % 4 ==0) && (i % 100 != 0)) || (i%400 == 0)){
                sum += 366;
            }else{
                sum += 365;
            }
        }
        
        return dayName[sum%7];
    }
};
