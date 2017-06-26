using System;

namespace ifComplex7DayOfWeek
{
    class ifComplex7DayOfWeek
    {
        static void Main(string[] args)
        {
            string[] dayNames = { "Error", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
            int n = int.Parse(Console.ReadLine());
            if (n>=1 && n<=7)
                Console.WriteLine(dayNames[n]);
            else
                Console.WriteLine(dayNames[0]);
        }
    }
}
