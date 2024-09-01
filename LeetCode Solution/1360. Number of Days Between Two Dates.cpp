class Solution {
public:
    bool isLeapYear(int year) {
        if(year % 400 == 0) return true;
        if(year% 100 == 0) return false;
        if(year % 4 == 0) return true;
        return false;
    }
    int daysInMonth(int month , int year) {
        switch (month) {
            case 1:  return 31;
            case 2:  return isLeapYear(year) ? 29 : 28;
            case 3:  return 31;
            case 4:  return 30;
            case 5:  return 31;
            case 6:  return 30;
            case 7:  return 31;
            case 8:  return 31;
            case 9:  return 30;
            case 10: return 31;
            case 11: return 30;
            case 12: return 31;
        }
        return 0; // invalid month
    }
    int daysFromEpoch(int day, int month, int year) {
        int days = 0;
        // Add days for complete years
        for (int i = 0; i < year; ++i) {
            days += isLeapYear(i) ? 366 : 365;
        }
        // Add days for complete months in the current year
        for (int i = 1; i < month; ++i) {
            days += daysInMonth(i, year);
        }
        // Add days in the current month
        days += day;

        return days;
    }
    int daysBetweenDates(string date1, string date2) {
        string year = "" , year_ = "" , month = "" , month_ = "" , day = "" , day_ = "";
        for(int i = 0 ; i < date1.size() ; i++)
        {
            if(date1[i] != '-' && year.size() != 4)
                year.push_back(date1[i]) , year_.push_back(date2[i]);
            else if(date1[i] != '-' && year.size() == 4 && month.size() != 2)
                month.push_back(date1[i]) , month_.push_back(date2[i]);
            else if(date1[i] != '-')
                day.push_back(date1[i]) , day_.push_back(date2[i]);
        }

        int date1_days = daysFromEpoch(stoi(day) , stoi(month) , stoi(year)); 
        int date2_days = daysFromEpoch(stoi(day_) , stoi(month_) , stoi(year_));
        return abs(date1_days - date2_days);
    }
};