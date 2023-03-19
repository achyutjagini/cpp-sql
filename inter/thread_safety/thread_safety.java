//A volatile keyword is a field modifier that ensures that the object can be used by
//multiple threads at the same time without having any problem. volatile is one good way
//of ensuring that the Java program is thread-safe. 
//a volatile keyword can be used as an alternative way of achieving Thread Safety in Java.

//threat.start() runs thread and calls run method in thread class
 
//start method of thread class is implemented as when it is called a new
// Thread is created and code inside run() method is executed in that new Thread

public class thread_safety {

	// Initializing volatile variables
	// a, b
	static volatile int a = 0, b = 0;

	// Defining a static void method
	static void method_one()
	{
		a++;
		b++;
	}

	// Defining static void method
	static void method_two()
	{
		System.out.println("a=" + a + " b=" + b);
	}


    //static methods called in main without need to create objects
    // in main create instance of thread classes

	public static void main(String[] args)
	{

		// Creating an instance t1 of
		// Thread class
		
		Thread t1 = new Thread() 
		{
			public void run()
			{
				for (int i = 0; i < 5; i++)
					method_one();
			}
		};

		// Creating an instance t2 of
		// Thread class

		Thread t2 = new Thread() 
		{
			public void run()
			{
				for (int i = 0; i < 5; i++)
					method_two();
			}
		};

		// Starting instance t1 and t2
		t1.start();
		t2.start();
	}
}
