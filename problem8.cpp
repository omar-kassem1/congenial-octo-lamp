#include<iostream>
using namespace std;
int main()
        {

         int number,count=0;

          cin>>number;
           for(int a=1;a<=number;a++)
               {
                if(number%a==0)
                   {
                  count++;
                   }
               }
       if(count==2)
         {
          cout<<"YES";
         }
       else
         {
          cout<<"NO";
         }

       }
