// User defined literals
 #include <iostream>

   long double operator"" mm(long double x) { return x / 1000; }
   long double operator"" m(long double x)  { return x; }
   long double operator"" km(long double x) { return x * 1000; }

   int main()
   {
     std::cout << 1.0mm << '\n';
     std::cout << 1.0m  << '\n';
     std::cout << 1.0km << '\n';
   }