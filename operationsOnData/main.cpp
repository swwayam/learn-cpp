#include <iostream>
#include <limits>
#include <cmath>

int main()
{

    // ********************************** Basic Operations **************************

    /*


    // Addition
    int number1{2};
    int number2{7};

    int result = number1 + number2;
    std::cout << "result : " << result << std::endl;

    // Substraction
    result = number2 - number1;
    std::cout << "result : " << result << std::endl;

    result = number1 - number2;
    std::cout << "result : " << result << std::endl;


    // Multiplication
    result = number1 * number2;
    std::cout<< "result : " << result << std::endl;

    // Division
    result = number2 / number1;
    std::cout << "result : " << result << std::endl;


    // Modulus
    result = number2 % number1; // 7 % 2 -> 1
    std::cout << "result : " << result << std::endl;

    */

    // *************************** Precedence and Associativity *******************

    /*
         Note -

            Precedence : Which operation to do first.
            Associativity : Which direction or which order.

    */

    /*

    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    int result = a + b * c -d/e -f + g;
    std::cout<< "result : " << result << std::endl;

    // Better Version
    result = a + (b * c) -(d/e) -f + g;
    std::cout<< "result () : " << result << std::endl;

    */

    // ******************** Prefix and Postfix Increment and Decrement ***************

    /*

    int value {5};

    // Increment by one
    value = value + 1; // 6
    std::cout<< "The value is : " << value << std::endl;

    value = 5; // Reset value to 5

    // Decrement by one
    value = value - 1;
    std::cout << "The value is : " << value << std::endl;

    */

    // <-------------------------------------------------------------------------->

    /*

    int value {5};

    // Increment with postfix

    std::cout << "The valus is (incrementing) : " << value++ << std::endl; // 5
    std::cout << "The valus is : " << value << std::endl; // 6

    std::cout << std::endl;

    // Decrement with postfix

    // Reset value to 5
    value = 5;

    std::cout << "The value is (decrementing) : " << value-- << std::endl;
    std::cout << "The value is : " << value << std::endl;

    */

    // <------------------------------------------------------------------------------>

    /*

    // Prefix increment
    int value {5};

    ++value;
    std::cout<< "The value is (prefix++) : " << value << std::endl; // 6

    // Reset value to 5
    value = 5;
    std::cout<< "The value is (prefix++ in place) : " << ++value << std::endl; // 6

    std::cout<< std::endl;

    // Prefix : Decrementing

    // Reset value to 5;
    value = 5;
    --value;
    std::cout<< "The value is (prefix--) : " << value << std::endl;

    // Reset value to 5;
    value = 5;
    std::cout << "The value is (prefix-- in place) : " << --value << std::endl;

    */

    // ********************************** Compound Assignment Operators **************************

    /*

    int value{45};

    std::cout << "The value is : " << value << std::endl;

    std::cout << std::endl;
    value += 5;                                                        // equivalent to value = value + 5
    std::cout << "The value is (after += 5) : " << value << std::endl; // 50

    std::cout << std::endl;
    value -= 5;                                                        // equivalent to value = value - 5
    std::cout << "The value is (after -=5 ) : " << value << std::endl; // 45


    std::cout << std::endl;
    value *= 2;                                                        // equivalent to value = value * 2
    std::cout << "The value is (after *=2 ) : " << value << std::endl; // 90

    std::cout << std::endl;
    value /= 5;                                                        // equivalent to value = value / 5
    std::cout << "The value is (after /=5 ) : " << value << std::endl; // 18

    // Same can be done for modolus

    */

    // ****************************** Relational Operators *******************************************

    /*

    int number1 {45};
    int number2 {60};

    std::cout<< "number1 : " << number1 << std::endl;
    std::cout<< "number2 : " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing Variables" << std::endl;

    std::cout << std::boolalpha; // Make bool show up as true/false instead of 1/0

    // Stress the need for parentheses here.

     std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
     std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
     std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
     std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
     std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
     std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;

     */

    // ****************************** Logical Operators *******************************************

    /*
        Note -

            The Logical Operators include -
            1) && - and
            2) || - or
            3)  ! - not

    */

    /*

     bool a {true};
     bool b {false};
     bool c {false};

     // Combination of all these operators
     std::cout << std::endl;
     std::cout << "Combining logical operators" << std::endl;
     // !(a && b) || c
     std::cout << "!(a && b) || c : " << (!(a && b) || c) << std::endl;

     */

    // ************************************* Output Formatting *********************************

    /* Not IMP watch later*/

    // ********************************** Numeric Limits *************************

    /*
        Note -
           - #include <limits>
    */

    /*

    std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;

    // Like above same goes for other datatypes..

      //Other facilities
    //More info : https://en.cppreference.com/w/cpp/types/numeric_limits
    std::cout << "int is signed : " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "int digits : " << std::numeric_limits<int>::digits << std::endl;

    */

    // ****************************************** Math Functions ****************************

    /*
        Notes -

            - #include <cmath>
            - Some examples - std::floor(); std::ceil(); std::abs(); std::cos(); std::exp(); std::log(); std::pow(); std::sqrt; std::round; std::sin(); std::tan()
    */

    /*

    double weight {7.7};

    // floor
    std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;

    // ceil
    std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl;

    // abs
    double savings {-5000};

    std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
    std::cout << "Abs of savings is : " << std::abs(savings) << std::endl;

    // exp : f(x) = e ^ x, where e = 2.71828
    double exponential = std::exp(10);
    std::cout << "The exponential of 10 is : " << exponential << std::endl;

    // pow
    std::cout << "3 ^ 4 is : " << std::pow(3,4) << std::endl;
    std::cout << "9 ^ 3 is : " << std::pow(9,3) << std::endl;


    // log : reverse function of pow.
     std::cout << "Log ; to get 54.59, you would elevate e to the power of : " << std::log(54.59) << std::endl;

     // log10 , 10 ^ 4 = 10000
     std::cout << "To get 1000, you'd need to elevate 10 to the power of : " << std::log10(10000) << std::endl;

     // sqrt
     std::cout << "The square root of 8` is : " << std::sqrt(81) << std::endl;

     // round. Halfway points are rounded away from 0.
     std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
     std::cout << "2.5 is rounded to : " << std::round(2.5) << std::endl;
     std::cout << "2.4 is rounded to : " << std::round(2.4) << std::endl;

     */

    // ***************************** Weird Integral Types ******************************************

    /*
        Notes -

            - short + short cannot be added or any other cannot be performed. CPP smartly converts this short to int.
            - the compiler does the automatic type casting to int is because int is the smallest thing we can do arithmetic operations on.
    */

    /*

    short int var1{10}; // 2 bytes
    short int var2{20};

    char var3{40}; // 1 byte
    char var4{50};

    std::cout << "size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "size of var2 : " << sizeof(var2) << std::endl;
    std::cout << "size of var3 : " << sizeof(var3) << std::endl;
    std::cout << "size of var4 : " << sizeof(var4) << std::endl;

    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "size of result1 : " << sizeof(result1) << std::endl;
    std::cout << "size of result2 : " << sizeof(result2) << std::endl;

    */

   
    return 0;
}