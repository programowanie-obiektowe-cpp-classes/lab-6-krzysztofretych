#include<iostream>
#include<vector>
#include<algorithm>
#include "make_random_vector.hpp"

using namespace std;

int fun1(int a, int b)
{
    return a>b;
}

int fun2(int a, int b)
{
    return b>a;
}

struct comp
{
    comp() : c(){}
    int operator()(int a, int b){
        if (a<b)
            {
                ++c;
                cout << "this" << this->c << '\n';
            }
        return a>b;
    }
    int operator()(int a){return a<d;}
    int c;
    int d;
};

int main()
{
/*     cout << "Podaj liczbe do porownania" << endl;
    int dd;
    cin >> dd;
    comp cop;
    cop.d=dd;
    auto rvec=make_random_vector(10, 0, 10);
    for(auto& it:rvec){cout << it << endl;}
    cout << "-----" << '\n';

     comp cop;
    cout << cop.c << '\n';
    sort(rvec.begin(), rvec.end(), cop);
    cout << "-----" << '\n';
    cout << cop.c << '\n';
    cout << "-----" << '\n';
    for(auto& it:rvec){cout << it << endl;}
    cout << "-----" << '\n';
    int no= count_if(rvec.begin(), rvec.end(), [&](int a){return a<dd;});
    cout << no << '\n'; */

    /* string aa;
    cin >> aa;
    cout << aa << '\n';
    auto a=adjacent_find(aa.begin(), aa.end());
    if(a!= aa.end())
        cout << *a << '\n'; */

    
} 
