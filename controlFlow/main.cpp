// #include <iostream>

// bool car()
// {
//     std::cout << "car function running" << std::endl;
//     return true;
// }

// bool house()
// {
//     std::cout << "house function running" << std::endl;
//     return false;
// }

// bool job()
// {
//     std::cout << "job function running" << std::endl;
//     return true;
// }

// bool spouse()
// {
//     std::cout << "spouse function running" << std::endl;
//     return true;
// }

// int main()
// {

//     // ******************************* Short Circuit Evaluations *********************

//     /*
//         Notes -

//             - Computing some of the operands in the expression can be expensive. If short circuit is possible, such expensive computations can be avoided
//     */

//     /*

//      bool a {true};
//      bool b {true};
//      bool c {true};
//      bool d {true};

//      bool p {false};
//      bool q {false};
//      bool r {false};
//      bool m {true};

//      // AND : If one of the operands is 0, the result is 0
//      std::cout << std::endl;
//      std::cout << "AND short circuit" << std::endl;
//      bool result = a && b && c && d;
//      std::cout << "result : " << std::boolalpha << result << std::endl;

//      // OR : If one of the operands is 1, the result is 1.
//      std::cout << std::endl;
//      std::cout << "OR short circuit" << std::endl;
//      result = p || q || r || m;
//      std::cout << "result : " << std::boolalpha << result << std::endl;

//      // Testing the short circuit

//      if(car() && house() && job() && spouse()){
//          std::cout << "I am happy" << std::endl;
//      }else{
//          std::cout << "I am sad" << std::endl;
//      }

//      */

//     // ************************************************* Integral Logic Conditions ******************************

//     /*

//      Note-
//          - Any number different than 0, or expression evaluating to something other than 0 will be evaluated as true
//          - Any number equal to 0, or expression evaluating to 0 will be evaluated as false
//     */

//     /*
//     int item_count {-3};

//     if(item_count){
//      std::cout << "We have items in the bag." << item_count << " to be exact" << std::endl;
//     }else{
//      std::cout << "Sorry ! You have no item in the bag" << std::endl;
//     }
//     */

//     // *************************************************** Ternary Operators ***************************************

//     /*
//         Note :

//             - result = (condition) ? option1 : option2;
//             - The option1 and option2 should be of same type or the type that can be converted.
//     */

//     /*

//     int max {};
//     int a {10};
//     int b {20};

//     max = (a > b) ? a : b;

//     std::cout << "max : " << max << std::endl;

//    */

//     // *********************************************** If constexpr ***********************************

//     /*
//         Notes -

//             - Introduced in C++17
//             - This allows us to do conditional programming at compile time.
//             - In the if constexpr(condition). The condition you pass must me a const or a constexpr
//             - The code below is checked at compile time
//     */

//    /*

//    constexpr bool condition {false};

//    if constexpr(condition){
//     std::cout << "Condition is true" << std::endl;
//    }else{
//     std::cout << "Condition is not true" << std::endl;
//    }

//    */

//   // ************************************************ if with Initializer ****************************

//   /*
//     Notes - 

//         - We use the if with initializer so that we don't pollute the global scope with variable declarations
//         - Using if with we can allow access of the variable inside if , else and elseif without needing to declare them globally.
//   */

//     /*

//     // Normal if else
//     bool go {false};
//     int high_speed {300};


//     if(go){
//         if (high_speed > 150)
//         {
//             std::cout << "Speed is : " << high_speed << std::endl;
//         }else{
//             std::cout << "Low Speed" << std::endl;
//         }
        
//     }else{
//         std::cout << "Stop! your speed is : " << high_speed << std::endl;
//     } 

//     // With if initializer
//     if(int low_speed {40}; go){
//          if (low_speed > 150){
//             std::cout << "Speed is : " << low_speed << std::endl;
//         }else{
//             std::cout << "Low Speed" << std::endl;
//         }
//     }else{
//         std::cout << "Stop! your speed is : " << low_speed << std::endl;
//     } 

//     // std::cout << low_speed << std::endl; // Gives compiler error as low_speed is only accesible insde the if and else

//     */

//    // ************************************************** Switch with Initializer ********************************

//    // Same as the above if initializer expect we use syntax of switch

//    // The variable inside switch block can be accessed anywhere inside switch block

//    // You cannot initialize variables in a switch case. You can only declare a variable and assign the value later on

//     return 0;
// }