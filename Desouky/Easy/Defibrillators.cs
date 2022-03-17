using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;
// this problem requires a lot of string manupilation so i used C# cuz of amazing string functions exist in it ;)
class Solution
{
    static void Main(string[] args)
    {
        string LON = Console.ReadLine();
        string LAT = Console.ReadLine();
        int N = int.Parse(Console.ReadLine());
        string s1 = LON.Replace(',' , '.');
        string s2 = LAT.Replace(',' , '.');
        double X = Convert.ToDouble(s1);
        double Y = Convert.ToDouble(s2);
        string address = "";
        double dist = 0;
        for (int i = 0; i < N; i++)
        {
            string DEFIB = Console.ReadLine();
            string add;
            string[] splitAddressandCoords = DEFIB.Split(';');
            add = splitAddressandCoords[1];
            double ALongitude = Convert.ToDouble(splitAddressandCoords[splitAddressandCoords.Length - 2].Replace(',', '.'));
            double ALatitude = Convert.ToDouble(splitAddressandCoords[splitAddressandCoords.Length - 1].Replace(',', '.'));
            double d = CalcDis(X, Y, ALongitude, ALatitude);
            
            if(i == 0){
                dist = d;
                address = add;
            }else{
                if(dist > d){
                    dist = d;
                    address = add;
                }
            }
        }
       Console.WriteLine($"{address}");
    }
    public static double CalcDis(double Ulong, double Ulat, double ALong, double ALat)
    {
        double x = (ALong - Ulong) * Math.Cos((Ulat + ALat) / 2);
        double y = (ALat - Ulat);
        double d = Math.Sqrt(Math.Pow(x, 2) + Math.Pow(y, 2)) * 6371;
        return d;
    }
}
