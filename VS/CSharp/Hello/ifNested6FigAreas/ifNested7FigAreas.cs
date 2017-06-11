using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * Да се напише програма, в която потребителят въвежда вида и размерите на геометрична фигура и пресмята лицето й. 
 * Фигурите са четири вида: 
 * квадрат (square), правоъгълник (rectangle), кръг (circle) и триъгълник (triangle). 
 * На първия ред на входа се чете вида на фигурата (square, rectangle, circle или triangle). 
 * 
 * Ако фигурата е квадрат, на следващия ред се чете едно число – дължина на страната му. 
 * Ако фигурата е правоъгълник, на следващите два реда четат две числа – дължините на страните му. 
 * Ако фигурата е кръг, на следващия ред чете едно число – радиусът на кръга. 
 * Ако фигурата е триъгълник, на следващите два реда четат две числа – дължината на страната му и дължината на височината към нея. 
 * 
 * Резултатът да се закръгли до 3 цифри след десетичната точка. 
 * */
namespace ifNested6FigAreas
{
    class ifNested7FigAreas
    {
        const string square = "square";
        const string rectangle = "rectangle";
        const string circle = "circle";
        const string triangle = "triangle";
        static void Main(string[] args)
        {
            string fig = Console.ReadLine();
            double a = double.Parse(Console.ReadLine().ToLower());
            double r=0;
            if (fig == rectangle || fig == triangle)
            {
                double b = double.Parse(Console.ReadLine());
                if (fig == rectangle)
                    r = a * b;
                else r = a*b / 2.0;
            }
            else if (fig == square)
                r = a * a;
            else
                r = Math.PI * a * a;
            r = Math.Round(r, 3);
            Console.WriteLine(r);
        }
    }
}
