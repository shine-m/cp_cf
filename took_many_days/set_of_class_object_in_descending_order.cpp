#include<bits/stdc++.h>
using namespace std;
#define ln "\n" 

class nodea{
    public:
        int i, a;
        // if value for a is not sent as argument, then if will set value of i to 7 by default
        nodea(int a, int i=7){
            this->i = i;
            this->a = a;
        }
        bool operator<(const nodea & other) const {
        return a < other.a;
    }
        bool operator>(const nodea & other) const {
        return a > other.a;
    }
};



int main()
{


  
    multiset<nodea,greater<nodea>> a;
    a.insert(nodea(4, 6));
    a.insert(nodea(9));
    a.insert(nodea(5,9));

    cout << "printing a :"<<ln;
    for(auto i : a){
    cout << i.a << " "<<i.i<<ln;
    }
    
    cout << ln;
    

 return 0;
}