#include <iostream>

/* ********************** Constinit 

const int val1 {33};
constexpr int val2 {34};
int val3 {35};

constinit int age = 88; // This is initialized at compile time.
const constinit int age1 = {val1}; // const and constinit can be combined.
// constinit int age2 {age1}; // Initializing with age would lead to compiler error. // age is not constant

// constinit int age3 {val3}; // Error : val3 is evaluated at run time. 
                              // can't const initialize age3

const constinit double weight {33.33};
// constexpr constinit double scale_factor {3.11}; // Can't combine constexpr and constinit

*/

int main()
{

    // ****************************** Literals *******************************

    /*
        Notes -

            Literal -> Data that is directly represented in code without going through some other variable stored in memory.
    */

    /*

    // Literal types : u and l combinations for unsigned and log.
    unsigned char unsigned_char {53u}; // 555u would fail because of narrowing.

    // 2 Bytes
    short short_var {-32768}; // No special literal type for short.
    short int short_int {455}; // No special literal type for short.
    signed short signed_short {122}; // No special literal type for short.
    signed short int signed_short_int {-456}; // No special literal type for short.
    unsigned short int unsigned_short_int {5678u};

    // 4 Bytes
    const int int_var {55};
    signed signed_Var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {555u};

    // 4 or 8 Bytes
    long long_var {88l}; // 4 or 8 Bytes
    long int long_int {33l};
    signed long signed_long {44l};
    signed long int signed_long_int {44l};
    unsigned long int unsigned_long_int {555ul};

    long long long_long {888ll}; // 8 Bytes
    long long int long_long_int {999ll};
    signed long long signed_long_long {444ll};
    signed long long int signed_long_long_int {1234ll};


    // Grouping Numbers " C++14 and onwards"
    unsigned int prize {1'500'00'0u};
    std::cout << "The prize is : " << prize << std::endl;


    // Narrowing errors
    // Possible narrowing errors are cought by the braced initializer method.
    // Assignment and functional don't catch that.
    //    unsigned char distance {555u}; // Error [0~255]
    //    unsigned int game_score {-20};

    // With number systems - Hex : prefix with 0x
    unsigned int hex_number {0x22BU}; // Dec 555
    int hex_number2 {0x400}; // Dec 1024

    std::cout << "The hex number is : " << hex_number << std::endl;
    std::cout << "The hex number2 is : " << hex_number2 << std::endl;

    // Representing colors with hex
    int black_color {0Xffffff};
    std::cout << "Black color is : " << black_color << std::endl;

     */

    // ********************************** Constants *************************************

    /*
         Note -
             constant : A variable you can initialize, but can't change afterwards.
    */

    /*

    const int age {34};
    const float height {1.67f};

    // age = 55; // Can't modify
    // height = 1.8f;

    int years {3 * age};

    std::cout << "age : " << age << std::endl;
    std::cout << "height : " << height << std::endl;
    std::cout << "years : " << years;

    */

    // ***************************** Constant Expressions ****************************

    /*
        Note -
            - A constant expression is something that is evaluated at compile time or runtime.
            - if possible, move the potentially heavy computations at compile time.
            - The heavy computation is done once by the developer and users running the application can benefit from the results of the computation done at compile time.
            - C++11 onwards.
            - constexpr is good if you want to do some checks at compile time for this we use static_assert()
    */

   /*

    constexpr int SOME_LIB_MAJOR_VERSION{123};
    constexpr int eye_count{2};
    constexpr double PI{3.14};

    std::cout << "eye count : " << eye_count << std::endl;
    std::cout << "PI : " << PI << std::endl;

    int leg_count{2}; // Non constexpr
                      // leg_count is not known at compile time
    //    constexpr int arm_count {leg_count}; // Error


    constexpr int room_count {10};
    constexpr int door_count {room_count};

    static_assert(SOME_LIB_MAJOR_VERSION == 123);

    int age = 5;
    static_assert(age == 5); // Error - as age is not constant or constant expression.

    std::cout << "App doing it's thing" << std::endl;

    */


   // ************************************* constinit *************************

   /* 
        Notes - 
            - constinit says that a variable should be initialized at compile time. It's a new C++20 keyword.
            - If you try to initialize with something that can't be evaluated at compile time, you'll get a compiler error.
            - We say that the variable should be const initialized.
            - constinit can only be applied to variables with static or thread storage duration. This, in part means variables outside the scope of the main function.
            - constinit is in place in part to help in avoiding problems with the order of initialization of global variables outside the main function.
            - constinit variables must be initialized with const or literals.
            - const and constinit can be combined, but const and constexpr can't be combined in an expression.
            - CAREFUL HERE : const init dosen't imply that the variable is const. It just implies that the compiler enforces initialization at compile time.

   */





    return 0;
}