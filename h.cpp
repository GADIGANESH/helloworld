#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void ganesh(long int a[],long int n)
{
    long int k,i;
        cin>>k;
        set<int> p;
        for(i=0;i<k;i++)
        {
           int x;
           cin>>x;
            p.insert(x);
        }
    for(i=0;i<n;i++)
    {
        if(p.count(a[i]))
        continue;
        else
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int a[n];
        int i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        /*for(i=0;i<k;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[i]==a[j])
                      {
                          a[j]=0;
                          break;
                      }
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]!=0)
            cout<<a[i]<<" ";
        }
        cout<<"\n";*/
       ganesh(a,n);
    }
	
	return 0;
}
