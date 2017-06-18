using System;
/*
 * Въвежда се цяло число n. 
 * Образуваме ново число, като записваме цифрите на n в обратен ред. 
 * Отпечатайте средното аритметично на двете числа.
 * */
using System.Threading;
class Zad4
{
    static void Main(string[] args)
    {
        Thread.CurrentThread.CurrentCulture = System.Globalization.CultureInfo.InvariantCulture;
        long num1 = long.Parse(Console.ReadLine());
        long n1 = num1;
        if (num1 < 0) n1 = -num1;
        else if (num1 == 0)
        {
            Console.WriteLine(0);
            return;
        }

        long num2 = 0, pow = 1, dig = 0, n;
        for (n = n1; n > 9; n = n / 10, pow = 10 * pow) ;
        for (dig = n1 % 10; n1 > 0; pow = pow / 10, n1 = n1 / 10, dig = n1 % 10)
        {
            num2 += dig * pow;
        }

        if (num1 < 0) num2 = -num2;

        double r = 0.5 * (num1 + num2);
        Console.WriteLine(r);
    }
}