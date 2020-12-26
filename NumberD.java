import java.util.Scanner;
public class NumberD {
    public static void main(String[] args) {
        Scanner sca = new Scanner(System.in);
        String ch = sca.next();

        int d = 1;
        while (d <= 5) {
            for (int i = 0; i < 5-d ; i++) {
                System.out.print(" ");
            }
            for (int i = 0; i < d; i++) {
                System.out.print(ch + " ");
            }
            System.out.println();
            d++;
        }
    }
}
