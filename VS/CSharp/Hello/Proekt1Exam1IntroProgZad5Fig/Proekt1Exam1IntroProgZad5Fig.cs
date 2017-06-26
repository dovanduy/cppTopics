using System;

namespace Proekt1Exam1IntroProgZad5Fig
{
    class Proekt1Exam1IntroProgZad5Fig
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            for (int cols = 0; cols < n; cols++)
            {
                for (int rows = 0; rows < n; rows++)
                {
                    if (rows > cols)
                        Console.Write("S");
                    else if (rows == cols)
                        Console.Write("+");
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
    }
}
