//
//  main.cpp
//  usetime
//
//  Created by Mingze Lee on 2024/9/28.
//

#include <iostream>
#include "time.h"

int main()
{
    using std::cout;
    Time t1 = Time(3, 20);
    Time t2;
    
    cout << t1 << t2;
    t2.Reset(4, 35);
    cout << t2;
    cout << (t1 + t2 + Time(0, 10));
    t2 = 2 * t2;
    cout << t2;
    return 0;
}
