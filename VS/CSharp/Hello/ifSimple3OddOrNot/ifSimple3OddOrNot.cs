using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * Да се напише програма, която чете цяло число, 
 * въведено от потребителя, 
 * и печата дали е четно или нечетно.
 * 
 * https://judge.softuni.bg/Contests/Practice/Index/613#2
 * */
namespace ifSimple3OddOrNot
{
    class ifSimple3OddOrNot
    {
        static void Main(string[] args)
        {
            var num = int.Parse(Console.ReadLine());
            string res = (0 == num % 2) ? "even" : "odd";
            Console.WriteLine(res);
        }
    }
}
