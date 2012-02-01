using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] lines = System.IO.File.ReadAllLines(@"C:\stardata");
            for (int i = 1; i < lines.Count(); i += 4)
            {
                string[] currentSystem = lines[i + 1].Split(',');
                string[] destinationSystem = lines[i + 3].Split(',');
                double distance = Math.Sqrt((double)(Math.Pow((double)(double.Parse(currentSystem[0]) - double.Parse(destinationSystem[0])), (double)2) + Math.Pow((double)(double.Parse(currentSystem[1]) - double.Parse(destinationSystem[1])), 2) + Math.Pow((double)(double.Parse(currentSystem[2]) - double.Parse(destinationSystem[2])), 2)));
                Console.WriteLine(lines[i] + " to " + lines[i + 2] + ": " + (int)(distance * 100) / 100.0f);
            }
        }
    }
}