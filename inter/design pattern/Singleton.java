// Classical Java implementation of singleton
// design pattern

//not thread safe

class Singleton
{
    private static Singleton obj;
 
    // private constructor to force use of
    // getInstance() to create Singleton object
    private Singleton() {}
 
    public static Singleton getInstance()
    {
        if (obj==null)
            obj = new Singleton();
            
        return obj;
    }
}

// Thread Synchronized Java implementation of
// singleton design pattern
class Singleton
{
    private static Singleton obj;
 
    private Singleton() {}
 
    // Only one thread can execute this at a time
    public static synchronized Singleton getInstance()
    {
        if (obj==null)
            obj = new Singleton();
        return obj;
    }
}

//Here using synchronized makes sure that only one thread at a time can execute getInstance(). 
//The main disadvantage of this is method is that using synchronized every time while
// creating the singleton object

// is expensive and may decrease the performance of your program. However if performance
//of getInstance() is not critical for your application this method provides a clean and simple solution.
