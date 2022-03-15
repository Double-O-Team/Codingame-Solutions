import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String args[]) {
        
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        if (in.hasNextLine()) {
            in.nextLine();
        }
    
        for (int i = 0; i < N; i++) {
            String x = in.nextLine();
            String num=x;
            long sum=0;
            int n=0;
            while(n<= 100000 )
            {
                for(int j=0;j<x.length();j++)
                {
                    sum+=(long) Math.pow(Integer.valueOf(String.valueOf(x.charAt(j))),2);
                }
                x=String.valueOf(sum);
                if(sum==1)
                    break;
                sum=0;
                n++;
            }
            if(sum==1)
             System.out.println(num +" :)");
            else
             System.out.println(num +" :(");

        }

        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

       
    }
}
