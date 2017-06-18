using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * Дадено число е валидно, ако е в диапазона [100…200] или е 0. 
 * Да се напише програма, която чете цяло число, въведено от потребителя, 
 * и печата “invalid” ако въведеното число не е валидно.
 * 
 * вход	изход		вход	изход		вход	изход		вход	изход
 * 75	invalid		150	(няма изход)	220	invalid		    199	(няма изход)
 * вход	изход		вход	изход		вход	изход		вход	изход
 * -1	invalid		100	(няма изход)	200	(няма изход)	0	(няма изход)
 *
 * https://judge.softuni.bg/Contests/Practice/Index/615#4
 */
namespace ifComplex5NumValidation
{
    class ifComplex5NumValidation
    {
        static void Main(string[] args)
        {
            double num = double.Parse(Console.ReadLine());
            if (!(num==0 || (num>=100 && num<=200)))
                Console.WriteLine("invalid");
        }
    }
}
