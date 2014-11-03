       
   import java.util.*;  
   import java.io.*; 
    /** 
    <h2>NWSFB04</h2>
    This program is about a subordinate class that work together with A19005 class 
    @version 1.11 01/20/2010
    @assignment.number Read / Write Text File  - A19005 
    @prgm.usage Called from the operating system
    @see "Gaddis, 2009, Starting out with Java, Early Objects, 3rd Ed."
    @see <a href="http://java.sun.com/javase/6/docs/technotes/guides/javadoc/index.html">JavaDoc Documentation</a>
    */
   public class NWSFB04
   {

   
   
    /** Create a class level private string variable called strWeather and create a constructor that will accept a string called strVar and assign it to strWeather.
    */
   
      private String strWeather;
      public NWSFB04(String strVar)
      {
         strWeather = strVar;
      }
  
          
      /**
      Create a method called getPos(strAlt)  that accepts a string representing the altitude and returns an integer representing a position in the string. 
      */
      public int getPos(String strAlt)
{
      int intAlt;
      int intRet =0;
      intAlt = Integer.parseInt(strAlt);
      switch (intAlt)
      {
     case 3:
         intRet = 4;
         break;
     case 6:
         intRet = 9;
         break;
     case 9:
         intRet = 17;
         break;
     case 12:
         intRet = 25;
         break;
     case 18:
         intRet = 33;
         break;
     case 24:
         intRet = 41;
         break;
     case 30:
         intRet = 49;
         break;
     case 34:
         intRet = 56;
         break;
     case 39:
         intRet = 63;
         break;         
   }
   return intRet;
}
   /*
   Create a function called getAltitudeWeather(strAlt) that accepts a string representing the altitude and just returns a seven character string representing the Altitude Weather.
   **/
   public String getAltitudeWeather(String strAlt)
{
   
   int intPos = getPos(strAlt);

   
   String strRet = strWeather.substring(intPos,intPos+7);
  
      return strRet;
 }  
   /*
   Create a function called getAltitudeWeather1(strAlt) that accepts a string representing the altitude and just returns a four character string representing the first Altitude Weather.
   **/

   /*
   Create a function called getWindDirection(strAlt) that accepts a string representing the altitude and just returns the wind direction which is the first two characters of the Altitude Weather with an extra zero added to it.
  
   **/
   public String getWindDir(String strAlt)
{
   String strRet = getAltitudeWeather(strAlt);
   return strRet.substring(0,2);

}
   /*
   Create a function called getWindSpeed(strAlt) that accepts a string representing the altitude and just returns the wind speed which is the second two characters of the Altitude Weather.
   **/
   public String getWindSpeed(String strAlt)
{
   String strRet = getAltitudeWeather(strAlt);
   return strRet.substring(2,4);
}
   /*
   Create a function called getWindTemp(strAlt) that accepts a string representing the altitude and just returns the wind temperature which is the last three characters of the Altitude Weather.
   **/
   public String getWindTemperature(String strAlt)
{
   String strRet = getAltitudeWeather(strAlt);
   return strRet.substring(4,7);
}
   /*
   Create a function called getWindInfo(strAlt) that display the wind message.   
   **/
   public String getWindInfo(String strAlt)
{
   String strRet;
   strRet = "Altitude Weather for " + strAlt + "000 feet" ;
   
   return strRet;
}  
  
   }
   