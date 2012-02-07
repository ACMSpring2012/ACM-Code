import java.io.FileNotFoundException;
import java.io.File;
import java.text.DecimalFormat;
import java.util.Scanner;
 
public class PlanetDistance {
       private static Scanner inpFile;
 
       public static void main(String args[]) {
              double x1, y1, z1, x2, y2, z2;
              String src, dest;
              double distance;
              DecimalFormat df = new DecimalFormat("0.00");
              try {
                     inpFile = new Scanner(new File("input.txt"));
              } catch (FileNotFoundException e) {
                     System.out.println("Error in opening source file.");
                     System.exit(0);
              }
 
              int count = Integer.parseInt(inpFile.nextLine());
              for (int i = 0; i < count; i++) {
                     src = inpFile.next();
                     x1 = inpFile.nextDouble();
                     y1 = inpFile.nextDouble();
                     z1 = inpFile.nextDouble();
                     dest = inpFile.next();
                     x2 = inpFile.nextDouble();
                     y2 = inpFile.nextDouble();
                     z2 = inpFile.nextDouble();
                     distance = Math.sqrt(Math.pow((x1 - x2), 2)+ Math.pow((y1 - y2), 2) + Math.pow((z1 - z2), 2));
                     System.out.println(src + " to " + dest + ": " + df.format(distance));
              }
       }
 
}