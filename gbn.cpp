#include <iostream>
#include <cmath>
using namespace std;

int t(int N, int TotalFrames)
{
    int i =1;
    int TotalTransactions=0;
    while(i <= TotalFrames)
    {
        for(int k=i; k < i + N && k <= TotalFrames ; k++)
        {
            cout << "Sending Frame " << k << " ..." << endl;
            TotalTransactions++;
        }
        int x=0;
        cout << "If acknowledge is not received select 0 else select 1 : ";
        cin >> x;

        if(x == 1)
        {
            i = i + N;
        }
        else
        {
            int z=0;
            cout << "Enter Frame Number for which acknowledgment is not received : ";
            cin >> z;
            i = z;
        }
    }
    return TotalTransactions;
}

int main()
{
    int TotalFrames=0, x=0;
    cout << "enter total frames : ";
    cin >> TotalFrames;

    cout << "sequence bit size : ";
    cin >> x;

    int N = pow(2, x);

    int TotalTransactions = t(N, TotalFrames);
    cout << "total no. of frames sent and resent are : " << TotalTransactions << endl;
}