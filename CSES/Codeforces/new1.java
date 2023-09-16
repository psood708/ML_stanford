import java.util.Scanner;

public class new1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();

        String hello = "hello";
        int i = 0;

        for (char c : s.toCharArray()) {
            if (i < hello.length() && c == hello.charAt(i)) {
                i++;
            }

            if (i == hello.length()) {
                System.out.println("YES");
                return;
            }
        }

        System.out.println("NO");
    }
}
