#include <iostream>
#include <cstdio>
#include <cmath>
typedef long long ll;
typedef long double ld;
using namespace std;
 
struct Point {
    int x, y;
    Point() : x(0), y(0){};
    Point(int arg1, int arg2) : x(arg1), y(arg2){};
    double dist(Point &another) {
        return sqrt((this->x - another.x) * (this->x - another.x) +(this->y - another.y) * (this->y - another.y));
    }
};
 
void close_to(int &num, int &square, int &a, char how) {
    if (square < num) {
        for (int i = 1; i < square; i++) {
            num--;
            if (how == '+') {
                a++;
            } else {
                a--;
            }
        }
    } else {
        for (int i = 1; i < num; i++) {
            if (how == '+') {
                a++;
            } else {
                a--;
            }
        }
        num = 0;
    }
}
 
void find_xy(int num, int square, Point &in) {
    while (num) {
        if ((num - square * square + (square - 2) * (square - 2)) > 0 &&
            square != 1) {
            num -= square * square - (square - 2) * (square - 2);
            in.x++;
            in.y++;
            square -= 2;
        } else {
            close_to(num, square, in.x, '+');
            close_to(num, square, in.y, '+');
            close_to(num, square, in.x, '-');
            close_to(num, square, in.y, '-');
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int square, from, to;
        cin >> square >> from >> to;
        Point a, b;
        a.x = a.y = b.x = b.y = 1;
        find_xy(from, square, a);
        find_xy(to, square, b);
        printf("%.3f\n", a.dist(b));
    }
 
    return 0;
}