1
Write a java program to display the employee details (ID, Name, Age, Salary) for three employees. Read details using Scanner class.  Display the names of employees in the order of their age.

import java.util.Scanner;

public class Employee {

 int empid;
 String name;
 float salary;
 
 public void getInput() {
 
  Scanner in = new Scanner(System.in);
  System.out.print("Enter the empid :: ");
  empid = in.nextInt();
  System.out.print("Enter the name :: ");
  name = in.next();
  System.out.print("Enter the salary :: ");
  salary = in.nextFloat();
 }
 
 public void display() {
  
  System.out.println("Employee id = " + empid);
  System.out.println("Employee name = " + name);
  System.out.println("Employee salary = " + salary);
 }
 
 public static void main(String[] args) {
 
  Employee e[] = new Employee[5];
  
  for(int i=0; i<5; i++) {
   
   e[i] = new Employee();
   e[i].getInput();
  }
  
  System.out.println("**** Data Entered as below ****");
  
  for(int i=0; i<5; i++) {
   
   e[i].display();
  }
 }
}
2
Create a File Sales.java that should contain a Java program that prompts for and reads in the sales for each of 5 salespeople in a company. It should then prints out the id and amount of sales for each salesperson and the total sales. Now modify the program as follows:
Compute and print the average sale. (You can compute this directly from the total; no loop is necessary.)
Find and print the maximum sale. Print both the id of the salesperson with the max sale and the amount of the sale, e.g., "Salesperson 3 had the highest sale with $4500." Note that you don't need another loop for this; you can do it in the same loop where the values are read and the sum is computed.
Do the same for the minimum sale.
Ask the user to enter a value. Then print the id of each salesperson who exceeded that amount, and the amount of their sales. 


import java.util.Scanner;
public class Sales
{
public static void main(String[] args)
{
final int SALESPEOPLE = 5;
int[] sales = new int[SALESPEOPLE];
int sum;
Scanner scan = new Scanner(System.in);
for (int i=0; i&lt;sales.length; i++)
{
System.out.print(&quot;Enter sales for salesperson&quot;+i+&quot;:&quot;);
sales[i] = scan.nextInt();

}
System.out.println(&quot;\nSalesperson Sales&quot;);
System.out.println(&quot; &quot;);
sum = 0;
for (int i=0; i&lt;sales.length; i++)
{
System.out.println(&quot; &quot; + i + &quot; &quot; + sales[i]);
sum += sales[i];
}
System.out.println(&quot;\nTotal sales: &quot; + sum);
}
}


3
Write a Java Program that does the following 
a. Create a super class called Car. The Car class has the following fields and methods. 
int speed; double regularPrice; String color; double getSalePrice(); 
b. Create a sub class of Car class and name it as Truck. The Truck class has the following fields and methods. 
 int weight; double getSalePrice(); 
/If weight>2000,10% discount. Otherwise,20%discount. 
c. Create a subclass of Car class and name it as Ford. The Ford class has the following fields and methods 
 int year; int manufacturerDiscount; double getSalePrice(); 
//From the sale price computed from Carclass, subtract the manufacturer Discount. 
d. Create a subclass of Car class and name it as Sedan. The Sedan class has the following fields and methods. 
 int length; double getSalePrice(); 
//If length>20 feet, 5% discount, Otherwise, 10% discount. 
e. Create MyOwnAutoShop class which contains the main() method. Perform the following within the main() method. 
f. Create an instance of Sedan class and initialize all the fields with appropriate values. 
g. Use super(...) method in the constructor for initializing the fields of the superclass. 
h. Create an instance of the Ford class and initialize all the fields with appropriate values 
i. Use super(...) method in the constructor for initializing the fields of the super class. 
j. Create an instance of Car class and initialize all the fields with appropriate values. Display the sale prices of all instances. 

class Car 
{ 
int speed; 
double regularPrice; 
String color; 
Car(int s,double price,String c) 
{ 
speed=s; 
regularPrice=price; 
color=c; 
} 
double getSalePrice() 
{ 
return regularPrice; 
} 
} 
class Truck extends Car 
{ int weight; 
Truck(int s,double price,String c,int w) 
{ 
super(s,price,c); 
weight=w; 
} 
double getSalePrice() 
{ 
if(weight>2000) 
{ regularPrice=regularPrice*0.9; 
return regularPrice; 
} 
else 
{ regularPrice=regularPrice*0.8; 
return regularPrice; 
} 
} 
} 
class Ford extends Car 
{ int manufacturerDiscount,year; 
Ford(int s,double price,String c,int m) 
{ 
super(s,price,c); 
manufacturerDiscount=m; 
} 
double getSalePrice() 
{ 
regularPrice-=manufacturerDiscount; 
return regularPrice; 
} 
} 
class Sedan extends Car 
{ int length; 
Sedan(int s,double price,String c,int l) 
{ 
super(s,price,c); 
length=l; 
} 
double getSalePrice() 
{ 
if(length>20) 
{ regularPrice=regularPrice*0.95; 
return regularPrice; 
} 
else 
{ regularPrice=regularPrice*0.9; 
return regularPrice; 
} 
} 
} 
public class MyOwnAutoShop 
{ 
public static void main(String[] args) { 
Truck t=new Truck(65,2500000,"Red",3000); 
System.out.println("Price of truck is "+t.getSalePrice()); 
Car c = new Car(100,800000,"Black"); 
System.out.println("Price of Car is "+c.getSalePrice()); 
Ford f=new Ford(120,2200000,"Yellow",1 20000); 
System.out.println("Price of ford is "+f.getSalePrice()); 
Sedan s= new Sedan(100,3500000,"Blue",22); 
System.out.println("Price of Sedan is "+s.getSalePrice()); 
} 
}


