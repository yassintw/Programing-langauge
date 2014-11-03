       import java.sql.*;
       import java.util.*;
       import java.io.*;
         /** 
           <h2>A19013</h2>
            This assignment demonstrates the ability to read a database and format the sorted data using a 
            function called Proper and Pad.      
            @author Yassin Yazal
            @version 9.01 11/28/2009
            @assignment.number A19013
            @prgm.usage This is the main program
            @see <br><a href="">Gaddis, Starting Out with Java, 3rd Ed</a>
          */
        public class A19013
       {
           public static void main(String[] args)
          {
             Status("Starting A19013");
            /** Describes WHERE the DB is and what TYPE it is */
            Connection dbConn;     
            /** Contains the SQL commands for the database manager */
             Statement dbCmdText;  
                          /** Used to temporarily hold the SQL command */                         
             String strSQL;         
            /** Contains the records from the database manager */
             ResultSet dbRecordset;
            /** Contains the operating system ODBC name */             
             String dbName = "BMAC"; // ODBC name on our computer
            
                            String strstationID;
                            String strstationName;
                            String strcity;
                            String strstate;
            Status("Attempting to establish a database connection");
             try
            {
               // Generic SUN driver for databases
                Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
                /**
                Before running this, we have to set up a
                connection to the database using the 
                operating system utilities (see tutorial).
                We are calling the connection
                BMAC because it will be used with the Weather.MDB database.
                */
                dbConn = DriverManager.getConnection("jdbc:odbc:" + dbName);
                    
                // if you cannot find the database, handle it here
                if (dbConn == null)  // Is the Connection working?
                { 
                  Status("Connection to database failed");
               }
                else
                {
                  Status("Opening the text file ");                                
                   FileWriter fw = new FileWriter ("stations.txt");
                   BufferedWriter bw = new BufferedWriter(fw);
                   PrintWriter outFile = new PrintWriter(bw);
              
                                            
                   Status("Connection " + dbName + " successful");
                   dbCmdText = dbConn.createStatement();
                   // We are going to communicate with the database
                   // using a SQL command string
                    // Now list all records in the database
                   strSQL = "SELECT * FROM stations ORDER BY city";
                  dbRecordset=dbCmdText.executeQuery(strSQL);
                   // .next() reads the next record and reports
                    // if it was successful
                   while (dbRecordset.next())
                  {
                      strstationID = dbRecordset.getString("stationID");
                      strstationName = dbRecordset.getString("stationName");
                      strcity = dbRecordset.getString("city");
                      strstate = dbRecordset.getString("state");
                     // get a specific field and display it 
                      System.out.print(strstationID + " ");
                      System.out.print(Pad(Proper(strstationName), 24));
                      System.out.print(" ");
                      System.out.print(Pad(Proper(strcity), 11));
                      System.out.print(" ");
                      System.out.print(strstate);
                      System.out.println(" ");

                    
                    // write the record to a file
                      outFile.print(strstationID + " ");
                      outFile.print(Pad(Proper(strstationName), 24));
                      outFile.print(" ");
                      outFile.print(Pad(Proper(strcity), 11));
                      outFile.print(" ");
                      outFile.print(strstate);
                      outFile.println(" ");

                   }  // end of while                                       
                  dbRecordset.close();
                   outFile.close();
                }  // end of else
                Status("Closing the database and text file");
                dbConn.close();
               dbCmdText = null;
             }  // end of try
                 catch (Exception myExceptionVariable) 
               {
                   Status("The database connection " + dbName + " could not be opened");
                  Status(myExceptionVariable.toString());
                }  // end of catch
             Status("A19013 is ending");
         }  
            /*Create a private function called Proper() that will accept a string and return a string that is all 
            lower case except for the first letter of each word.  Because this is a function in the main program, 
            you will need to include the modifier static in the definition line.      
            **/


              private static String Proper(String strVar) {
                  char[] chars = strVar.trim().toLowerCase().toCharArray();
                  boolean found = false;
                  for (int i=0; i<chars.length; i++) {
                  if (!found && Character.isLetter(chars[i])) {
                  chars[i] = Character.toUpperCase(chars[i]);
                  found = true;
                  } else if (Character.isWhitespace(chars[i])) {
                  found = false;
                  }
                  }
                  return String.valueOf(chars);
                  }

               /**
               Create a private function called Pad() that will accept two parameters, 
               a string and an integer length.  It will return a string that is exactly the number 
               of characters specified by the length parameter that passed to the function.  
               This means it will either cut off a long string or add spaces to a short string.  
               */

               private static String Pad(String s, int n)
                {
                
               if (s != null && s.length() > n)
               s = s.substring(0, n);


               return String.format("%1$-" + n + "s", s) ; 
               }
           


               public static void Status(String strMsg)
               {
             System.out.println("Main: " + strMsg);
          }
       }


