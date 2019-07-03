import java.io.*;
import java.util.*;

class a {

    public static int output1;

    public static void digitSum(int num) {
        // Write code here
        int sum = 0, flag = 0;
        if (num < 0)
            flag = 1;
        while (num > 0 || sum > 9) {

            if (num == 0) {
                num = sum;
                sum = 0;
            }
            sum += num % 10;
            num /= 10;
        }

        // if(flag == 1)

        if (flag == 1)
            output1 = sum * -1;
        output1 = sum;

        System.out.println(output1);

    }

    public static void main(String args[]) {
        digitSum(12345);
    }
}