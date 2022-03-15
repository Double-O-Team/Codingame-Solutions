import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String args[]) {
        int closest=0;
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(); // the number of temperatures to analyse
        for (int i = 0; i < n; i++) {
            int t = in.nextInt(); // a temperature expressed as an integer ranging from -273 to 5526
            if(i==0){
                closest=t;
                continue;
            }
            if(t>0 && closest>0 || t<0 && closest>0){
            if(Math.abs(t)<closest)
            {
                closest=t;
            }
            else if(Math.abs(t)==closest)
            {
                closest=Math.abs(closest);
            }
            }
            else  if(t>0 && closest<0 ){
            if(t<Math.abs(closest))
            {
                closest=t;
            }
            else if(t==Math.abs(closest))
            {
                closest=Math.abs(t);
            }
            }
           else  if(t<0 && closest<0 ){
            if(t>closest)
            {
                closest=t;
            }
           }
        }

        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.println(closest);
    }
}
