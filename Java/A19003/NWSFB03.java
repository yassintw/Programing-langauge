       
   import java.util.*;  
    
    /** 
    <h2>NWSFB03</h2>
    This program is about a subordinate class that work together with A19003 class 
    @version 1.11 01/20/2010
    @assignment.number Creating a Class (NWSFB03) - A19003 
    @prgm.usage Called from the operating system
    @see "Gaddis, 2009, Starting out with Java, Early Objects, 3rd Ed."
    @see <a href="http://java.sun.com/javase/6/docs/technotes/guides/javadoc/index.html">JavaDoc Documentation</a>
    */
   public class NWSFB03
   {
    /** Create a constructor that will accept a string called strVar and assign it to a PRIVATE String variable called strCompanyName.
    */
   
      private String strCompanyName;
      public NWSFB03(String strVar)
      {
         strCompanyName = strVar;
      }
  
     /**
     Create a method called getCompanyName() that will return the contents of strCompanyName
     */
     
      public String getCompanyName()
      {
         return strCompanyName;
      }
   
   
   
   
   }