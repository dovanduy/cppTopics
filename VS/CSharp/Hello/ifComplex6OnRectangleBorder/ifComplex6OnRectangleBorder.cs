using System;
/*
    Напишете програма, която проверява дали точка {x, y} 
се намира върху някоя от страните на правоъгълник {x1, y1} – {x2, y2}. 
 
    Входните данни се четат от конзолата и 
 се състоят от 6 реда въведени от потребителя: 
 десетичните числа x1, y1, x2, y2, x и y (като се гарантира, че x1 < x2 и y1 < y2). 
 
    Да се отпечата “Border” (точката лежи на някоя от страните) или “Inside / Outside” (в противен случай).

  https://softuni.bg/downloads/svn/teacher-trainings/1.%D0%A3%D0%B2%D0%BE%D0%B4-%D0%B2-%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%B8%D1%80%D0%B0%D0%BD%D0%B5%D1%82%D0%BE/03-%D0%A3%D1%81%D0%BB%D0%BE%D0%B2%D0%BD%D0%B8-%D0%BA%D0%BE%D0%BD%D1%81%D1%82%D1%80%D1%83%D0%BA%D1%86%D0%B8%D0%B8/07.%D0%A1%D0%BB%D0%BE%D0%B6%D0%BD%D0%B8-%D0%BF%D1%80%D0%BE%D0%B2%D0%B5%D1%80%D0%BA%D0%B8-%D1%83%D0%BF%D1%80%D0%B0%D0%B6%D0%BD%D0%B5%D0%BD%D0%B8%D1%8F.docx
 */
// https://judge.softuni.bg/Contests/Practice/Index/615#5
namespace ifComplex6OnRectangleBorder
{
    class ifComplex6OnRectangleBorder
    {
        static void Main(string[] args)
        {
            double x1 = double.Parse(Console.ReadLine());
            double y1 = double.Parse(Console.ReadLine());
            double x2 = double.Parse(Console.ReadLine());
            double y2 = double.Parse(Console.ReadLine());
            double x = double.Parse(Console.ReadLine());
            double y = double.Parse(Console.ReadLine());
            bool isOnAB = y == y2 && x >= x1 && x <= x2;
            bool isOnBC = x == x2 && y >= y1 && y <= y2;
            bool isOnCD = y == y1 && x >= x1 && x <= x2;
            bool isOnDA = x == x1 && y >= y1 && y <= y2;
            if (isOnAB || isOnBC || isOnCD || isOnDA)
                Console.WriteLine("Border");
            else Console.WriteLine("Inside / Outside");
        }
    }
}
