
#include <iostream>
using namespace std;


struct MyException : public exception {
   const char * what () const throw () {
      return "C++ Exception";
   }
};
 


int main(void) {

	//ellipes om catcj-block
    //the catch block with ... will handle all type of exceptio , including memory protection fault , devide by zero
    //it must  be the last handle for its try block  

    try{
throw 1;
    }
    catch(...){ //... will handle all types of erro
cout << "some exception handle\n";
    }

    //nested try catch
    try{
        try{
            int n = 2;
throw (n!=2 ? 1 : 0);
        }
        catch(int n){
throw ; // rethrow to outer handler
        }
    }
    catch(...){ //... will handle all types of erro
cout << "some exception handle\n";
    }
  
  ///////////////
  try {
      throw MyException();
   } catch(MyException& e) {
      std::cout << "MyException caught" << std::endl;
      std::cout << e.what() << std::endl;
   } catch(std::exception& e) {
      //Other errors
   }
	return 0;
}

/*
1	
std::exception

An exception and parent class of all the standard C++ exceptions.

2	
std::bad_alloc

This can be thrown by new.

3	
std::bad_cast

This can be thrown by dynamic_cast.

4	
std::bad_exception

This is useful device to handle unexpected exceptions in a C++ program.

5	
std::bad_typeid

This can be thrown by typeid.

6	
std::logic_error

An exception that theoretically can be detected by reading the code.

7	
std::domain_error

This is an exception thrown when a mathematically invalid domain is used.

8	
std::invalid_argument

This is thrown due to invalid arguments.

9	
std::length_error

This is thrown when a too big std::string is created.

10	
std::out_of_range

This can be thrown by the 'at' method, for example a std::vector and std::bitset<>::operator[]().

11	
std::runtime_error

An exception that theoretically cannot be detected by reading the code.

12	
std::overflow_error

This is thrown if a mathematical overflow occurs.

13	
std::range_error

This is occurred when you try to store a value which is out of range.

14	
std::underflow_error
*/
