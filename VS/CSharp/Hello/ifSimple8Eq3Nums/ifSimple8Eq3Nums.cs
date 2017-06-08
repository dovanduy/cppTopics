using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ifSimple8Eq3Nums
{
    class ifSimple8Eq3Nums
    {
        const string yes = "yes";
        const string no = "no";
        static void Main(string[] args)
        {
            var n1 = decimal.Parse(Console.ReadLine());
            var n2 = decimal.Parse(Console.ReadLine());
            var n3 = decimal.Parse(Console.ReadLine());
            var isEq = n1 == n2 && n2 == n3;
            if (isEq)
                Console.WriteLine(yes);
            else
                Console.WriteLine(no);
        }
    }
}
