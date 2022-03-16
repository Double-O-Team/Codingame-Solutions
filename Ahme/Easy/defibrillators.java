import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 class defibrillator 
 {
     String name;
     double lang;
     double latiu;
 }
class Solution {

    public static void main(String args[]) {
        List<defibrillator>list=new ArrayList<>();
        double distance=0;
        String out="";
        Scanner in = new Scanner(System.in);
        String LON = in.next();
        String LAT = in.next();
        int N = in.nextInt();
        if (in.hasNextLine()) {
            in.nextLine();
        }
        for (int i = 0; i < N; i++) {
            String DEFIB = in.nextLine();
            String[]Split=DEFIB.split(";");
            String name=Split[1];
            double lang= Double.parseDouble(Split[Split.length-2].replace(",", "."));
            double latiu=Double.parseDouble(Split[Split.length-1].replace(",", "."));
            double userlang=Double.parseDouble(LON.replace(",", "."));
            double userlatiu=Double.parseDouble(LAT.replace(",", "."));

            double x=(lang-userlang)*Math.cos((latiu+ userlatiu)/2);
            double y=(latiu- userlatiu);
            double d= Math.sqrt((x*x)+(y*y)) *6371;
            if(d<distance ||i==0)
            {
                distance=d;
                out=name;
            }
        }

        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.println(out);
    }
}
