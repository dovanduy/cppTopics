using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * Да се напише програма, която чете скорост (десетично число), въведена от потребителя, 
 * и отпечатва информация за скоростта. При скорост до 10 (включително) отпечатайте “slow”. 
 * При скорост над 10 и до 50 отпечатайте “average”. 
 * При скорост над 50 и до 150 отпечатайте “fast”. 
 * При скорост над 150 и до 1000 отпечатайте “ultra fast”. 
 * При по-висока скорост отпечатайте “extremely fast”. 
 * */
namespace ifNested6Skorost
{
    class ifNested6Skorost
    {
        static void Main(string[] args)
        {
            double skorost = double.Parse(Console.ReadLine());
            if (skorost>1000)
                Console.WriteLine("extremely fast");
            else if (skorost>150)
                Console.WriteLine("ultra fast");
            else if (skorost>50)
                Console.WriteLine("fast");
            else if (skorost>10)
                Console.WriteLine("average");
            else
                Console.WriteLine("slow");
        }
    }
}
