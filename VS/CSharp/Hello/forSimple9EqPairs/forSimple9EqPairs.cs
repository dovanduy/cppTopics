using System;
/*
 * 9.	Еднакви двойки
 * 
 * Дадени са 2*n-на брой числа. Първото и второто формират двойка, третото и четвъртото също и т.н. 
 * Всяка двойка има стойност – сумата от съставящите я числа. 
 * 
 * Напишете програма, която проверява дали всички двойки имат еднаква стойност 
 * или печата максималната разлика между две последователни двойки. 
 * 
 * Ако всички двойки имат еднаква стойност, отпечатайте "Yes, value={Value}" + стойността. 
 * В противен случай отпечатайте "No, maxdiff={Difference}" + максималната разлика.
 * 
 * https://judge.softuni.bg/Contests/Practice/Index/616#8
 * */
namespace forSimple9EqPairs
{
    class forSimple9EqPairs
    {
        static void Main(string[] args)
        {
            long n = long.Parse(Console.ReadLine()) ;
            long nm1 = long.Parse(Console.ReadLine()) ;
            long nm2 = long.Parse(Console.ReadLine()) ;
            long maxDiff = 0;
            long sum = nm1 + nm2;
            for (int i = 0; i < n-1; i++)
            {
                long num1 = long.Parse(Console.ReadLine());
                long num2 = long.Parse(Console.ReadLine());
                long sum2 = num1 + num2;
                //Console.WriteLine("sum={0} sum@={1}", sum, sum2);
                maxDiff = Math.Max(maxDiff, Math.Abs(sum-sum2));
                sum = sum2 ;
            };
            if (maxDiff==0)
                Console.WriteLine("Yes, value={0}", sum);
            else
                Console.WriteLine("No, maxdiff={0}", maxDiff);
        }
    }
}