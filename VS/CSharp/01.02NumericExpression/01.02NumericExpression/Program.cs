using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _01._02NumericExpression
{
    class Program
    {
        static void Main(string[] args)
        {
            var length = int.Parse(Console.ReadLine());
            for (int i = 0; i < length; i++)
            {
                for (int k = 0; k < length; k++)
                {
                    Console.Write('*');
                };
                Console.WriteLine();
            }
        }
    }
}
