using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * Напишете програма, която проверява дали точка {x, y} се намира вътре в правоъгълник {x1, y1} – {x2, y2}. 
 * Входните данни се четат от конзолата и се състоят от 6 реда, въведени от потребителя: 
 * десетичните числа x1, y1, x2, y2, x и y (като се гарантира, че x1 < x2 и y1 < y2).
 * работи се с дясна координатна система.
 * Една точка е вътрешна за даден правоъгълник, ако се намира някъде във вътрешността му или върху някоя от страните му. 
 * Отпечатайте “Inside” или “Outside”. 
 * 
 * https://judge.softuni.bg/Contests/Practice/Index/615#2
 * */
namespace ifComplex3PointInRectangle
{
    class ifComplex3PointInRectangle
    {
        static void Main(string[] args)
        {
            double x1 = double.Parse(Console.ReadLine());
            double y1 = double.Parse(Console.ReadLine());
            double x2 = double.Parse(Console.ReadLine());
            double y2 = double.Parse(Console.ReadLine());
            double x = double.Parse(Console.ReadLine());
            double y = double.Parse(Console.ReadLine());
            if (x1<=x && x<=x2 && y1<=y && y<=y2)
                Console.WriteLine("Inside");
            else
                Console.WriteLine("Outside");
        }
    }
}
