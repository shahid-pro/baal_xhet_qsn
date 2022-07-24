#include <iostream>

using namespace std;
int main()
    {
        int x ;
        cout<<"enter the no. you wanna reverse " << endl;
        cin>> x;

        int sum;
        int r;
        int dummy=x;

        sum=0;


        while(x>0)
        {
            r= x % 10;
            sum= sum * 10 + r;
            x= x / 10;
            
        }
        cout<<"the reverse is " << sum <<endl; 

        if(sum==dummy){
            cout<<"YES ITS PALINDROME";
        }
            else {
                cout<< "NO ITS NOT PALINDROME";
            }


        
        
    }