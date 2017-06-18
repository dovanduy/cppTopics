using System;

/*
   Кюфтенца
В тигана на мама могат да се пържат едновременно k на брой кюфтенца. 
Всяко кюфте трябва да се пържи без прекъсване от всяка страна m минути и s секунди. 
Мама бърза да опържи и от двете страни n на брой кюфтенца. 
Кога най-ранно мама ще може да опържи всичките кюфтенца?
 * */
namespace Proekt1Exam1IntroProgZad1
{
    class Zad1
    {
        static void Main(string[] args)
        {
            int k = int.Parse(Console.ReadLine());
            int m = int.Parse(Console.ReadLine());
            int s = int.Parse(Console.ReadLine());
            int n = int.Parse(Console.ReadLine());
            int HH = int.Parse(Console.ReadLine());
            int MM = int.Parse(Console.ReadLine());
            int SS = int.Parse(Console.ReadLine());
            int countTigani = n / k;
            if (n % k != 0) ++countTigani;
            int workSec = 2 * countTigani * (m * 60 + s);
            int startSec = HH * 60 * 60 + MM * 60 + SS;
            int finalSec = workSec + startSec;
            Console.WriteLine("{0}:{1}:{2}", 
                (finalSec/3600%24).ToString().PadLeft(2, '0'),  // hh
                (finalSec%3600/60).ToString().PadLeft(2, '0'),  // mm
                (finalSec%3600%60).ToString().PadLeft(2, '0')); // ss
        }
    }
} // Задача за "Прости пресмятания" с една *