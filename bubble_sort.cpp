/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int abc[n];
    for(int i=0;i<n;i++)
    {
        cin>>abc[i];
    }
    int counter=1;
    while(counter<n-1)
    {
        for(int j=0;j<n-counter;j++)
        {
            if(abc[j]>abc[j+1])
            {
                int temp;
                temp=abc[j+1];
                abc[j+1]=abc[j];
                abc[j]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<abc[i]<<" ";
    }

    return 0;
}
