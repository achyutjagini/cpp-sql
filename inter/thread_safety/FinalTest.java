
//Final Variables are also thread-safe in java because once 
//assigned some reference of an object It cannot 
//point to reference of another object. 


public class FinalTest {
 
    // Initializing a string
    // variable of final type
    final String str = new String("hello");
 
    // Defining a method to
    // change the value of the final
    // variable which is not possible,
    // hence the error will be shown
    void method()
    {
        str = "world";
    }
}