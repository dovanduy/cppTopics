using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
    Предприемчив българин отваря квартални магазинчета в няколко града и продава на различни цени:
град / продукт	    coffee	water	beer	sweets	peanuts
    Sofia	        0.50	0.80	1.20	1.45	1.60
    Plovdiv	        0.40	0.70	1.15	1.30	1.50
    Varna	        0.45	0.70	1.10	1.35	1.55
    Напишете програма, която чете град (стринг), продукт (стринг) и количество (десетично число), въведени от потребителя, 
    и пресмята и отпечатва колко струва съответното количество от избрания продукт в посочения град.
    вход	изход		вход	изход		вход	изход		вход	изход		вход	изход
coffee
Varna
2	            0.9		

peanuts
Plovdiv
1	            1.5

beer
Sofia
6	            7.2

water
Plovdiv
3	            2.1

sweets
Sofia
2.23	        3.2335
 */
namespace ifComplex2KvartMagazin
{
    class ifComplex2KvarMagazin
    {
        static void Main(string[] args)
        {
            Dictionary<string, double> ProductTownPrices = new Dictionary<string, double>();
            ProductTownPrices["coffeesofia"] = 0.5;
            ProductTownPrices["coffeeplovdiv"] = 0.4;
            ProductTownPrices["coffeevarna"] = 0.45;
            ProductTownPrices["watersofia"] = 0.8;
            ProductTownPrices["waterplovdiv"] = 0.7;
            ProductTownPrices["watervarna"] = 0.7 ;
            ProductTownPrices["beersofia"] = 1.2 ;
            ProductTownPrices["beerplovdiv"] = 1.15 ;
            ProductTownPrices["beervarna"] = 1.1 ;
            ProductTownPrices["sweetssofia"] = 1.45 ;
            ProductTownPrices["sweetsplovdiv"] = 1.3 ;
            ProductTownPrices["sweetsvarna"] = 1.35 ;
            ProductTownPrices["peanutssofia"] = 1.6 ;
            ProductTownPrices["peanutsplovdiv"] = 1.5 ;
            ProductTownPrices["peanutsvarna"] = 1.55 ;
            string product = Console.ReadLine().ToLower();
            string town = Console.ReadLine().ToLower();
            double qty = double.Parse(Console.ReadLine());
            Console.WriteLine(qty*ProductTownPrices[product+town]);
        }
    }
}
