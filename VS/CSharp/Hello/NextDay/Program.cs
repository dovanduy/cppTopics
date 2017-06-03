using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

// http://bgcoder.com/Contests/Practice/Index/41#0

namespace NextDay
{
    class Program
    {
        static void Main(string[] args)
        {
            Thread.CurrentThread.CurrentCulture = CultureInfo.InvariantCulture;
            int d = int.Parse(Console.ReadLine());
            int m = int.Parse(Console.ReadLine());
            int y = int.Parse(Console.ReadLine());
            DateTime mdate = new DateTime(y, m, d);
            mdate=mdate.AddDays(1);
            Console.WriteLine(mdate.Day+"."+mdate.Month +"."+mdate.Year);
        }
    }
}
