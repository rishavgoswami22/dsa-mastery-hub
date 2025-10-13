import java.util.*;
class solution {
     public static void main(String[] args) {
        int n = 5;
        for (int i = 1; i <= n; i++) {
          
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            // move to next line
            System.out.println();
        }
    }
}