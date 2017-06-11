using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
* Дадено е цяло число – брой точки. Върху него се начисляват бонус точки по правилата, описани по-долу. 
* Да се напише програма, която пресмята бонус точките за това число и общия брой точки с бонусите.
* •	Ако числото е до 100 включително, бонус точките са 5.
* •	Ако числото е по-голямо от 100, бонус точките са 20% от числото.
* •	Ако числото е по-голямо от 1000, бонус точките са 10% от числото.
* •	Допълнителни бонус точки (начисляват се отделно от предходните):
*  o	За четно число: + 1 т.
*  o	За число, което завършва на 5: + 2 т.
* https://judge.softuni.bg/Contests/Practice/Index/614#1
*/
namespace ifNested2Bonus
{
    class Program
    {
        static double bonus2(double n)
        {
            if (n % 2 == 0)
                return 1;
            if (n % 10 == 5)
                return 2;
            return 0;
        }
        static double bonus (double num)
        {
            if (num > 1000)
                return (num * 0.1 + bonus2(num));
            else if (num>100)
                return (num * 0.2 + bonus2(num));
            else return (5 + bonus2(num));
        }
        static void Main(string[] args)
        {
            double n = double.Parse(Console.ReadLine());
            double b = bonus(n);
            Console.WriteLine(b);
            Console.WriteLine((n+b));
        }
    }
}