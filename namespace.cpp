
#include <iostream>
using namespace std;

int x= 1000 ;
int y= 2000 ;

namespace first
{
     int x = 200 ;
     void func(){
         x  = 100 ; //first::x = 100 
     }
};

namespace second{
    int y = 400;
    void func(){
         y = 300 ;//second::y = 300 
    }
}

// namespace ns
// {
//     // A Class in a namespace
//     class geek
//     {
//     public:
//         void display();
//     };

// void ns::geek::display()
// {
//     cout << "ns::geek::display()\n";
// }

// }
namespace ns
{
    class greek;
   
};

class ns::greek
    {
    public:
        void display()
        {
            cout << "ns::geek::display()\n";
        }
    };
    


int main()
{
    cout << x <<endl;
  cout << y <<endl <<endl;
  
//     cout << first::x <<endl;
//   cout << second::y <<endl<<endl;

//  first::func() ;
//   second::func();

// cout << first::x <<endl;
//   cout << second::y <<endl <<endl;
  
  ns2::greek obj;
  obj.display();
  
    return 0;
}
