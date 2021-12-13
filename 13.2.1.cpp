#include <iostream>
#include <cmath>

using namespace std;

#define z 2
#define INPUT(x) cin >> x
#define PRINT(str) cout << (str)
#define ABS(x) (((x)<0)?(-(x)):(x))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define POW2(x) ((x)*(x))

void main()
{
    double x, y, w = 0;
    PRINT("x = "); INPUT(x);
    PRINT("y = "); INPUT(y);

#if z > 1;
    w = MAX(POW2(x - z), x - y);
#elif z <= 1
    w = MIN(x - y, y - z);
#endif

    PRINT(w);
}