#include <iostream>
#include "Sub.h"

using namespace std;

int main()
{
   cout << "Type in a positive integer and I'll let you know if it's a prime or not..." << endl;
   int Number;
   cin >> Number;
   bool Prime = CheckPrime(Number);
   cout << Number << " is a ";
   if (Prime) cout << "prime number" << endl;
      else cout << "composite number" << endl;
   return 0;
}

