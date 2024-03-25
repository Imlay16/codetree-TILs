import java.util.Scanner;

public class Main {

    public static boolean isConsquenceL(String[] str, int i, int j) {

        return false;
    }

    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int m = scanner.nextInt();

        String[] str = new String[n];

        for (int i = 0; i < n; i++) {
            str[i] = scanner.next();
        }

        int ans = 0;
        int count = 0;
        boolean flag = true;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                // L인 경우
                if (str[i].charAt(j) == 'L') {
                    for (int k = 0; k < 2; k++) {
                        
                        //up
                        if (!(i - k - 1 >= 0 && str[i - k - 1].charAt(j) == 'E')) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) {
                        count++;
                    }
                    else {
                        flag = true;
                    }

                    for (int k = 0; k < 2; k++) {
                        if (!(i - k - 1 >= 0 && j - k - 1 >= 0 && str[i - k - 1].charAt(j - k - 1) == 'E')) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) {
                        count++;
                    }
                    else {
                        flag = true;
                    }

                    for (int k = 0; k < 2; k++) {
                        if (!(j - k - 1 >= 0 && str[i].charAt(j - k - 1) == 'E')) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) {
                        count++;
                    }
                    else {
                        flag = true;
                    }

                    for (int k = 0; k < 2; k++) {
                        if (!(i + k + 1 < n && j - k - 1 >= 0 && str[i + k + 1].charAt(j - k - 1) == 'E')) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) {
                        count++;
                    }
                    else {
                        flag = true;
                    }

                    for (int k = 0; k < 2; k++) {
                        if (!(i + k + 1 < n && str[i + k + 1].charAt(j) == 'E')) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) {
                        count++;
                    }
                    else {
                        flag = true;
                    }

                    for (int k = 0; k < 2; k++) {
                        if (!(i + k + 1 < n && j + k + 1 < m && str[i + k + 1].charAt(j + k + 1) == 'E')) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) {
                        count++;
                    }
                    else {
                        flag = true;
                    }

                    for (int k = 0; k < 2; k++) {
                        if (!(j + k + 1 < m && str[i].charAt(j + k + 1) == 'E')) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) {
                        count++;
                    }
                    else {
                        flag = true;
                    }

                    for (int k = 0; k < 2; k++) {
                        if (!(i - k - 1 >= 0 && j + k + 1 < m && str[i - k - 1].charAt(j + k + 1) == 'E')) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) {
                        count++;
                    }
                    else {
                        flag = true;
                    }
                }
            }
        }
        System.out.print(count);
    }
}