4
Write a Java Program that implements the following 
a. Define a class SavingsAccount with following characteristics. 
 b. Use a static variable annualInterestRate to store the annual interest rate for all account holders. 
c. Private data member savingsBalance indicating the amount the saver currently has on deposit. 
D. Method calculateMonthlyInterest to calculate the monthly interest as (savingsBalance * annualInterestRate / 12). After calculation, the interest should be added to savingsBalance. 
e. Static method modifyInterestRate to set annualInterestRate. 
f. Parameterized constructor with savingsBalance as an argument to set the value of that instance. 
g.  Test the class SavingsAccount to instantiate two savingsAccount objects, saver1 and saver2, with balances of Rs.2000.00 and Rs3000.00, respectively. Set annualInterestRate to 4%, then calculate the monthly interest and print the new balances for both savers. Then set the annualInterestRate to 5%, calculate the next month’s interest and print the new balances for both savers. 


 class SavingsAccount 
{ 
static int annualInterestRate; 
private double savingsBalance; 
SavingsAccount(double s) 
{ 
savingsBalance=s; 
} 
static void modifyInterestRate(int x) 
{ 
annualInterestRate=x; 
} 
void calculateMonthlyInterest() 
{ 
double d=(savingsBalance*annualInterestRate)/12; 
savingsBalance=savingsBalance+d; 
} 
void display() 
{ 
System.out.println(savingsBalance); 
} 
} 
public class Main 
{ 
public static void main(String[] args) { 
SavingsAccount saver1=new SavingsAccount(2000); 
SavingsAccount saver2=new SavingsAccount(3000); 
SavingsAccount.modifyInterestRate(4); 
saver1.calculateMonthlyInterest(); 
saver2.calculateMonthlyInterest(); 
saver1.display(); 
saver2.display(); 
SavingsAccount.modifyInterestRate(5); 
saver1.calculateMonthlyInterest(); 
saver2.calculateMonthlyInterest(); 
saver1.display(); 
saver2.display(); 
} 
}
5
Java program to find area of rectangle & triangle using Interface.

public interface Area 
{
	double Compute(double a, double b);
}
class Rectangle implements Area
{
	public double Compute(double l, double b)
	{
		return (l*b);
	}
}

class Triangle implements Area
{
	public double Compute(double b, double h)
	{
		return (b*h/2);
	}
}

public class MainArea 
{
	public static void main(String args[])
	{
		Rectangle rect = new Rectangle();
		double RArea = rect.Compute(10, 20);
		System.out.println("The area of the Rectangle is "+RArea);
		
		Triangle tri = new Triangle();
		double TArea = tri.Compute(10, 20);
		System.out.println("The area of the triangle is "+TArea);
				
	}
}


6
Write a java program to multiply two given matrices.

public class MatrixMultiplicationExample{  
public static void main(String args[]){  
//creating two matrices    
int a[][]={{1,1,1},{2,2,2},{3,3,3}};    
int b[][]={{1,1,1},{2,2,2},{3,3,3}};    

//creating another matrix to store the multiplication of two matrices    
int c[][]=new int[3][3];  //3 rows and 3 columns  

//multiplying and printing multiplication of 2 matrices    
for(int i=0;i<3;i++){    
for(int j=0;j<3;j++){    
c[i][j]=0;      
for(int k=0;k<3;k++)      
{      
c[i][j]+=a[i][k]*b[k][j];      
}//end of k loop  
System.out.print(c[i][j]+" ");  //printing matrix element  
}//end of j loop  
System.out.println();//new line    
}    
}}  


7
Write a Java program to display an exception when we attempt to divide any number by zero. Also demonstrate how it can be handled using exception handling. 

import java.io.*;
class GFG {
    public static void main(String[] args)
    {
        int a = 5;
        int b = 0;
        try {
            System.out.println(a / b); // throw Exception
        }
        catch (ArithmeticException e) {
            // Exception handler
            System.out.println("Divided by zero operation cannot possible");
        }
    }
}


8
Write a Java program to demonstrate exception handling using try, multiple catch block and finally block. Throw an error in try block to handle array out of bound index. 

public class Main {  
    public static void main(String[] args) {  
        //try block containing exception prone code
        try{    
            System.out.println("try Block:: Begin");  
            int myArray[]=new int[5];    
            myArray [5]=10/0;    
        } 
        //multiple catch blocks
        catch(ArithmeticException e)  
        {  
            System.out.println("Arithmetic Exception :: Divide by zero!!");  
        }
        catch(ArrayIndexOutOfBoundsException e)  
        {  
            System.out.println("ArrayIndexOutOfBounds :: Accessed index out of bounds");  
        } 
        catch(Exception e)  
        {  
            System.out.println("Exception :: " + e.getMessage ());  
        }       
        System.out.println("rest of the code");    
    }  
}  



