import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    static public class places
           {
            int row;
            int col;
         public places(int i,int j)
             {
                 this.row=i;
                 this.col=j;
             }
            }
    public static void main(String args[]) {
       
        Scanner in = new Scanner(System.in);
        int W = in.nextInt();
        int H = in.nextInt();
        ArrayList<places>zeros=new ArrayList<>();
        int[][] postion=new int[H][W];
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                int v = in.nextInt();
                postion[i][j]=v;
                if(v==0){
                 zeros.add(new places(i,j));
            }
            }
        }
    
        for (int i = 0; i < zeros.size(); i++) {
            boolean flag=true;
            if(true)
            { 
                 for(int k=0;k<2;k++)
                {
                    for(int o=0;o<2;o++)
                {
                   
                    if(k==0&&o==0){
                        continue;
                    }   
                     if(zeros.get(i).row+k<H&&zeros.get(i).col+o<W)
                    {
                    if(postion[zeros.get(i).row+k][zeros.get(i).col+o]==0)
                    {
                        flag=false;
                    }
                    }
                    if(zeros.get(i).row+k<H&&zeros.get(i).col-o >= 0 )
                    {
                    if(postion[zeros.get(i).row+k][zeros.get(i).col-o]==0)
                    {
                        flag=false;
                    }
                    }
                     if(zeros.get(i).row-k>=0&&zeros.get(i).col+o<W )
                    {
                    if(postion[zeros.get(i).row-k][zeros.get(i).col+o]==0)
                    {
                        flag=false;
                    }
                    }
                    if(zeros.get(i).row-k>=0&&zeros.get(i).col-o >= 0 )
                    {
                    if(postion[zeros.get(i).row-k][zeros.get(i).col-o]==0)
                    {
                        flag=false;
                    }
                    }
                }
                }
                if(flag)
                {
                   System.out.print(zeros.get(i).col+" "+zeros.get(i).row); 
                }

            }
            
            }
        }
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

       // System.out.println("x y");
    }
