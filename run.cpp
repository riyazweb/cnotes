
basics-----------------------------------------------------------------------------------------------------------
#include<iostream>
int main() {
   std::cout << "hey striver" << "\n";
   std::cout << "hey striver" << "/n";
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   cout << "hey striver"
        << "\n";
   cout << "hey striver"
        << "\n";
   return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int x, y;
     cout << "enter of x y:" ;
     cin >> x >> y;
     cout << "value of x + y:" << x + y ;
     return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int x, y;
     cout << "enter of x y:" ;
     cin >> x >> y;
     cout << "value of x + y:" << x + y   << "\n";;
     cout << "value of x + y:" << x - y  << "\n";;
     cout << "value of x + y:" << x * y  << "\n";;
     cout << "value of x + y:" << x / y  << "\n";;
     return 0;
}
data types---------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
// int
int x = 10;
// long
long x = 15;
cin >> x;
long long
x = 150000000;
// float,

float,
double
float x = 5.6;
double Y = 5;
cout << x + Y ;;
int , long, long long, float,
string and getline
string s1;
string s2;
cin >> s1 >>s2;
s2;
cout << s1 <<" " << s2 ;
string and get line
cout << "enter name:" ;
string str;
string s1 = "your name is: ";
getline(cin, str);

cout  << s1  + str;

char Ch = 'h';
cout << Ch;

     return 0;
}
if else ----------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin >> age;
     if(age>=18){
      cout << "you are ready for everything";
     }
     else
     {
      cout << "no you are not allowed";
     }
     return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin >> age;
     if(age>=18){
      cout << "you are ready for everything";
     }
     else if (age<=18)
     {
      cout << "no you are not allowed";
     }
     return 0;
}
 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
     if(marks<=10){
      cout << "LOWDE";
     }
     else if (marks<=20)
     {
      cout << "F";
     }
       else if (marks<=30)
     {
      cout << "E";
     }
       else if (marks<=40)
     {
      cout << "D";
     }
       else if (marks<=50)
     {
      cout << "B";
     }
       else if (marks<=60)
     {
      cout << "B";
     }
       else if (marks<=70)
     {
      cout << "A";
     }
     return 0;
}

 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
     if(marks<=10){
      cout << "LOWDE ";
      if(marks<=5){
             cout << "kyu likha bey exam";
      }
     }
     else if (marks<=20)
     {
      cout << "F";
     }
       else if (marks<=30)
     {
      cout << "E";
     }
       else if (marks<=40)
     {
      cout << "D";
     }
       else if (marks<=50)
     {
      cout << "B";
     }
       else if (marks<=60)
     {
      cout << "B";
     }
       else if (marks<=70)
     {
      cout << "A";
     }
     return 0;
}
 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
     if(marks<=10){
      cout << "LOWDE ";
      if(marks<=5){
          // nested
             cout << "kyu likha bey exam";
      }
     }
     else if (marks<=20)
     {
      cout << "F";
     }
       else if (marks<=30)
     {
      cout << "E";
     }
       else if (marks<=40)
     {
      cout << "D";
     }
       else if (marks<=50)
     {
      cout << "B";
     }
       else if (marks<=60)
     {
      cout << "B";
     }
       else if (marks<=70)
     {
      cout << "A";
     }
     return 0;
}

switch --------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int day;
     cin >> day;
     switch (day){
     case 1:
          cout << "mon";
          break;
     case 2:
          cout << "tue";
           break;
     case 3:
          cout << "wed";
           break;
     case 4:
          cout << "thur";
           break;
     case 5:
          cout << "fri";
           break;
     case 6:
          cout << "sat";
           break;
     case 7:
          cout << "sun day hein phenchooo";
           break;
     default:
          cout << "1 to 7 only";
      
}
     return 0;
}
array--------------------------------------------------------------------------------------------------------------
