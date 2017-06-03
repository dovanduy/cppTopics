using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sheets
{
    class Program
    { // http://bgcoder.com/Contests/Practice/Index/41#2
        static int n;
        static void Main(string[] args)
        {
            int cnt = 10;
            n = int.Parse(Console.ReadLine());
            if (0==n)
            {
                for (int i=0; i<=cnt; ++i)
                {
                    Console.WriteLine("A{0}",i);
                }
            }
            else
            {
                while ((cnt>=0))
                {
                    if (0==n%2)
                    {
                        Console.WriteLine("A{0}", cnt);
                    } 
                    --cnt;
                    n = n / 2;
                }
            }
        }
    }
}
