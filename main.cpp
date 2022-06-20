#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    ifstream fd("U1.txt");
    ofstream fr("U1rez.txt");
    int n, a[100], e, sk;
    double vid, sum;
    sum=0;
    fd>>n;
    for(int i=1; i<=n; i++)
    {
        fd>>a[i];
        sum+=a[i];
    }
    sk=1000000;
    vid=sum/n;
    for(int i=1; i<=n; i++)
    {
        a[i]=abs(vid-a[i]);
        if(a[i]<sk)
        {
            sk=a[i];
            e=i;
        }
    }
    fr<<e<<endl;
    fd.close();
    fr.close();
    return 0;
}

