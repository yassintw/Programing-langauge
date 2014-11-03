     
   import java.util.*;  
    
    /** 
    <h2>A19004</h2>
    This program features the switch statement and the substring method by creating a class called NWSFB04 which will be using and adding functionality to the programs.
    @version 1.11 01/20/2010
    @assignment.number Using Switch and Substring (NWSFB04) - A19004 
    @prgm.usage Called from the operating system
    @see "Gaddis, 2009, Starting out with Java, Early Objects, 3rd Ed."
    @see <a href="http://java.sun.com/javase/6/docs/technotes/guides/javadoc/index.html">JavaDoc Documentation</a>
    */
  
  public class A19004
{
 
   public static void main(String[] args)
   {
   /*
   Set a string variable called strStationWeather. 
   **/
   String strStationWeather = "SAN 1905 1808+24 1512+17 1209+10 1708-06 2016-16 211831 211941 192652 ";
      
      /*
      Using the NWSFB04 class, create an object called myWeather and hand it strStationWeather as a parameter.
      **/
      NWSFB04 myWeather = new NWSFB04(strStationWeather);
      
      /*
      Using the myWeather object, display the station id.
      **/
      System.out.println(myWeather.getStationID());
      
      /*
      Using the myWeather object display the Altitude Weather for the 3000 foot level, then display the Wind Direction, Speed and Temperature.
      **/
      System.out.println(myWeather.getWindInfo1("3"));
      System.out.println(myWeather.getWindInfo("6"));
      System.out.println(myWeather.getWindInfo("9"));
      System.out.println(myWeather.getWindInfo("12"));
      System.out.println(myWeather.getWindInfo("18"));
      System.out.println(myWeather.getWindInfo("24"));
      System.out.println(myWeather.getWindInfo2("30"));
      System.out.println(myWeather.getWindInfo2("34"));
      System.out.println(myWeather.getWindInfo2("39"));
  }
  
}
