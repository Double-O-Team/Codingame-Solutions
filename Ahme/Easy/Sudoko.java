import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String args[]) {
        int[][]sudoko=new int [9][9];    
        Scanner in = new Scanner(System.in);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                int n = in.nextInt();
                sudoko[i][j]=n;
            }
        }
        for (int i = 0; i < 9; i++) {
             List<Integer> row = new ArrayList<Integer>(Collections.nCopies(9, 0));
             List<Integer> col = new ArrayList<Integer>(Collections.nCopies(9, 0));
             List<Integer> grid = new ArrayList<Integer>(Collections.nCopies(9, 0));
             boolean once=true;
            for (int j = 0; j < 9; j++) {
                
                row.set(sudoko[i][j]-1,row.get(sudoko[i][j]-1)+1);
                col.set(sudoko[j][i]-1,col.get(sudoko[j][i]-1)+1);
                boolean flag=true;

                if((i==0||i==3||i==6)&&once){
                 for(int k=i;k<i+3;k++)
                {
                    for(int o=i;o<i+3;o++)
                {
                   grid.set(sudoko[k][o]-1,grid.get(sudoko[k][o]-1)+1);
                }
                once=false;
                }
                }
                if(!flag)
                {
                   System.out.print(false); 
                   return;
                }
                else{
                    for(int k=0;k<row.size();k++)
                    {
                        if(row.get(k)>1||col.get(k)>1||grid.get(k)>1)
                        {
                          System.out.print(false); 
                          return;   
                        }
                    }
                }
            }
            }
        

        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.println("true");
    }
    }
