#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, r,sum = 0, m;
    cout << "Enter n: ";
    cin >> n;
    m = n;

    while(n>0)
    {
        r = n%10;
        n = n/10;
        sum += r*r*r;    
    }
    if(sum == m)
    cout<<"Amstrong";
    else
    cout<<"Not Amstrong";
    
    return 0;
}