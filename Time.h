#pragma once
#include <stdio.h>
class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time() {
        hour = minute = second = 0;
    }
    Time(int h) {
        hour = h;
        minute = second = 0;
    }
    Time(int h, int m) {
        hour = h;
        minute = m;
        second = 0;
    }
    Time(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }
    Time(char* time) {
        hour = *(time+0);
        minute = *(time + 1);
        second = *(time + 2);

    }
    void get()
    {
        
        printf("%d : %d : %d \n" ,hour, minute, second );
    }
    void set(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    void setHour(int h) { hour = h; }
    void setMinute(int m) { minute = m; } 
    void setSecond(int s) { second = s; } 

    int getHour()const { return hour; }
    int getMinute()const { return minute; }
    int getSecond()const { return second; }

    

};

