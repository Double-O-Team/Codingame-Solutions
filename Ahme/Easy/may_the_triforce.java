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
        int index=1;
        int spaces=N+N-1;
        int spaces2=N+N-1;
        int l=0;
        for(int i=0;i<N*2;i++)
        {
            if(i==0)
                    {
                       System.out.print("."); 
                    }
            for(int j=0;j<spaces-i;j++)
        {        if(i==0)
                    {
                        if(j==spaces-i-1)
                        {
                            break;
                        }
                    }
                System.out.print(" ");
        }
        if(i<N){
            for(int j=0;j<index;j++)
        {       
                System.out.print("*");
        }
        }
        else
        {   
             for(int j=0;j<index;j++)
              {       
                System.out.print("*");
              }
               for(int j=0;j<spaces2-l;j++)
              {       
                System.out.print(" ");
              }
              for(int j=0;j<index;j++)
              {       
                System.out.print("*");
              }
              l=l+2;
        }
        index+=2;
        if(i==N-1)
        {
            index=1;
        }
        System.out.println();
        }
        
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        //System.out.println("answer");
    }
}
