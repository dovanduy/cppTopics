using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ifSimple4MaxOfTwoNums
{
    class ifSimple4MaxOf2Nums
    {
        static void Main(string[] args)
        {
            var num1 = int.Parse(Console.ReadLine());
            var num2 = int.Parse(Console.ReadLine());
            Console.WriteLine(Math.Max(num1, num2));
        }
    }
}
