1.Write a java program to implement stack operation (Push, Pop). Your class should have an empty constructor. Create two objects to demonstrate the stack operation for 10 items.
class Stack{
int stck[] = new int[1 0];
int tos;
Stack0 {

tos =-1;
void push(int item) {
if(tos = =9)
else

  System.out.printIn("Stack is full.");
  stck[+ +tos] = item;
  int pop0 {
  if(tos < 0) {
    System.out.printIn("Stack underflow.");
   return 0;
} else
  return stck[tos--];
}
}
 lass TestStack {
public static void main(String args[]) {
Stack objl = new Stack0);
Stack obj2= new Stack();
for(int i=0; i<10; i++)
objl.push(i);
for(int i=0; i<10; i++)
obj2.push(i);
System.out.printin("|nFirst Stack: \n");
for(int i=0; i<10; i++)
System.out.printIn(obj1.pop0+"|t");
System.out.printin("InSerond Stack: \n");
for(int i=0; i<10; i++)
System.out.printIn(obj2.pop0+"|t");
}}
  3.Write a Java Program that does the following related to Inheritance: 
a. Create an abstract class called ‘Vehicle’ which contains the 'hashelmet',‘year of manufacture’ and two abstract methods ‘getData()’ and ‘putData()’. Demonstrate the error when attempt is made to create objects of ‘Vehicle’. 
b. Have two derived classes ‘TwoWheeler’ and ‘FourWheeler’, ‘FourWheeler’ is a final class. Demonstrate the error when attempt is made to inherit from ‘FourWheeler’. 
c. Your abstract class should have overloaded constructors that initializes hashelmet and year of manufacture for TwoWheeler and FourWheeler respectively. 
d. ‘TwoWheeler” has data elements ‘Brand’, ‘Cost’, ‘EngineType’ (possible values “2 stroke”, “4 stroke”), and ‘Color’. Demonstrate the various ways in which the two abstract methods can be dealt ‘getData()’ and ‘putData()’ can be dealt with by the derived classes, ‘TwoWheeler’ and ‘FourWheeler’. 
e. The sub-class of ‘TwoWheeler’ called ‘MyTwoWheeler’ has the element ‘OwnerName’. 
f. Use the super keyword to initialize an object of ‘MyTwoWheeler’ with all the values of its parent class data elements. 


