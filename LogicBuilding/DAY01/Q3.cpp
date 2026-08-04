#include<iostream>
using namespace std;
int main(){
int num1;
int num2;
cout<<"Enter two numbers:";
cin>>num1>>num2;
if(num1>num2)
{
cout<<"The larger number is:"<<num1<<endl;

}
else if (num2>num1)
{
cout<<"The larger number is:"<<num2<<endl;
}
else
{
cout<<"Both numbers "<<num1<<"and "<<num2<<"are equal"<<endl;
}
return(0);
}