#include <iostream>
#include <iomanip>

using namespace std;

const int NumStores= 5;
const int AsteriskValue= 100;

int main()
{
    int sales[NumStores];

    for(int i=0; i<NumStores; i++){
        cout<<"Enter today'sales for store " << (i+1) << ": ";
        cin>>sales[i];
    
    }
    cout << "\nSALES BAR CHART" <<endl;
    cout << "(Each * =$" << AsteriskValue << ")\n";

    for(int i=0; i<NumStores; i++)
    {
        cout<<"Store "<< (i+1) << ":";
        int numAsterisks = sales[i] / AsteriskValue;
        for(int j=0; j<numAsterisks; j++)
        {
            cout<<"*";
        }
    }
 return 0;
}