 import java.util.*; 
abstract class Vehicle 
{ 
boolean hashelmet; 
int yom; 
abstract void getData(); 
abstract void putData(); 
Vehicle(boolean h,int n) 
{ 
hashelmet=h; 
yom=n; 
} 
} 
class TwoWheeler extends Vehicle 
{ private String Brand; 
protected int Cost; 
String EngineType; 
public String Color; 
TwoWheeler(int n) 
{ 
super(true,n); 
} 
void getData() 
{ Scanner sc=new Scanner(System.in); 
System.out.println("Enter Brand name,Cost,EngineType and Colour"); 
Brand=sc.next(); 
Cost=sc.nextInt(); 
EngineType=sc.next(); 
Color=sc.next(); 
} 
void putData() 
{ 
System.out.println("Brand:"+Brand+"\nCost:"+Cost+"\nEngineType:"+EngineType+"\nColor:"+Color+"\nYear of Manufacture:"+yom+"\nHas helmet:"+hashelmet); 
} 
} 
final class FourWheeler extends Vehicle 
{ 
FourWheeler(int n) 
{ 
super(false,n); 
} 
void getData() 
{ 
} 
void putData() 
{ 
System.out.println("Year of Manufacture:"+yom+"\nHas helmet:"+hashelmet); 
} 
} 
class MyTwoWheeler extends TwoWheeler 
{ 
String name; 
MyTwoWheeler(String name,int n) 
{ 
super(n); 
this.name=name; 
} 
void display() 
{ 
super.getData(); 
putData(); 
System.out.println("Name:"+name); 
} 
} 
/*class A extends FourWheeler 
{ 
A() 
{ 
super(5); 
} 
} 
*/ 
public class Main 
{ 
public static void main(String[] args) { 
/*Vehicle v=new Vehicle(); 
Cannot Create instance of an abstract class*/ 
TwoWheeler t1=new TwoWheeler(1995); 
FourWheeler f1=new FourWheeler(2006); 
t1.getData(); 
t1.putData(); 
f1.putData(); 
} 
}
  4.Write a java program to maintain the student details like USN, Dept names, 3 subject grades and SGPA in student package and keep the staff details such as Staffid, StaffName, designation and subjects handled in a staff package. In main class use these two packages details for Staff and Student classes and display the student and staff information as requested by the user. 

package details;
public class student{
        String name,dept,grade1,grade2,grade3,usn;
        double sgpa,cgpa;
        public student(String n,String u,String d,String g1,String g2,String g3,double s)
        {
                name=n;
                usn=u;
                dept=d;
                grade1=g1;
                grade2=g2;
                grade3=g3;
                sgpa=s;
        }
        public void show()
        {
                System.out.println("student "+name+"with usn:"+usn+"of department "+dept);
                System.out.println("the grades are "+grade1+","+grade2+","+grade3);
        }
}
 package staffdetails;
public class staff
{
        String stname,stdept,stusn,des;
        public staff(String sn,String sd,String su,String d)
        {
                stname=sn;
                stdept=sd;
                stusn=su;
                des=d;
        }
        public void show1()
        {
                System.out.println("the staff name:"+stname+"doing "+des+"with usn:"+stusn+"of department "+stdept);
        }
}


import details.student;
import staffdetails.staff;
public class demo
{
        public static void main(String args[])
        {
                student s=new student("yash","1ms21AI032","AIML","O","O","O",10);
                staff st=new staff("Raj","1ms21AI099","AIML","professor");
                s.show();
                st.show1();
        }
}
  5.Write a java program to keep details of bank customer name and balance in MyPack package, Initialize using contractors and define display function. In main class use this package and pass the information (name and balance) and display using display function. 

package MyPack;
public class Balance{
String name;
double bal;
public Balance(String n, double b)
{
name=n;
bal=b;
}
public void show()
{
if (bal>0)
System.out.println(name+" "+bal);
}
}

import MyPack.Balance;
class TestBalance
{
public static void main(String args[])
{
Balance test=new Balance("abc",99.8);
test.show();
}
}
 6
Write a Java program to create 2 threads to perform the following operations. (Extend Thread class)
Thread 1 will print all the prime numbers from 1 to 100. Thread will sleep for 0.5 second after printing every number.	

Thread 2 will print all the numbers from 1 to 100 which are divisible by 2, 4, & 6. Thread will sleep for 0.5 second after printing every number.
import java.lang.*;
import java.io.*;
import java.util.*;
class Prime extends Thread
{
	public void run()
	{
		try
		{
			int i =0;
       int num =0;
       //Empty String
       //String  primeNumbers = "";
        System.out.println(“Thread-1: Prime Thread”);

       for (i = 1; i <= 100; i++)         
       { 		  	  
          int counter=0; 	  
          for(num =i; num>=1; num--)
	  {
             if(i%num==0)
	     {
 		counter = counter + 1;
	     }
	  }
	  if (counter ==2)
	  {
	     //Appended the Prime number to the String
             System.out.println(“PrimeNumber: ” + i);
	     //primeNumbers = primeNumbers + i + " ";
	  }	
       }	
       //System.out.println("Prime numbers from 1 to 100 are :");
       //System.out.println(primeNumbers);
   }
		catch (Exception e){}
	}
}
class printeven extends Thread
{
	public void run()
	{
		try
		{
                  System.out.println(“Thread-2: Even Thread”);
			for(int i=1;i<=100;i++)
			{
				if(i%2==0)
				{
			      System.out.println ("Prime No.= "+i);
                               System.out.println();
				}
				Thread.sleep(500);
			}
		}
		catch (Exception e){}
	}
}
class MainThread
{
	public static void main(String args[])
	{
		Prime primethread = new Prime();
                 printeven peventhread = new printeven();
              
                 primethread.start();
                 peventhread.start();
	}
}	
7.class MultithreadDemo1 implements Runnable
public void run {
system.out.println("Thread 1');
forCint Erg; 15550; 14)
int counter=0;
for (int num =i; num>=1; num--){
1f(i%num==0){
counter = counter + 1;
if (counter ==2)4
system. out.print]n("prime Number (1 - 50): " + i);
Thread. sleep (500);
}
catch (InterruptedException e){
system.out.println("Caught: " + e);
}
}}}
  class MultithreadDemo2 implements Runnable
public void run {
system.out.println("Thread 1');
forCint Erg; 15550; 14)
int counter=0;
for (int num =i; num>=1; num--){
1f(i%num==0){
counter = counter + 1;
if (counter ==2)4
system. out.print]n("prime Number (1 - 50): " + i);
Thread. sleep (500);
}
catch (InterruptedException e){
system.out.println("Caught: " + e);
}

}
  }
}
public class Main{
public static
void main(String args[]){
MultithreadDemo1 obji=new MuitithreadDemol
Thread threadobj1=new Thread(obj1);
MultithreadDemo2
nureadhreadbens?Cobj2-new muTtithreadDemo?
Thread threadobj2 = new Thread (obj2);
threadobj2.start();


