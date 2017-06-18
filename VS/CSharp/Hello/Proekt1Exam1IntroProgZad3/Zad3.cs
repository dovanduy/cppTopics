using System;
/*
 * Въвеждат се три цели числа.
 * От всяко въведено число си взимаме най-голямата цифра. 
 * С тези три цифри си образуме възможно най- малкото число. 
 * Отпечатаите това най-малко число. 
 * */
namespace Proekt1Exam1IntroProgZad3
{
    class Zad3
    {
        static int maxDig(int n)
        { // returns MaxOfLast3Digits of n
            int maxDig = n / 10 % 10;
            if (maxDig < n % 10) maxDig = n % 10;
            if (maxDig < n / 100 % 10) maxDig = n / 100 % 10;
            return maxDig;
        }

        static void Main(string[] args)
        {
            int n1 = int.Parse(Console.ReadLine());
            if (n1 < 0) n1 = -n1;
            int n2 = int.Parse(Console.ReadLine());
            if (n2 < 0) n2 = -n2;
            int n3 = int.Parse(Console.ReadLine());
            if (n3 < 0) n3 = -n3;
            int max1 = maxDig(n1);
            int max2 = maxDig(n2);
            int max3 = maxDig(n3);
            int result;
            if (max1 >= max2 && max2 >= max3)
                result = 100 * max3 + 10 * max2 + max1;
            else if (max1 >= max3 && max3 >= max2)
                result = 100 * max2 + 10 * max3 + max1;
            else if (max2 >= max1 && max1 >= max3)
                result = 100 * max3 + 10 * max1 + max2;
            else if (max2 >= max3 && max3 >= max1)
                result = 100 * max1 + 10 * max3 + max2;
            else if (max3 >= max1 && max1 >= max2)
                    result = 100 * max2 + 10 * max1 + max3;
                else
                    result = 100 * max1 + 10 * max2 + max3;
            Console.WriteLine(result);
        }
    }
}
