// Week2ExpressionsHierachy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


int main()
{
    //float a, p, r, n, t;
    //p = 500;
    //r = 2;
    //n = 6;
    //t = 2;

    //cout << endl << "Enter the value for p, and numOfYear, interest: ";
    //cin >> p, r, n, t;

    // a = pow(x,2) + pow(y,2);
    //a = p* pow((1 + (r / n)),(n*t));
    //a = p * pow((1 + r),n);
    

    // total = p + total;

   // cout << "The value of y is : " << a;

    //multiTable 
  /** for (int i = 1; i <= 10; i++) {
        for (int x = 1; x <= 10; x++) {
            cout << setw(4) << i * x;
        }
        cout << endl;
   }**/

   int age[3];
   int person;
   int arrSize = sizeof(age)/sizeof(age[0]);
   int oldest = 0;

   for (int i = 0; i < arrSize; i++) {
       cout << "Enter your age person " << i+1 << " :" ;
       cin >> age[i];
   }
   //checks if the person can drive
   for (int i = 0; i < arrSize; i++) {

       if (age[i] >= 18) {
           cout << "Person " << i+1 << " age is " << age[i] << " this person can drive" << endl;
       }
       else {
           cout << "Person " << i + 1 << " age is " << age[i] << " this person can't drive" << endl;
       }
   }

   //Checks the oldest
   for (int i = 0; i < arrSize; i++) {
       for (int x = 0; x < arrSize; x++) {
           if (age[i] >= age[x]) {
               if (age[i] > oldest) {
                   oldest = age[i];
               }
           }     
       }     
   }
   cout << endl << "This Person is the oldest  age: " << oldest << endl;

   int num[3];
   int numSize = sizeof(num) / sizeof(num[0]);

   for (int i = 0; i < numSize; i++) {
       cout << "Enter a number: " << i + 1 << " :";
       cin >> num[i];
   }
   //checks if a number is a positive or a negative
   for (int i = 0; i < numSize; i++) {

       if (num[i] >= 0) {
           if (num[i] == 0) {
               cout << "This number is 0" << endl;
           }
           else  {
               cout << "This is a positive number: " << num[i] << endl;
           }
       }
       else {
           cout << "This is a negative number: " << num[i] << endl;
       }
   }

   //learning switch
   int numCheck;

   cout << "Enter a number between 1-7: ";
   cin >> numCheck;

   switch (numCheck) {
   case 1:
       cout << "Its monday" << endl;
       break;
   case 2: 
       cout << "Its tuesday" << endl;
       break;
   case 3:
       cout << "Its wednesday" << endl;
       break;
   case 4:
       cout << "Its thursday" << endl;
       break;
   case 5:
       cout << "Its friday" << endl;
       break;
   case 6:
       cout << "Its saturday" << endl;
       break;
   case 7:
       cout << "Its sunday" << endl;
       break;
   default:
       cout << "Invalid number" << endl;
       break;
   }

       
   return 0;
}


