import java.util.Random;
import java.util.Scanner;
public class guessNumber {
    public static void main(String[] args) {
        Random rnd=new Random();
        int r=rnd.nextInt(100);
        System.out.println(r);
        Scanner sc=new Scanner(System.in);
        System.out.println("请输入你猜的数字");
        int count=2;
        while(sc.hasNextLine()){
            int n=sc.nextInt();
            if(count==0){
                System.out.println("机会用完，游戏结束!");
                break;}
            if(n==r){
                System.out.println("good!");
                break;}
            else if(n<r){
                System.out.println("Small");
            }
            else {
                System.out.println("Big");
            }
            System.out.printf("你还有%d次机会\n",count);
            System.out.println("请再次输入你猜的数字");
            count--;
        }
    }
}
