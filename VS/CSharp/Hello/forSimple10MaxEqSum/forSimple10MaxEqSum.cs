using System;
/* Елемент, равен на сумата на останалите
 * 
 * Да се напише програма, която чете n-на брой цели числа, въведени от потребителя, 
 * и проверява дали сред тях съществува число, което е равно на сумата на всички останали. 
 * 
 * Ако има такъв елемент, печата "Yes", "Sum = "  + неговата стойност; иначе 
 * печата "No", "Diff = " + разликата между най-големия елемент и сумата на останалите (по абсолютна стойност).
 * */
// https://judge.softuni.bg/Contests/Practice/Index/616#9
namespace forSimple10MaxEqSum
{
    class forSimple10MaxEqSum
    {
        static void Main(string[] args)
        {
            long n = long.Parse(Console.ReadLine());
            long num = long.Parse(Console.ReadLine());
            long sum = num, maxNum = num;
            for (int i = 0; i < n-1; i++)
            {
                num = long.Parse(Console.ReadLine());
                sum += num;
                if (num > maxNum) maxNum = num;
            };
            sum = sum - maxNum;
            if (sum==maxNum)
                Console.WriteLine("Yes\nSum = {0}", sum);
            else
                Console.WriteLine("No\n Diff = {0}", Math.Abs(sum-maxNum));
        }
    }
}