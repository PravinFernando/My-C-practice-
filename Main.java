import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for(int i = 1; i <= n; i++) {
            if(i % 2 == 1) {
                // ODD ROW: Print n stars with spaces
                for(int j = 1; j <= n; j++) {
                    System.out.print("* ");
                }
            } else {
                // EVEN ROW: First star + (n-2) spaces + Last star
                System.out.print("*");
                for(int j = 2; j < n; j++) {
                    System.out.print("  ");
                }
                if(n > 1) System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}
