import java.util.*;

class solution {
    public static void main(String args[]) {
        int n = 5;
        for (int i = 1; i <= n; i++) {
            // spaces
            for (int j = 0; j < i-1; j++) {
                System.out.print(" ");
            }
            for (int j = 0; j <  n; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}