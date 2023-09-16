import java.util.Scanner;
public class lucky{
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        if(Integer.parseInt(s)%4== 0 || Integer.parseInt(s)%7== 0 || Integer.parseInt(s)%47== 0 ){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
