/*
Synchronization is the process of allowing only one thread
at a time to complete the particular task.
It means when multiple threads executing simultaneously, and want to access the same resource at the same time, 
then the problem of inconsistency will occur, so synchronization is used to resolve inconsistency problem by
allowing only one thread at a time.

Synchronization uses a synchronized keyword. Synchronized is the modifier that creates
 a block of code known as a critical section. 
*/

class A {

	synchronized void sum(int n)
	{

		// Creating a thread instance

		//The currentThread() method of thread class is used to return a reference to the currently executing thread object
		
		Thread t = Thread.currentThread();

		for (int i = 1; i <= 5; i++) 
		{
			System.out.println(
				t.getName() + " : " + (n + i));
		}
	}
	
}

// Class B extending thread class
class B extends Thread {

	// Creating an object of class A
	A a = new A();
	public void run()
	{

		// Calling sum() method
		a.sum(10);
	}
}

class Test {
	public static void main(String[] args)
	{

		// Creating an object of class B
		B b = new B();

		//B extends thread class


		// Initializing instance t1 of Thread
		// class with object of class B
        
		//As b in bracket of thread

		Thread t1 = new Thread(b);

		// Initializing instance t2 of Thread
		// class with object of class B
		Thread t2 = new Thread(b);

		// Initializing thread t1 with name
		//'Thread A'
		t1.setName("Thread A");

		// Initializing thread t2 with name
		//'Thread B'
		t2.setName("Thread B");

		// Starting thread instance t1 and t2
		t1.start();
		t2.start();
	}
}
