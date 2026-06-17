using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.Metadata;

class Student
{
   public string Name;
    public int Roll, Marks;
}


class Program
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());

        Student[] students = new Student[n];


        for(int i = 0; i< n; i++)
        {
            string[] data = Console.ReadLine().Split();

            students[i] = new Student
            {
                Name = data[0],
                Roll = int.Parse(data[1]),
                Marks= int.Parse(data[2])

            };
        }

        var sortedSutdents = students.OrderByDescending(s => s.Marks).ThenBy(s => s.Roll);

        foreach(var s in sortedSutdents)
        {
            Console.WriteLine($"{s.Name} {s.Roll} {s.Marks}");
        }
    }
}