# include <iostream.h>

main()
{
   cout << "Welcome to my gitHub account";
   cout << "This line is added to create a version of this file";
   cout << "Square of a number 1 is ", << square(1.0);
   cout << "Cube  of a number 2 is ", << cube(2.0);
}

double square(double in_number)
{
   double out_number;
   out_number= in_number*in_number;
   return out_number;
}

double cube(double in_number)
{
   double out_number;
   out_number= in_number*in_number * in_number;
   return out_number;
}
