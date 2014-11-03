     
   import java.util.Scanner;
   import java.io.*;
    
    /** 
    <h2>A19005</h2>
    This assignment will build upon skills learned in previous assignments and add the ability to read and write information to a file.
    @version 1.11 01/20/2010
    @assignment.number Read / Write Text File  - A19005
    @prgm.usage Called from the operating system
    @see "Gaddis, 2009, Starting out with Java, Early Objects, 3rd Ed."
    @see <a href="http://java.sun.com/javase/6/docs/technotes/guides/javadoc/index.html">JavaDoc Documentation</a>
    */
  
   public class A19005
   {
   
      public static void main(String[] args) throws IOException
      {
      
      
         String strLine;
         Scanner myInputFile;
         Scanner myOutputFile;
         int x;
        /**
        A file called FBIN.txt contains the Winds Aloft report for all stations in the United States and open the FBIN.txt file for input
        calling NWSFB04 for output and create a FBRPT.txt for output file.
        */
         myInputFile = new Scanner(new File("FBIN.txt"));
         String strStationWeather = "FBIN.txt";
         NWSFB04 myWeather = new NWSFB04(strStationWeather);
         PrintWriter outputFile = new PrintWriter("FBRPT.txt");
      /**
      Use it to skip couple lines in FBIN.txt.
      */
      for (x=0; x<7; x++)
      {
         myInputFile.nextLine();
      }
        
      /**
      Start outputFile in FBRPT.txt include NWSFB04.
      */
         outputFile.println("Weather Report Weather Report VALID 161800Z FOR USE 1400-2100Z. TEMPS NEG ABV 24000");
      
         while (myInputFile.hasNext())
         {
         
            strLine = myInputFile.nextLine();
         
            {
               outputFile.println("== Station ID: " + strLine.substring(0,3));
               outputFile.println( myWeather.getWindInfo("12") );
               outputFile.println("Dir " + strLine.substring(25,27)+ "0 degrees");
               outputFile.println("Spped " + strLine.substring(27,29));
               outputFile.println("Temp " + strLine.substring(29,32));
               }
        
         }
        /**
        Finish output file in FBPRT.txt.
        */
         outputFile.close();
      } 
   } 