#include <iostream>

int main()
{

    // ****************************** Implicit Data Conversions ***********************

    /*
        Note -

            - The compiler applies implicit conversions when types are different in an expression.
            - Conversions are always done from the smallest to the largest.

            // Implicit Conversions in Assignments

            - The assignment operation is going to cause implicit narrowing conversion, y is converted to int before assignment.

    */

    /*

     double price {45.6};
     int units {10};

     double total_price = price * units;

     std::cout << "Total price : " << total_price << std::endl;
     std::cout << "sizeof total_price : " << sizeof(total_price) << std::endl;

     // The assignment operation is going to cause implicit narrowing conversion, y is converted to int before assignment.

     int x;
     double y {45.44};
     x = y;
     std::cout << "The value of x is : " << x << std::endl;
     std::cout << "sizeof x : " << sizeof(x) << std::endl;

     */

    // *********************************************** Explicit Data Conversion ********************************

    /*
        Note:

            - This conversions are actively initialited by the developer
            - Static_cast<>() is checked by the compiler, and if the types are not compatible, you'll get a nice compiler error.
    */

    // Implicit cast will add up the doubles, then turn result into int for assignment.

    /*

    double x {12.5};
    double y {34.6};

    int sum = x + y;

    std::cout << "The sum is : " << sum << std::endl;

    // Explicit cast : cast then sum up
    sum = static_cast<int>(x) + static_cast<int>(y);
    std::cout << "The sum is : " << sum << std::endl;

    // Explicit cast : sum up then cast, same thing as implicit cast
    sum = static_cast<int> (x + y);
    std::cout << "Sum up then cast, result : " << sum << std::endl;

    // Old style C-cast
    double PI {3.14};
    int int_pi = (int)(PI);
    std::cout << "PI : " << PI << std::endl;
    std::cout << "int_pi : " << int_pi << std::endl;

    */

    // ************************* Overflow and Underflow ****************************

    /*

     unsigned char data {250};

     ++data;
     std::cout << "data : " << static_cast<int>(data) << std::endl;

     ++data;
     std::cout << "data : " << static_cast<int>(data) << std::endl;

     ++data;
     std::cout << "data : " << static_cast<int>(data) << std::endl;

     ++data;
     std::cout << "data : " << static_cast<int>(data) << std::endl;

     ++data;
     std::cout << "data : " << static_cast<int>(data) << std::endl; // 255

     ++data; // overflow
     std::cout << "data : " << static_cast<int>(data) << std::endl; // 256

     data = 1;

     --data;
     std::cout << "data : " << static_cast<int>(data) << std::endl;

     --data; // underflow
     std::cout << "data : " << static_cast<int>(ddata) << std::endl;

        */

    return 0;
}