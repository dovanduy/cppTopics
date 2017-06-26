using System;
/*
    В една кинозала столовете са наредени в правоъгълна форма в r реда и c колони. 
    Има три вида прожекции с билети на различни цени:
    •	Premiere – премиерна прожекция, на цена 12.00 лева.
    •	Normal – стандартна прожекция, на цена 7.50 лева.
    •	Discount – прожекция за деца, ученици и студенти на намалена цена от 5.00 лева.
    Напишете програма, която чете тип прожекция (стринг), 
    брой редове и брой колони в залата (цели числа), въведени от потребителя, 
    и изчислява общите приходи от билети при пълна зала. 

    Резултатът да се отпечата във формат, с 2 знака след десетичната точка.
 */
// https://judge.softuni.bg/Contests/Practice/Index/615#8
namespace ifComplex9Kino
{
    class ifCompex9Kino
    {
        static void Main(string[] args)
        {
            string t = Console.ReadLine();
            int n = int.Parse(Console.ReadLine());
            int m = int.Parse(Console.ReadLine());
            double price = 0.0;
            if (t == "Premiere")
                price = 12.0;
            else if (t == "Normal")
                price = 7.5;
            else if (t == "Discount")
                price = 5;
            double res = n * m * price;
            Console.WriteLine("{0:F2}", res);
        }
    }
}
