using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Hello
{
    class Hello
    {
        static void Main(string[] args)
        {
            string str;
            str=Console.ReadLine();
            Console.WriteLine("Hello {0}", str);
            int n = int.Parse(Console.ReadLine());
            Console.WriteLine("N = {0}", n);
        }
    }
}
