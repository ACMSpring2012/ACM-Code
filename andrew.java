import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
 
 
public class Acm1{
       public static void main(String[] args) throws FileNotFoundException {
              Scanner scanner = new Scanner(new File("input.txt"));
              int n = scanner.nextInt();
              for (int i = 0; i<n;i++){
                     double points[][] = new double[2][3];
                     String name[] = new String[2];
                     for (int p = 0; p < 2; p++){
                           name[p] = scanner.next();
                           for (int x = 0; x<3; x++){
                                  points[p][x] = scanner.nextInt();
                           }
                     }
                     double d = Math.sqrt(
                           Math.pow(points[0][0]-points[1][0], 2)+
                           Math.pow(points[0][1]-points[1][1], 2)+
                           Math.pow(points[0][2]-points[1][2], 2)
                     );
                     System.out.format("%s to %s: %.2f \n", name[0], name[1], d);
              }
       } 
}