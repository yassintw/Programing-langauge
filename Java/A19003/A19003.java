       
   import java.util.*;  
    
    /** 
    <h2>A19003</h2>
    This program is about creating a main class that work together with NWSFB03 class 
    @version 1.11 01/20/2010
    @assignment.number Creating a Class (NWSFB03) - A19003 
    @prgm.usage Called from the operating system
    @see "Gaddis, 2009, Starting out with Java, Early Objects, 3rd Ed."
    @see <a href="http://java.sun.com/javase/6/docs/technotes/guides/javadoc/index.html">JavaDoc Documentation</a>
    */
  
  public class A19003
{
 
   public static void main(String[] args)
   {
   /**
   create a NWSFB03 object and assign it to fbReport also using System.out display the name of the program and programer.
   */
      System.out.println("Java Program A19003");
      System.out.println("by Yassin Yazal");
      NWSFB03 fbReport = new NWSFB03("Black Mountain Aviation Center");
      System.out.println(fbReport.getCompanyName());
   }
}
