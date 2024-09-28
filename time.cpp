//
//  time.cpp
//  usetime
//
//  Created by Mingze Lee on 2024/9/28.
//

#include "time.h"


Time::Time(int hour, int minute)
{
    hour_ = hour;
    minute_ = minute;
}

Time::~Time() { };

void Time::Reset(const int hour, const int minute)
{
    hour_ = hour;
    minute_ = minute;
}

void Time::AddHr(const int n)
{
    hour_ += n;
}

void Time::AddMin(const int n)
{
    int total_min = n + minute_;
    minute_ += total_min / 60;
    minute_ = total_min % 60;
}

Time Time::operator+(const Time & t) const
{
    int hr, min;
    min = minute_ + t.minute_;
    hr = hour_ + t.hour_;
    hr += min / 60;
    min %= 60;
    return Time(hr, min);
}

Time Time::operator*(const int n) const
{
    int hr, min;
    min = minute_ * n;
    hr = hour_ * n + min / 60;
    min %= 60;
    return Time(hr, min);
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << t.hour_ << " hours " << t.minute_ << " minutes.\n";
    return os;
}

