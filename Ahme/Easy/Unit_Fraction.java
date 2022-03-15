import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

static public class pair
{
    long x;
    long y;
        public pair(long x,long y)
        {
            this.x=x;
            this.y=y;
        }
}
    public static void main(String args[]) {

        
        Scanner in = new Scanner(System.in);
        long n = in.nextInt();
        String out2="";
        ArrayList<pair>pairs=new ArrayList<pair>();
        ArrayList<Long>p=new ArrayList<>();
        for (long i=n+1;i<1000000 ;i++)
        {
            long v=i-n;
            if((i*n)%(v)==0){
                if(p.contains(i)||p.contains((i*n)/(v)))
                {
                    continue;
                }
                if((i*n)/(v)>i)
                  pairs.add(new pair((i*n)/(v), i));
                else
                  pairs.add(new pair(i,(i*n)/(v)));
            p.add(i);
            }
        } 
        Comparator<pair> c = (s1, s2) ->  Long.compare(s1.x , s2.x) ;

        pairs.sort(c);
        for(int i=pairs.size()-1;i>=0;i--)
        {
            System.out.println("1/"+n+" = 1/"+pairs.get(i).x+" + 1/"+pairs.get(i).y);
        }
        
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

       // System.out.println("1/n = 1/x + 1/y");
    }
}
