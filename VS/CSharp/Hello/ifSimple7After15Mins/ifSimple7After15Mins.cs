using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * Чете час и минути от 24-часово денонощие, въведени от потребителя, 
 * и изчислява колко ще е часът след 15 минути. 
 * Резултатът да се отпечата във формат hh:mm. 
 * Часовете винаги са между 0 и 23, а минутите винаги са между 0 и 59. 
 * Часовете се изписват с една или две цифри. 
 * Минутите се изписват винаги с по две цифри, с водеща нула когато е необходимо.
 */
namespace ifSimple7After15Mins
{
    class ifSimple7After15Mins
    {
        static void Main(string[] args)
        {
            var hh = int.Parse(Console.ReadLine());
            var mm = int.Parse(Console.ReadLine());
            var afterMM = 15;
            var totalMins = hh * 60 + mm + afterMM;
            var resH = totalMins / 60 % 24;
            var resM = totalMins % 60;
            Console.WriteLine(resH+":"+resM.ToString().PadLeft(2, '0'));
        }
    }
}
