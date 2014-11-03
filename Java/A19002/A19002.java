    
   import java.util.*;  
    
    /** 
    <h2>Calculate Ramp Weight</h2>
    This program that prompts for the aircraft empty weight, number of passengers in the front seat, number of passengers in the back seat, the amount of fuel in the airplane and the baggage weight to calculate the "Ramp Weight" of the aircraft. 
     
    @author Yassin Yazal (Email: <a href="mailto:yassintw@gmail.com"> yassintw@gmail.com</a>)
    @version 1.11 01/20/2010
    @assignment.number Using Javadoc - A19002 - Chapter 2
    @prgm.usage Called from the operating system
    @see "Gaddis, 2009, Starting out with Java, Early Objects, 3rd Ed."
    @see <a href="http://java.sun.com/javase/6/docs/technotes/guides/javadoc/index.html">JavaDoc Documentation</a>
    */
   public class A19002 
   {
       
       /** 
       This class use Scanner console method to enable user put value to caculate the aircraft ramp weight.       
            <br>
            The formula is:
       <pre>
       RW = BW + GF*6 + (FS+BS+1)* 170 + EW
            </pre>
       */
      public static void main(String[] args)
      {
         System.out.println("Black Mountain Aviation Center");
         System.out.println("programmed by Yassin Yazal");
         System.out.println(" ");
             /** Use to show the programmer and other information */
         Scanner console = new Scanner(System.in);
             /** Used to constructed the Scanner so you can ask it to return a value of a particular type */
         System.out.println("Enter the Aircraft Empty Weight");
         int EW  = console.nextInt(); /** Used read and return an int value back to int EW */
         System.out.println("Enter the Number of Passengers in the Front Seat");
         int FS  = console.nextInt(); /** Used read and return an int value back to int FS */
         System.out.println("Enter the Number of Passengers in the Back Seat");
         int BS  = console.nextInt(); /** Used read and return an int value back to int BS */
         System.out.println("Enter the Number of Gallons of Fuel");
         int GOF  = console.nextInt(); /** Used read and return an int value back to int GOF */
         System.out.println("Enter the Baggage Weight" );
         int BW  = console.nextInt(); /** Used read and return an int value back to int BW */
         int NGF = 6 * GOF; /** Use formula to return a new int NGF  */
         int RW = BW + NGF + (FS+BS+1)* 170 + EW; /** Formula use to caculate int RW */
         System.out.println("The Ramp Weight of the Aircraft is " + (int)RW + " pounds.");
             /** Combine the final int RW and words */
      
      
           
      }
   }
