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
        int w = in.nextInt();
        int h = in.nextInt();
        String out="";
       ArrayList<String>split=new ArrayList<>();
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                int pixel = in.nextInt();
                String BinaryString = Integer.toBinaryString(pixel);
                while(BinaryString.length()!=8)
                {
                    BinaryString="0"+BinaryString;
                }
                out+=BinaryString.charAt(BinaryString.length()-1);
            }
        }
        
        int count=0;
         String str="";
         String output="";
        for(int i=0;i<out.length();i++)
        {
            str+=out.charAt(i);
            count++;
            if(count==8)
            {
                output+=(char)Integer.parseInt(str,2);
                str="";
                count=0;
            }
        }

        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.println(output);
    }
}
