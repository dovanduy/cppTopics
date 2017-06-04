using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Carpets
{ // http://bgcoder.com/Contests/Practice/Index/41#3
    class Carpets
    {
        static int n;
        const char dot = '.' ;
        const char space = ' '; // '.'
        static void Main(string[] args)
        {
            //string result = new StringBuilder().Insert(0, "123", 3).ToString();
            //Console.WriteLine(result);
            n = int.Parse(Console.ReadLine());
            bool isEvenN2 = n / 2 % 2 == 0;
            char template1 = '\\';
            char template2 = '/';
            string r1 ;
            string r2 ;
            string result = "";
            for (int row=0; row<n/2; ++row)
            {
                int col ;
                if (isEvenN2)
                for (r1="", col=0; col < n/2; ++col)
                {
                    if (row >= col && (row + col) % 2 == 0)
                        r1 = r1 + template1;
                    else if (row >= col)
                        r1 = r1 + space;
                }
                else
                    for (r1="", col=0; col <= n/2; ++col) // <=
                    {
                        if (row >= col && (row + col) % 2 == 0)
                            r1 = r1 + template1;
                        else if (row >= col)
                            r1 = r1 + space;
                    }
                r1 = r1.PadRight(n / 2, dot);
                if (isEvenN2)
                for (r2="", col=0; col <n/2; ++col)
                {
                    if (row + col >= n / 2-1 && (row + col) % 2 == 1)
                        r2 = r2 + template2;
                    else if (row + col >= n / 2-1)
                        r2 = r2 + space;
                }
                else
                    for (r2="", col=0; col<=n/2; ++col) // <=
                    {
                        if (row + col >= n / 2   && (row + col) % 2 == 1)
                            r2 = r2 + template2;
                        else if (row + col >= n / 2)
                            r2 = r2 + space;
                    }
                r2 = r2.PadLeft(n / 2, dot);
                result = result + r2 + r1 +  '\n';
            }
            for (int row=0; row < n/2; ++row)
            {
                int col = 0;
                if (isEvenN2)
                for (r1="", col=0; col<n/2; ++col)
                {
                        if (col + row <= n / 2 && (col + row) % 2 == 1)
                            r1 = r1 + template2;
                        else if (col + row <= n / 2)
                            r1 = r1 + space;
                }
                else
                    for (r1="", col=0; col<n/2; ++col)
                    {
                        if (col + row <= n / 2 && (col + row) % 2 == 0)
                            r1 = r1 + template2;
                        else if (col + row <= n / 2)
                             r1 = r1 + space;
                    }
                r1 = r1.TrimEnd(space);
                r1 = r1.PadRight(n / 2, '.');
                for (r2="", col=0; col < n/2; ++col)
                {
                    if (col >= row && (col + row) % 2 == 0)
                        r2 = r2 + template1;
                    else if (col >= row)
                        r2 = r2 + space;
                }
                r2 = r2.PadLeft(n / 2, dot);
                result = result + r2 + r1 + '\n';
            }
            Console.Write(result);
        }
    }
}
