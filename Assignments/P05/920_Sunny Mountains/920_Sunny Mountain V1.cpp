#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct points { double x, y; };

double distance(points* p1, points* p2);
double x_cordinate(points* p_1, points* p_2, double y3);

int main() {
    int C, N;
    cin >> C;

    // reads x and y from the input
    int a, b;

    // while loop that executes the number of test cases 
    // given by C.
    while (C--)
    {
        cin >> N;
        points* pt1[N];
        points* temp;
        int high = 0, index;
        double surface = 0.00;
        for (int i = 0; i < N; i++)
        {
            cin >> a >> b;
            pt1[i]->x = a;
            pt1[i]->y = b;
            if (pt1[i]->y > high)
            {
                high = pt1[i]->y;
                index = i;
            }
        }

        while (index < N)
        {
            int j, k;
            j = index;
            k = index;
            double y3 = 0.00;
            while (j < N)
            {
                if (pt1[j + 1]->y > y3)
                {
                    y3 = pt1[j + 1]->y;
                    temp->y = y3;
                    index = j + 1;
                }
                double x3;
                x3 = x_cordinate(pt1[k], pt1[k + 1], y3);
                temp->x = x3;
                surface += distance(pt1[k], temp);
                j++;
                if (j == (N - 1)) j = N;
            }
            if (index == (N - 1)) index = N;

        }

        //output 
        cout << fixed << setprecision(2) << surface << endl;
        delete pt1[N];
    }
}

double x_cordinate(points* p_1, points* p_2, double y3)
{
    double m, y_i, x_i;
    y_i = p_2->y - p_1->y;
    x_i = p_2->x - p_1->x;
    m = y_i / x_i;

    double x3;
    double c;
    c = p_1->y - (m * p_1->x);
    x3 = (y3 - c) / m;
    return x3;
}

double distance(points* p1, points* p2)
{
    double dist;
    dist = sqrt(pow(p2->x - p1->x, 2) +
        pow(p2->y - p1->y, 2));

    return dist;
}