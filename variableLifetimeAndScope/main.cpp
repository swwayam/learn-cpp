#include <iostream>

int static_var2{80}; // static duration : dies when program ends

void some_function(){
    int local_var3 {30}; // local (automatic) duration : dies at end of block
    static int static_var1 {40}; // static duration : dies when program ends
    int dynamic_var1 {50}; // You decide when it dies
}


int main(){

    // **************************************** Variable Lifetime ******************************

    /*
        Notes :

            - The period of time in which a variable is alive in memory. It becomes alive when you declare it and it is killed (wiped out) from memory at some point.
            - When the variable will be killed is decided by storage duration.
            - Storage Duration : local (block, automatic), static, dynamic

    */

   /*

   int local_var1 {10}; // local (automatic) duration : dies at end of block
   int dynamic_var2 {60}; // you decide when it dies

    {
        int local_var2 {20}; // local (automatic) duration : dies at end of block
        int dynamic_var3 {70}; // You decide when it dies
    }

    */

   // ************************************** Variable Scope *************************

   /*
        Notes :
            - A region in your code where a variable name can be mentioned. You may be reading from it. Writing into it, basically using it in any conceivable way.
            - Trying to use a variable out of it's scope will result in compiler error.
   */

  
    return 0;
}