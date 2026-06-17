using System;


class Claculator
{
    private double num1, num2;

    public void GetNumbers()
    {
        Console.Write("Enter first number: ");
        num1 = Convert.ToDouble(Console.ReadLine());

        Console.Write("Enter second number: ");
        num2 = Convert.ToDouble(Console.ReadLine());
    }

    public void DisplayResults()
    {
        Console.WriteLine("\nResults:");
        Console.WriteLine("Sum = " + (num1 + num2));
        Console.WriteLine("Product = " + (num1 * num2));
        Console.WriteLine("Difference = " + (num1 - num2));
         if (num2 != 0)
        {
            Console.WriteLine("Quotient = " + (num1 / num2));
        }
        else
        {
            Console.WriteLine("Quotient = Cannot divide by zero");
        }
    }
}


class Program
{
    static void Main()
    {
        Console.Write("Enter a number: ");
        int n = Convert.ToInt32(Console.ReadLine());

        if (n%2==0)
        {
             Console.WriteLine("The number is Even");
        } else
        {
            Console.WriteLine("The number is Odd");
        }

    }
}