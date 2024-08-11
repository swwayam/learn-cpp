#include <iostream>
#include <iomanip>

int main()
{

  // ******************************************* Number System **********************************

  /*


  int number1 = 15;         // Decimal
  int number2 = 017;        // Octal
  int number3 = 0x0F;       // Hexadecmial
  int number4 = 0b00001111; // Binary

  std::cout << "number1 " << number1 << std::endl;
  std::cout << "number2 " << number2 << std::endl;

  std::cout << "number3 " << number3 << std::endl;

  std::cout << "number4 " << number4 << std::endl;

  */

  // ************************************** Decimals and Integers ********************************

  /*
   Note -

       Three ways to initialize integer variables -
       1) Braced Initialization -> int number {2};
       2) Functional Initialization -> int number(2)
       3) Assignement Initialization -> int number = 2
  */

  // Braced Initializers

  /*

  int elephant_count; // Variable may contain random garbage value.

  int lion_count {}; // Initializes to zero

  int dog_count {10}; // Initializes to 10

  int cat_count {15}; // Initializes to 15

  // Can use expression as initializer

  int domesticated_animals {dog_count + cat_count};

  // int narrowing_conversion {2.9}; Gives error doesn't compile

  */

  // Functional Initialization

  /*

  int apple_count(5);
  int orange_count(10);
  int fruit_count (apple_count + orange_count);


  // Information lost. Less safe than braced initializers
  int narrowing_conversion_functional (2.9);

  */

  // ********************************** Integer Modifiers ************************************

  /*

    Note - modifiers only apply to integral types : those in which you store decimal numbers.

        Positive (unsigned) and Negative (signed works for both +ve and -ve) int



  */

  /*

   signed int value1 {10}; // 10
   signed int value2 {-300}; // -300

   std::cout<< "Value1 : " << value1 << std::endl;
   std::cout<< "Value2 : " << value2 << std::endl;

   unsigned int value3 {4}; // 4
   unsigned int value4 {-4}; // compile error

   // Short and Long

   short short_var {-32768}; // 2 Bytes all the below
   short int short_int {66};
   signed short signed_short {122};
   signed short int signed_short_int {-456};
   unsigned short int unsigned_short_int {456};


   int int_var {55}; // 4 Bytes all the below
   signed signed_var {66};
   signed int signed_int {77};
   unsigned int unsigned_int {77};

   long long_var {88}; // 4 or 8 Bytes
   long int long_int {33};
   signed long signed_long {44};
   signed long int signed_long_int {44};
   unsigned long int unsigned_long_int {44};

 */

  // ****************************************** Fractional Numbers ********************************

  /*

  Type        Size  Precision   Comment

  float        4     7             -
  double       8     15          Recommended default
  long double  12    > double      -


  - Remember the suffixes when intializing floating point variables, otherwise the default will be double.
  - Double works well in many situations, so you will see it used a lot.

  */

  /*

  // Declare and initialize the variables

  float number1 {1.1234567890f};
  double number2 {1.12345678901234567890};
  long double number3 {1.12345678901234567890L};

  // Print out the sizes
  std::cout << "sizeof float : " << sizeof(float) << std::endl;
  std::cout << "sizeof double : " << sizeof(double) << std::endl;
  std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

  // Normal Printing of Decimals. Prints upto 6 precision
  std::cout << "number 1 is : " << number1 << std::endl;
  std::cout << "number 2 is : " << number2 << std::endl;
  std::cout << "number 3 is : " << number3 << std::endl;


  // Setting the Precision
  std::cout << std::setprecision(20);
  std::cout << "number 1 is : " << number1 << std::endl; // 7 digits
  std::cout << "number 2 is : " << number2 << std::endl; // 15'ish digits
  std::cout << "number 3 is : " << number3 << std::endl; // 15+ digits

  // Float problems : The precision is usually too limited
  // For a lot of applications
  float number4 {192400023.0};    // Error : narrowing conversion | output - 192400016 (As float is 7 percision.. the last 2 got replaced with some garbage)

  */

  // ***************************************** Booleans ************************************

  /*
    Note -

      - Used to make decisions in a program - 1 byte

      - Printing out a bool

        1) 1 -->> true
        2) 0 -->> false


  */

  /*

   bool red_light{true};
   bool green_light{false};

   if (red_light == true)
   {
     std::cout << "Stop!" << std::endl;
   }
   else
   {
     std::cout << "Go through!" << std::endl;
   }

   // Printing out a bool
   // 1 -->> true
   // 0 -->> false

   std::cout << std::endl;
   std::cout << "Red Light : " << red_light << std::endl;
   std::cout << "Green Light : " << green_light << std::endl;

   // If you want output as Bool i.e true and false
   std::cout << std::boolalpha;
   std::cout << "Red Light : " << red_light << std::endl;
   std::cout << "Green Light : " << green_light << std::endl;


  */

  // ****************************************** Characters and Text *********************************

  /*

    Note :

      - 1 byte : 256 Possible values -> Each matched to some character
      - ASCII Table conversion for char datatype.

      - It is possible to assign a valid ASCII code to a char variable, and the corresponding character will be stored in. You can chosse to interpret that either as a character or a regular integral value.

      - static_cast<int>(value) : here we are saying that don't print the related ASCII value instead, static cast will print it as an integer.


  */

  /*

    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;


    // One byte in memory : 2^8 = 256 different values (0 ~ 255)
    std::cout << std::endl;

    char value = 65; // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl;

    // static_cast<int> takes the value and prints it as an integer
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;


  */

  // ************************************************************** auto *******************************************************

  /*

    Note -

      - auto - this keyword is used to avoid writing long and complex data type. When you use auto the compiler gusses the datatype for you.

  */

  /*


  auto var1 {12}; // int
  auto var2 {13.0}; // double
  auto var3 {14.0f}; // float
  auto var4 {15.0l}; // long double
  auto var5 {'e'};  // char

  // int modifier suffixes
  auto var6 {123u}; // unsigned
  auto var7 {123ul}; // unsigned long
  auto var8 {123ll}; // long long


  */

  return 0;
}