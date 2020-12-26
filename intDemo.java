import java.util.*;
public class intDemo {
    public static void main(String[] args) {



//        Scanner sc=new Scanner(System.in);
//        System.out.println("请输入姓名");
//        String name =sc.nextLine();
//        System.out.println("请输入年龄");
//        String age =sc.nextLine();
//        System.out.println("name:"+name);
//        System.out.println("age:"+age);



        Scanner sc=new Scanner(System.in);
        int sum=0;
        while(sc.hasNextLine()){
            String word =sc.nextLine();
            System.out.println("|"+word+"|");
            sum++;
        }
        System.out.println(sum);
    }
}
