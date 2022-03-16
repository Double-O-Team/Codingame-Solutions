import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {
static public class pos
{
    int row;
    int col;
     
     pos(int row,int col)
         {
         this.row=row;
         this.col=col;}
         
}
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int L = in.nextInt();
        int count=0;
        List<pos>postition=new ArrayList<>();
        int[][]placesnum=new int[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                String cell = in.next();
                if(cell.equals("X"))
                {
                    placesnum[i][j]=0;
                }
                else
                {
                    placesnum[i][j]=L;
                    postition.add(new pos(i,j));
                }
            }
        }
        for(int k=0;k<postition.size();k++)
        for (int i = 0; i < N; i++) {
            for (int j =0; j <N; j++) {
                int x=Math.abs(j - postition.get(k).col);
                int y=Math.abs(i - postition.get(k).row);
                int max=Math.max(x, y);
                if(max<L&&max!=0){
                placesnum[i][j]+=L-max;
                }
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if( placesnum[i][j]==0)
                {
                    count++;
                }
            }
        }
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.println(count);
    }
}
