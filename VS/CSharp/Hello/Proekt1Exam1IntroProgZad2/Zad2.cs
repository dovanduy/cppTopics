using System;
/*
 * Въвеждат се четири числа. 
 * Отпечатайте сумата на трите най-големи числа.
 */
namespace Proekt1Exam1IntroProgZad2
{
    class Zad2
    {
        static void Main(string[] args)
        {
            int n1, n2, n3, n4, minN, sumMaxNums;
            n1 = int.Parse(Console.ReadLine());
            n2 = int.Parse(Console.ReadLine());
            n3 = int.Parse(Console.ReadLine());
            n4 = int.Parse(Console.ReadLine());
            minN = n1;
            if (n2 < minN) minN = n2;
            if (n3 < minN) minN = n3;
            if (n4 < minN) minN = n4;
            sumMaxNums = n1 + n2 + n3 + n4 - minN;
            Console.WriteLine(sumMaxNums);
        }
    }
}