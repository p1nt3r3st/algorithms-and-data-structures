import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        System.out.println("Введите любое число");
        int num = in.nextInt();
        boolean flag = false;
        if (!(num > 0 )){
            System.out.println("Ваше число меньше 0");
        }
        else{
            System.out.println("Ваше число больше либо равно 0");
        }
        if (flag) System.out.println("true");
        else if (!flag) {
            System.out.println("False");
        }
        else System.out.println("Дичь");
        in.close();
    }
}



