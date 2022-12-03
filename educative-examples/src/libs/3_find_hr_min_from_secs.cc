#include "3_find_hr_min_from_secs.h"

void find_hr_min_from_secs(int& sec, int& hr, int& min)
{
    cout << "input sec = " << sec << endl;
    hr = 0; min = 0;
    min = sec / 60;
    hr = min / 60;
    min = min % 60;
    sec = sec % 60;
    cout << "output hr = " << hr << " min = " << min << " sec = " << sec << endl;
}