import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
class Player {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int lightX = in.nextInt(); // the X position of the light of power
        int lightY = in.nextInt(); // the Y position of the light of power
        int initialTx = in.nextInt(); // Thor's starting X position
        int initialTy = in.nextInt(); // Thor's starting Y position

        // game loop
        while (true) {
            int remainingTurns = in.nextInt(); // The remaining amount of turns Thor can move. Do not remove this line.
            if(initialTx<lightX && initialTy>lightY)
            {
                initialTx++;
                initialTy--;
                 System.out.println("NE");
            }
            else if(initialTx>lightX && initialTy<lightY)
            {
                 initialTx--;
                initialTy++;
                System.out.println("SW");
            }
             else if(initialTx<lightX && initialTy<lightY)
            {
                initialTx++;
                initialTy++;
                System.out.println("SE");
            }
              else if(initialTx>lightX && initialTy>lightY)
            {
                initialTx--;
                initialTy--;
                System.out.println("NW");
            }
              else if(initialTx>lightX)
            {
                System.out.println("W");
            }
              else if(initialTx<lightX)
            {
                System.out.println("E");
            }
             else if(initialTy<lightY)
            {
                System.out.println("S");
            }
              else if(initialTy>lightY)
            {
                System.out.println("N");
            }          
        }
    }
}
