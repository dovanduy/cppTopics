using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * Да се напише конзолна програма, която чете оценка (десетично число), 
 * въведена от потребителя, и отпечатва “Excellent!”, ако оценката е 5.50 или по-висока.
 * 
 * https://softuni.bg/trainings/resources/officedocument/15419/logical-expressions-and-checks-exercise-programming-basics-for-teachers-june-2017
 * */
namespace ifSimple1ExcelentGrade
{
    class ifSimple1ExcellentGrade
    {
        static void Main(string[] args)
        {
            var grade = double.Parse(Console.ReadLine());
            if (grade >= 5.5)
                Console.WriteLine("Excellent!");
        }
    }
}
