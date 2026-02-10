/*2. Tom's Fibonacci Cheese Trail

Jerry leaves a trail of cheese pieces behind.
 But there’s a pattern! It follows the Fibonacci
series. Tom wants to follow the trail exactly to catch him.
Input number of terms and print the Fibonacci series 
up to that count. Use for loop.

Sample Input:
How many terms? 8

Output:
0 1 1 2 3 5 8 13*/

#include <iostream>
using namespace std;
int main()
{
int terms;
int Fazool;
int a=0;       // a=0 bcz fibbo 1 fixed term is 0
int b=1;       //b=1 bcz fibbo 2 fixed term is 1
int temp=0;     //temp=temporary=0 beacuse if i assing 1 then it will change my result
long long fibo;

cout<<"How manny terms?";
cin>>terms;
cout<<"Fibonachi series is:";
cout<<endl<<a<<endl;
cout<<b<<endl;
    for (int i =3 ; i<=terms; i++)   //i=3 bcz 1 and 2 are alredy printed
    {
        fibo=a+b;
        a=b;
        b=temp+fibo;

        cout<<fibo<<endl;

      
    }
      cout<<"THANKS FOR USING";
        cin>>Fazool;
    return 0;
}