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
        static void MainVer1(string[] args)
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

        static void Main(string[] args)
        {
            int cnt = 10; // The code size is smaller than Ver1
            n = int.Parse(Console.ReadLine());
            {
                while ((cnt >= 0))
                {
                    if ((1 & n) == 0) // (n%2 == 0)
                    {
                        Console.WriteLine("A{0}", cnt);
                    }
                    --cnt;
                    n = n >> 1;// n = n / 2;
                }
            }
        }
    }
}
