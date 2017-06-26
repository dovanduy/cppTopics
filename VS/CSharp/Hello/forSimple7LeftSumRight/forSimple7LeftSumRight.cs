using System;
/*
 * Да се напише програма, която чете 2*n-на брой цели числа, подадени от потребителя, 
 * и проверява дали сумата на първите n числа (лява сума) е равна на сумата на вторите n числа (дясна сума). 
 * 
 * При равенство печата "Yes" + сумата; иначе печата "No" + разликата. 
 * Разликата се изчислява като положително число (по абсолютна стойност). 
 */
namespace forSimple7LeftSumRight
{
    class forSimple7LeftSumRight
    {
        static void Main(string[] args)
        {
            long n = long.Parse(Console.ReadLine());
            long sum1 = 0, sum2 = 0;
            for (int i = 0; i < n; i++)
            {
                long num = long.Parse(Console.ReadLine());
                sum1 += num;
            };
            for (int i = 0; i < n; i++)
            {
                long num = long.Parse(Console.ReadLine());
                sum2 += num;
            };
            if (sum1==sum2)
                Console.WriteLine("Yes, sum = {0}", sum1);
            else
                Console.WriteLine("No, diff = {0}", Math.Abs(sum1-sum2));
        }
    }
}