#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 

class Point {
    public:
    double x, y;
    string st;

    Point(double x, double y) : x(x), y(y),st("alhamdlillah") { cout << "called" << ln; }
};
int main()
{
cout<<ln<<ln;


Point v(5.4, 7.4);
cout << v.x << " " << v.y << ln;

cout << v.st;

cout<<ln<<ln<<ln;
 return 0;
}