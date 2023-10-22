#include <iostream>

using namespace std;

int main()
{int n,l=-1;
    cin>>n;
    if(n<2){
                cout<<-1;

                }
    else for(int i =2;i<=n;i+=2)
        {

            if(i==n&&i==n-1)
           {  cout<<i;
             break;
           }
      else  cout<<i<<endl;
}
return 0;}
