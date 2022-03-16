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
        char[][]gird=new char[h][w];
        if (in.hasNextLine()) {
            in.nextLine();
        }
        for (int i = 0; i < h; i++) {
            String line = in.nextLine();
            for(int j=0;j <w ; j++) {
                if(line.charAt(j)=='x')
                {
                    gird[i][j]='.';
                }
                else
                {
                  gird[i][j]='0';   
                }
            }
        }

        for (int i = 0; i < h; i++) {
            for(int j=0;j <w ; j++) {
                if(gird[i][j]=='.')
                {   
                    if(i+1<h&&j+1<w&& gird[i+1][j+1]!='.')
                    {   
                         gird[i+1][j+1]=String.valueOf(Integer.parseInt(String.valueOf(gird[i+1][j+1]))+1).charAt(0);
                    }
                    if(j+1<w&& gird[i][j+1]!='.')
                    {
                        gird[i][j+1]=String.valueOf(Integer.parseInt(String.valueOf(gird[i][j+1]))+1).charAt(0);
                    }

                    if(i-1>=0&&j+1<w&& gird[i-1][j+1]!='.')
                    {
                        gird[i-1][j+1]=String.valueOf(Integer.parseInt(String.valueOf(gird[i-1][j+1]))+1).charAt(0);
                    }
                    if(i-1>=0&& gird[i-1][j]!='.')
                    {
                        gird[i-1][j]=String.valueOf(Integer.parseInt(String.valueOf(gird[i-1][j]))+1).charAt(0);
                    }
                    if(i+1<h&&j-1>=0&& gird[i+1][j-1]!='.')
                    {
                        gird[i+1][j-1]=String.valueOf(Integer.parseInt(String.valueOf(gird[i+1][j-1]))+1).charAt(0);
                    }
                     if(i+1<h&& gird[i+1][j]!='.')
                    {
                        gird[i+1][j]=String.valueOf(Integer.parseInt(String.valueOf(gird[i+1][j]))+1).charAt(0);
                    }
                    
                    if(i-1>=0&&j-1>=0 && gird[i-1][j-1]!='.')
                    {
                        gird[i-1][j-1]=String.valueOf(Integer.parseInt(String.valueOf(gird[i-1][j-1]))+1).charAt(0);
                    }
                     if(j-1>=0&& gird[i][j-1]!='.')
                    {
                        gird[i][j-1]=String.valueOf(Integer.parseInt(String.valueOf(gird[i][j-1]))+1).charAt(0);
                    }
                }
            }
        }

        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");
 for (int i = 0; i < h; i++) {
            for(int j=0;j <w ; j++) {
            if(gird[i][j]=='0'){
                 System.out.print('.');
            }
            else    
             System.out.print(gird[i][j]);
            }
            System.out.println();
 }
    }
}
