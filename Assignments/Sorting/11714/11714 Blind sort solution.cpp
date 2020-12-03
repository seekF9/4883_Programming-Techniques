//Vishwas Karki 
//11714 Blind Sort 
// UVA accepted code
// Reference: https://topic.alibabacloud.com/a/uva-11714-blind-sorting_8_8_31508407.html

#include <cstdio>
#include <cstring>
#include <cmath>

int main ()
{
int N;
    while (N != 0)
    {
        std::cin >> N;  
        // ceil - rounds the number to the upper limit. 
        std::cout << (n - 1 + (int)ceil(log2(double)n) -1);
    }
return 0;
}


// Notes
/*
There are n different numbers, you can ask A, b which is big, will get the answer, 
and then ask at least a few times to ensure that the largest and the second biggest 
number can be selected.

Analysis:
N number, first in Daleitai way, 22 compared to the largest, n-1 times, 
and then by the largest PK down the number, compared to the largest, 
there are log (n) number, need to log (n)-1 times, pay attention to rounding up.
*/