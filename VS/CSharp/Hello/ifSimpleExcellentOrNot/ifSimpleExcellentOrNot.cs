using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * да се напише конзолна програма, която чете оценка (десетично число), 
 * въведена от потребителя, и отпечатва “Excellent!”, 
 * ако оценката е 5.50 или по-висока, или “Not excellent.”
 * 
 * https://judge.softuni.bg/Contests/Practice/Index/613#1
 */
namespace ifSimpleExcellentOrNot
{
    class ifSimpleExcellentOrNot
    {
        static void Main(string[] args)
        {
            var grade = double.Parse(Console.ReadLine());
            if (grade >= 5.5)
                Console.WriteLine("Excellent!");
            else
                Console.WriteLine("Not excellent.");
        }
    }
}
