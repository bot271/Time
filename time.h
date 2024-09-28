//
//  time.h
//  usetime
//
//  Created by Mingze Lee on 2024/9/28.
//

#ifndef TIME_H_
#define TIME_H_
#include <iostream>

class Time
{
private:
    int hour_;
    int minute_;
    
public:
    Time(int hour = 0, int minute = 0);
    ~Time();
    void AddMin(const int);
    void AddHr(const int);
    void Reset(const int hour = 0, const int minute = 0);
    Time operator+(const Time &) const;
    Time operator*(const int) const;
    friend Time operator*(const int n, const Time & t) { return t * n; }
    friend std::ostream & operator<<(std::ostream &, const Time &);
};


#endif
