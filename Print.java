import java.util.Scanner;

public class Print {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String name=sc.next();
        int age=sc.nextInt();
        String gender =sc.next();
        System.out.printf("Name    Age    Gender\n");
        for (int i=0;i<21;i++){
            System.out.printf("-");
        }
        System.out.println();
        System.out.printf("%-8s",name);
        System.out.printf("%-7d",age);
        System.out.printf("%-6s",gender);

    }
}
