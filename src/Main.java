import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.List;


public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
//массивы
        System.out.print("Введите длину массива: ");
        int len = in.nextInt(), sum = 0;
        String ans = new String();

        int numbers[] = new int[len];
        for (int i = 0; i < len; i++){
            System.out.printf("numbers[%d] = ", i); numbers[i] = in.nextInt();
            sum += numbers[i];
        }

        System.out.println("Сумма массива: " + sum);
        System.out.printf("Ср. арифметич.: %.5f", (double) sum / numbers.length);

// Списки

//        List<String> powers = new ArrayList<String>();
//        System.out.println("Вводите элементы. Для прекращения введите `no.`");
//        int i = 0;
//        String my_line;
//        do {
//            System.out.printf("powers[%d] = ", i); my_line = in.nextLine();
//            try {
//                Integer.parseInt(my_line);
//                powers.add(my_line);
//                i += 1;
//            }
//            catch (NumberFormatException e){
//                System.out.println("Введи либо число, либо `no`.");
//            }
//        } while (!my_line.contains("no"));
//
//
//        int numbers[] = new int[powers.size()];
//
//        for (i = 0; i < powers.size(); i++){
//            numbers[i] = Integer.parseInt(powers.get(i));
//        }
//        powers.clear();
//
//        System.out.println("Ваш массив:");
//
//        for (i = 0; i < numbers.length; i++){
//            System.out.print(numbers[i] + " ");
//        }
//
//        System.out.printf("\nМинимальный эл. = %d, максимальный эл. = %d", Arrays.stream(numbers).min().getAsInt(), Arrays.stream(numbers).max().getAsInt());


// гармонический ряд 10
//        int sum = 0;
//        for (int i=1 ; i <= 10; i++){
//            System.out.printf("%.5f", (double) (1 / i));


    }
}






