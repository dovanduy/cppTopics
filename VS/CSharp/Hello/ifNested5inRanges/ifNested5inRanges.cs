using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * Чете цяло число, въведено от потребителя, 
 * и проверява дали е под 100, между 100 и 200 или над 200. 
 * */
namespace ifNested5inRanges
{
    class ifNested5inRanges
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            if (n<100)
                Console.WriteLine("Less than 100");
            else if (n<=200)
                Console.WriteLine("Between 100 and 200");
            else
                Console.WriteLine("Greater than 200");
        }
    }
}
