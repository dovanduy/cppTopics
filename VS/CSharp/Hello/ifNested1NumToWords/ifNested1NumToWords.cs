using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * Чете цяло число в диапазона [1…9], въведено от потребителя, 
 * и го изписва с думи на английски език. 
 * Ако числото е извън диапазона, изписва “number too big”. 
 * https://softuni.bg/trainings/resources/officedocument/15421/series-of-checks-exercise-programming-basics-for-teachers-june-2017
 * */
namespace ifNested1NumToWords
{
    class ifNested1NumToWords
    {
        static void Main(string[] args)
        {
            string[] words = {"number too big", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            int num = int.Parse(Console.ReadLine());
            if (num>0 && num<10)
                Console.WriteLine(words[num]);
            else
                Console.WriteLine(words[0]);
        }
    }
}
