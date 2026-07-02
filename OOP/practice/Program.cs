using System;

class Student
{
    private string name;

    public Student(string name)
    {
        this.name = name;
    }

    public string GetName()
    {
        return name;
    }
}


class Animal
{
    public void Eat()
    {
        Console.WriteLine("Eating....");
    }

    public virtual void Sound()
    {
        Console.WriteLine("Animal Sound");
    }
}

class Dog : Animal
{
    public void  Bark()
    {
        Console.WriteLine("Barking...");
    }


    public override void Sound()
    {
        Console.WriteLine("vok vok vok...");
    }
}

abstract class Vehicle
{
    public abstract void isStart();
}


class Car : Vehicle
{
    public override void isStart()
    {
        Console.WriteLine("Car Started");
    }
}


class Program
{
    static void Main()
    {
        Console.Write("Enter student name: ");
        string name = Console.ReadLine();

        Student student = new Student(name);

        Console.WriteLine($"Student Name: {student.GetName()}");


        Dog dog = new Dog();

        dog.Bark();
        dog.Eat();
        dog.Bark();
        dog.Sound();

        Car car = new Car();

        car.isStart();


        int a = 20, b = 15;

        int larger = (a>b) ? a: b;

        Console.WriteLine("Largest =  "+larger);

        int smaller = (a<b) ? a: b;

        Console.WriteLine("Smaller = "+ smaller);

        
        Console.WriteLine($"Hello {name}");

        Console.Write("Enter Arithmatic operation: ");
        char op = Convert.ToChar(Console.ReadLine());

        switch(op)
        {
            case '+':
                Console.WriteLine(a+b);
                break;
            case '-': 
                Console.WriteLine(a-b);
                break;
            case '*':
                Console.WriteLine(a*b);
                break;
            case '/': 
                Console.WriteLine(a /b);
                break;
            default:
                Console.WriteLine("Invalid Operator");
                break;
        }


        for(int i=0; i<=5; i++)
        {
            if(i == 3) 
                break;

            Console.WriteLine("loop runs: "+i);
        }

    }
}