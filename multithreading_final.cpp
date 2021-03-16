#include <iostream> 
#include <thread>
#include <string>
#include <mutex>

using namespace std; 
  
// A dummy function 
void foo(int Z,string t_name) 
{ 
    for (int i = 0; i < Z; i++) { 
        cout <<endl << t_name << " :" << i ;
    } 
}
void fooInsertString(int Z) {
    for (int i = 0; i < Z; i++) { 
        cout <<endl << "thread 2";
    }
} 

  
int main() 
{   
    
    // This thread is launched by using  
    // function pointer as callable 
    thread th1(foo, 100, "thread 1"); 
  
    // This thread is launched by using 
    // function object as callable 
    thread th2(fooInsertString, 100);
    thread th3(foo,100,"thread 3");
    // for (int i =0; i < 20; i++) {
    //     cout <<endl << i;
    // } 
    for(int i =0; i < 100; i++) {
    cout << "\n thread main : " << i;
    }
    // Define a Lambda Expression 
    // This thread is launched by using  
    // lamda expression as callable 
    //thread th3(foo, 3, "thread 3"); 
  
    // Wait for the threads to finish 
    // Wait for thread t1 to finish 
    th1.join(); 
  
    // Wait for thread t2 to finish 
    th2.join(); 
  
    // Wait for thread t3 to finish 
    th3.join(); 
    cout << "\n thread done";
  
    return 0; 
} 