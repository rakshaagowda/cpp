#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int j;
        for( j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<" ";

            }
            else 
             cout<<"*";
            
        }

        cout<<endl;
    }
    return 0;

}