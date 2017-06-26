using System;
/*
 * Напишете програма, която чете n-на брой цели числа (n > 0), въведени от потребителя, 
 * и намира най-малкото измежду тях.
 * 
 * Първо се въвежда броят числа n, 
 * а след това самите n числа, по едно на ред. 
 */
namespace forSimple5MaxNum
{
    class forSimple5MaxNum
    {
        static void Main(string[] args)
        {
            long n = long.Parse(Console.ReadLine());
            long min = long.Parse(Console.ReadLine());
            for (int i = 0; i < n - 1; i++)
            {
                long num = long.Parse(Console.ReadLine());
                if (num < min) min = num;
            }
            Console.WriteLine(min);
        }
    }
}