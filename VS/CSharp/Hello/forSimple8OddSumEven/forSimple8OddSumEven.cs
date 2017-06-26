using System;

namespace forSimple8OddSumEven
{
    class forSimple8OddSumEven
    {
        static void Main(string[] args)
        {
            long n = long.Parse(Console.ReadLine());
            long sumOdd = 0, sumEven = 0;
            for (int i = 0; i < n; i++)
            {
                long num = long.Parse(Console.ReadLine());
                if (i % 2 == 0)
                    sumEven += num;
                else
                    sumOdd += num;
            };
            if (sumEven==sumOdd)
                Console.WriteLine("Yes\nSum = {0}", sumOdd);
            else
                Console.WriteLine("No\nDiff = {0}", Math.Abs(sumEven-sumOdd));
        }
    }
}