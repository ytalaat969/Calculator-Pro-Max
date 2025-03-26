#include <iostream>
using namespace std;
int main () 
{
    int language;
    cout<<"اصدار 1.03\n";
    cout<<" \n";
     
    cout<<"1.English\n";
    cout<<"2.العربية\n";
    cin>> language;
    if (language==1)
    {
cout <<" Choose the calculation" << endl;
cout << "1.+"<< endl;
cout << "2.-" << endl;
cout << "3.×" << endl;
cout << "4.÷" << endl;
int x;
int y;
string yt696;
cin >> yt696;
cout << "the first number :" << endl;
cin >> x;
cout << "The second number :" << endl;
cin >> y;
if (yt696=="+")
{
cout << "The result is :" << x+y << endl;
}

else if (yt696=="1")
{
cout << "The result is :"<< x+y << endl;
}

else if (yt696=="-")
{
cout << "The result is :"<< x-y << endl;
}

else if (yt696=="2")
{
cout << "The result is :"<< x-y << endl;
}
else if (yt696=="x")
{
cout << "The result is :" << x*y<< endl;
}
else if (yt696=="3")
{
cout << "The result is :" << x*y<< endl;
}
else if (yt696=="÷")
{
cout << "The result is :" << x/y<< endl;
}
else if (yt696=="4")
{

cout << "The result is :" << x/y<< endl;
}
else
{
cout << "Invalid operation choice" << endl;
}
}
if (language==2)
{
cout << "اختار الرقم الاول" << endl;
cout << "1.+"<< endl;
cout << "2.-" << endl;
cout << "3.×" << endl;
cout << "4.÷" << endl;
int x;
int y;
string yt696;
cin >> yt696;
cout << "الرقم الاول :" << endl;
cin >> x;
cout << "الرقم الثانى :" << endl;
cin >> y;
if (yt696=="+")
{
cout << "النتيجة : " << x+y << endl;
}

else if (yt696=="1")
{
cout << "النتيجة :"<< x+y << endl;
}

else if (yt696=="-")
{
cout << "النتيجة :"<< x-y << endl;
}

else if (yt696=="2")
{
cout << "النتيجة :"<< x-y << endl;
}
else if (yt696=="x")
{
cout << "النتيجة :" << x*y<< endl;
}
else if (yt696=="3")
{
cout << "النتيجة :" << x*y<< endl;
}
else if (yt696=="÷")
{
cout << "النتيجة :" << x/y<< endl;
}
else if (yt696=="4")
{

cout << "النتيجة :" << x/y<< endl;
}
else
{
cout << "القيمة غير صالحة" << endl;
}
}
}
