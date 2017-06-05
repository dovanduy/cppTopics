using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FormulaBit1
{
    class FormulaBit1
    {
        static byte myNum; // ushort
        const int gridSize = 8;  // default == 8, sizeOf(byte)
        const int arrSize = gridSize + 2; // array BORDER
        static byte[,] grid ;
        const int startRow = 1;
        const int startCol = gridSize;
        static int curRow = 1, curCol = gridSize, road = 0, turnsCnt = 0, westCnt = 0;

        enum dir {south, west, nord};
        static dir current = dir.south;

        static bool isSouth()
        {
            if (grid[curRow+1, curCol] == 0)
                return true;
            return false;
        }

        static bool isWest ()
        {
            if (grid[curRow, curCol-1] == 0)
                return true;
            return false;
        }

        static bool isNord ()
        {
            if (grid[curRow-1, curCol] == 0)
                return true;
            return false;
        }

        static void printMe()
        {
            for (int row=0; row < arrSize; ++row)
            {
                for (int col=0; col< arrSize; ++col)
                    Console.Write(grid[row, col]);
                Console.WriteLine();
            }
        }

        static void readMe()
        {
            for (int row = 1; row < arrSize-1; ++row)
            {
                myNum = byte.Parse(Console.ReadLine());
                for (
                    int col = gridSize; col >= 1; --col, myNum = (byte)(myNum / 2))
                {
                    grid[row, col] = (byte)(myNum % 2);
                }
            }
         //printMe();
        }

        static void init ()
        {
            grid = new byte[gridSize + 2, arrSize];
            for (int col = 0; col < arrSize; ++col)
            {
                grid[0, col] = grid[arrSize-1, col] = 1; // border setting
            }
            for (int row = 0; row < arrSize; ++row)
            {
                grid[row, 0] = grid[row, arrSize-1] = 1;
            };
            readMe();
        }

        static bool isFinish()
        {
            return (curRow == gridSize && curCol == 1);
        }

        static void Main(string[] args)
        {
            init();
            if (1 == grid[curRow, curCol])
            {
                Console.WriteLine("No {0}", road);
                return;
            }
            else ++road;
            // FormulaBit1 starts now
            bool isMove = isSouth() || isWest() || isNord();
            for ( ; 
                 isMove && (! isFinish()); 
                 isMove = isSouth() || isWest() || isNord())
            { // The loop body moves a car HERE
                if (current == dir.south)
                {
                    if (isSouth())
                    { ++curRow; ++road; } //moves DOWN
                    // from SOUTH to WEST only
                    else if (isWest())
                    { --curCol; ++road; ++turnsCnt; current = dir.west; ++westCnt; } // LEFT, WEST turn
                    //else if (isNord())
                    //{ --curRow; ++road; ++turnsCnt; current = dir.nord; } // UP, NORD turn
                    else break;
                }
                else if (current == dir.west)
                {
                    if (isWest())
                    { --curCol; ++road; }
                    // from WEST to both NORTH or SOUTH
                    else if (isNord() && (westCnt%2==1))
                    { --curRow; ++road; ++turnsCnt; current = dir.nord; } // UP, NORD turn
                    else if (isSouth() &&westCnt%2==0)
                    { ++curRow; ++road; ++turnsCnt; current = dir.south; } // DOWN, SOUTH turn
                    else break;
                }
                else if (current == dir.nord)
                {
                    if (isNord())
                    { --curRow; ++road; }
                    // from NORD to WEST only
                    else if (isWest())
                    { --curCol; ++road; ++turnsCnt; current = dir.west; ++westCnt; } // LEFT, WEST turn
                    //else if (isSouth())
                    //{ ++curRow; ++road; ++turnsCnt; current = dir.south; } // DOWN, SOUTH turn
                    else break;
                }
                else break;
            };
            if (isFinish())
                Console.WriteLine("{0} {1}", road, turnsCnt);
            else
                Console.WriteLine("No {0}", road);
        }
    }
}