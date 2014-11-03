       import java.awt.*;
       import java.awt.event.*;
       import javax.swing.*;
      /** 
            <h2>WeatherForm07</h2>
            Demonstrates the use of a form along with labels, buttons
            check boxes and option buttons.
            @author Yassin Yazal
            @version 10.01 02/04/2010 
            @assignment.number A19007
            @prgm.usage WeatherForm07 app = WeatherForm07();
            @see <br><a href="">Gaddis, Starting Out with Java, Early Objects, 3rd ed.</a>
            @see <br><a href="http://java.sun.com/javase/6/docs/api/javax/swing/JFrame.html">Java JFrame Class</a>
            @see <br>also, JPanel, JLabel, JCheckBox, JRadioButton, JButton, Scanner>
            **/
        public class WeatherForm07 extends JPanel
       {
       
           /** Width of JFrame */
          private int WIDTH =415;
            /** Height of JFrame */
          private int HEIGHT = 375;
            /** Main Window to hold form */
          private JFrame frame;
            /** The form within the frame */
          private JPanel panel;
            /** Main title on the form */
          private JLabel lblTitle;
            /** Label to hold the name of the programmer */
          private JLabel lblProgrammer; 
         /** Label at top of airport names */
          private JLabel lblAirport;
            /** Label at top of nine altitudes */
          private JLabel lblAltitude;
            /** Label to hold the Wind Direction */
          private JLabel lblDir;
            /** Label to hold the Wind Speed */
          private JLabel lblSp;
            /** Label to hold the Wind Temperature */
          private JLabel lblTemp;
            /** Static label at left of Wind Direction */
          private JLabel lblPDir;
            /** Static label at left of Wind Speed */
          private JLabel lblPSp;
            /** Static label at left of Wind Temperature */
          private JLabel lblPTemp;
            /** The Exit Button */
          private JButton btnExit;
          
          private JRadioButton [] Apt = new JRadioButton[21];
       
          private JRadioButton [] Alt = new JRadioButton[9];
            
                      /** Object containing the code for decoding the Nat Weather Svc FD report */
          private NWSFB04[] wea;    
            
          private JComboBox TVShows;      
            /** An Array of Airport Labels */
          private String[] strApt = 
          {"BIH","BLH","FAT","FOT","ONT","RBL","SAC","SAN","SBA","SFO","SIY","WJF","AST","IMB","LKV","OTH","PDX","RDM","GEG","SEA","YKM"};
          TVShows = new JComboBox(strApt);  
            /** Temporary variable to hold a number indicating
             which Airport radio button has been selected */
          private int intAirport = 0;
          private int intAirportMax = 22; 
            
            /** Array of Altitude Labels */
          private String[] strAlt = 
          {"3","6","9","12","18","24","30","34","39"};
            
            /** Temporary variable to hold Altitude Labels */
          private String strAltitude = "3";
                    
           public WeatherForm07() 
          { 
             
            wea = new NWSFB04[21];
             wea[0] = new NWSFB04("BIH      9900    9900-07 3221-05 3355-15 3160-27 346644 326153 306455 ");
             wea[1] = new NWSFB04("BLH 0714 0812+01 0511-04 3324-01 3043-12 3046-26 295342 296351 285454 ");
             wea[2] = new NWSFB04("FAT 9900 9900+02 3413-01 3531+01 3442-14 3137-27 334844 325352 305256 ");
             wea[3] = new NWSFB04("FOT 0219 0330+07 0236+02 0242-03 3336-17 3141-28 313943 324254 315161 ");
             wea[4] = new NWSFB04("ONT 0418 0510+03 0315+00 3616+03 3122-12 3229-26 313342 294351 294455 ");
             wea[5] = new NWSFB04("RBL 3619 0318+03 0334+01 0143-03 3344-16 3251-28 334544 335455 325960 ");
             wea[6] = new NWSFB04("SAC 0214 0308+03 0123+03 0135-02 3344-15 3242-27 334644 335653 315958 ");
             wea[7] = new NWSFB04("SAN 0915 0910+03 0415+03 3222+05 3122-12 3025-26 294141 294251 284255 ");
             wea[8] = new NWSFB04("SBA 0606 0308+02 0215+00 3625+04 3417-13 3420-27 332042 302852 293756 ");
             wea[9] = new NWSFB04("SFO 0514 0212+04 0127+04 0134+01 3434-14 3129-27 333843 324253 304558 ");
             wea[10] = new NWSFB04("SIY      0716-02 0236-01 0248-05 3448-17 3248-29 325044 335955 325761 ");
             wea[11] = new NWSFB04("WJF      0632+00 0320-03 3514+02 3424-12 3427-26 323242 303652 294655 ");
             wea[12] = new NWSFB04("AST 0306 0123+00 3532-03 3641-07 3440-23 3354-33 326646 327755 317962 ");
             wea[13] = new NWSFB04("IMB              0122-09 3639-11 3552-23 3562-33 349247 349956 327057 ");
             wea[14] = new NWSFB04("LKV              0123-07 3645-08 3559-21 3467-29 338545 339255 326658 ");
             wea[15] = new NWSFB04("OTH 0418 0327+03 0134-01 0150-05 3541-20 3243-30 314544 325654 325962 ");
             wea[16] = new NWSFB04("PDX 0207 0115-03 3632-04 3646-08 3554-22 3358-33 327246 328656 327661 ");
             wea[17] = new NWSFB04("RDM      0406-06 0128-04 3644-09 3562-21 3460-31 337946 339156 327559 ");
             wea[18] = new NWSFB04("GEG      2914-09 3422-12 3537-15 3442-25 3442-37 335150 335756 325956 ");
             wea[19] = new NWSFB04("SEA 0206 3519-05 3532-05 3542-08 3547-24 3450-35 327849 329857 327760 ");
             wea[20] = new NWSFB04("YKM 9900 3409-06 3525-08 3539-11 3660-23 3462-35 338848 830256 326558 ");
                          
             /**
            This creates the windows frame and provides
            the little red 'x' in the upper left corner
            that enables you to close the window
            */
             frame = new JFrame("Asgn A19007");
             frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            
            /** 
            Setting the Layout Manager to null enables you to 
            precisely position controls using x,y coordinates 
            */
             panel = new JPanel(null); 
             panel.setPreferredSize( new Dimension(WIDTH, HEIGHT));
             panel.setBackground(Color.lightGray);
          
            
             /** Main Label */  
             lblTitle = new JLabel("Black Mountain Aviation Center");
            
            /** 
            This is an example of how to set the font
            */
             lblTitle.setFont(new Font("Helvetica", Font.BOLD,24));
            
            /** 
            The setSize() method sets the width and height of the
            object.410 is the width, 20 is the height
            */
             lblTitle.setSize(410,20);
          
            /**
            The setLocation() method is where you set the x,y
            location of the object.  In this case, the 
            title is set 15 pixels from the left margin 
            and 25 pixels from the top margin
            */
             lblTitle.setLocation(15,25);
          
            /** 
            Seting the color of the font
            */
             lblTitle.setForeground(Color.red);
          
            /**
            Now that you are done setting the properties,
            add it to the panel (sort of like your canvas).
            */
             panel.add(lblTitle);
          
             /** Now do all of the other labels */
             lblProgrammer = new JLabel("programmed by Yassin Yazal");
             lblProgrammer.setSize(200,20);
             lblProgrammer.setLocation(100,50);  
             panel.add(lblProgrammer);
            
             /**
            Airport Label
            */
             lblAirport = new JLabel("Airport");
             lblAirport.setSize(200,20);
             lblAirport.setLocation(15,80);
             panel.add(lblAirport);
            
             /**
            Label for the Altitude
            */      
             lblAltitude = new JLabel("Altitude in Thousands");
             lblAltitude.setSize(200,20);
             lblAltitude.setLocation(15,175);
             panel.add(lblAltitude);
            
             /**
            Labels for the Answers
            */ 
             lblPDir    = new JLabel("Direction: ");
             lblPDir.setSize(100,20);
             lblPDir.setLocation(15,225);
             panel.add(lblPDir);
          
             lblDir = new JLabel("-----");
             lblDir.setSize(100,20);
             lblDir.setLocation(115,225);
             panel.add(lblDir);
          
             lblPSp   = new JLabel("Speed: ");
             lblPSp.setSize(100,20);
             lblPSp.setLocation(15,250);
             panel.add(lblPSp);
          
             lblSp = new JLabel("-----");
             lblSp.setSize(100,20);
             lblSp.setLocation(115,250);
             panel.add(lblSp);
          
             lblPTemp   = new JLabel("Temp C: ");
             lblPTemp.setSize(100,20);
             lblPTemp.setLocation(15,275);
             panel.add(lblPTemp);
          
             lblTemp = new JLabel("-----");
             lblTemp.setSize(100,20);
             lblTemp.setLocation(115,275);
             panel.add(lblTemp);
                   
                        
            /**
            Exit Button
            */
            btnExit = new JButton("Exit");
             btnExit.setSize(350,30);
             btnExit.setLocation(15,300);
             panel.add(btnExit);
             btnExit.addActionListener (new ButtonListener());
            
                   
            TVShows = new JComboBox();
TVShows.addItem("West Wing");
TVShows.addItem("JAG");
TVShows.addItem("Alias");
TVShows.addItem("Agency");
TVShows.addItem("Enterprise");
TVShows = new JComboBox(strApt);
TVShows.addActionListener (new CBListener());
TVShows.setSize(200,20); // width,heigth
TBShows.setLocation(15,65);  // from left, from top
panel.add(TVShows);

       private class CBListener implements ActionListener
{
   public void actionPerformed(ActionEvent event)
   {
      if (TVShows.getSelectedIndex > -1)
      {
         // This line returns the number or position selected
         //    or a -1 if they haven't selected anything yet
         intTVSelectedNumber = TVShows.getSelectedIndex();

         // This line returns the string contained in the 
         //    combo box.  Like "West Wing" in the example.
         strTVSelectedName = TVShows.getSelectedItem();
      }
   }
}              
             /** 
            Each radio button has to be added to the form.
            You can do it one at a time (very tedious) or
            you can use an array.  Here we are using an array.                      
             */
           /**          
             AirportListener aptEvent = new AirportListener();
             ButtonGroup groupApt = new ButtonGroup();
            for (int count=0; count<7; count++)
             {
                Apt[count] = new JRadioButton(strApt[count],true);
                Apt[count].addActionListener (aptEvent);
                Apt[count].setSize(54,20);  // wide, high
                groupApt.add (Apt[count]);
                panel.add(Apt[count]);
                 int x = 100;                                 
                 int y = (count * 50) + 40;
                Apt[count].setLocation(y,x);
                  }
              for (int count=7; count<14; count++)
             {
                Apt[count] = new JRadioButton(strApt[count],true);
                Apt[count].addActionListener (aptEvent);
                Apt[count].setSize(54,20);  // wide, high
                groupApt.add (Apt[count]);
                panel.add(Apt[count]);
                              
                 int q = 125;
                
                 int w = ((count-7) * 50) + 40;
                Apt[count].setLocation(w,q);
                              }
               for (int count=14; count<21; count++)
             {
                Apt[count] = new JRadioButton(strApt[count],true);
                Apt[count].addActionListener (aptEvent);
                Apt[count].setSize(54,20);  // wide, high
                groupApt.add (Apt[count]);
                panel.add(Apt[count]);
                 int e = 150;
                 int r = ((count-14) * 50) + 40;
                
                Apt[count].setLocation(r,e);
                              }

                     
             AltitudeListener altEvent = new AltitudeListener();
             ButtonGroup groupAlt = new ButtonGroup();
             for (int count=0; count<9; count++)
             {
                Alt[count] = new JRadioButton(strAlt[count],true);
                groupAlt.add (Alt[count]);
                Alt[count].addActionListener (altEvent);
                Alt[count].setSize(40,20);   // wide, high
                int x = 200;                 // pixels from top
                int y = (count * 40) + 15;   // pixels from left
               Alt[count].setLocation(y,x); // left,top
                panel.add(Alt[count]);
             }
            
         */ 
             
             frame.getContentPane().add(panel);
        }  
           
                  public void display()
          {
             frame.pack();
             frame.setVisible(true);
          }
       
                      public void updateTextBoxes()
          {
                if (intAirport > -1 && intAirport < intAirportMax)
             {
                if (Integer.parseInt(strAltitude) > 0)
                {   
               

                 lblSp.setText(wea[intAirport].getWindSpeed(strAltitude));
                   lblTemp.setText(wea[intAirport].getWindTemperature(strAltitude));
                  lblDir.setText(wea[intAirport].getWindDir(strAltitude));
                  lblAirport.setText("Airport="+strApt[intAirport]);
                   lblAltitude.setText("Altitude="+strAltitude+"000");
               }
             }       
          }
          
           private class ButtonListener implements ActionListener
          {
              public void actionPerformed(ActionEvent event)
             {
                /** 
                    This button listener could be used for several
                    buttons on the form.    */
                if (event.getSource() == btnExit)
                {
                  
                   System.exit(0);         
                }
             }
          }  
       
          
           private class AirportListener implements ActionListener
          {
              public void actionPerformed(ActionEvent event)
             {
                 intAirport = 0;
                    
                  for(int count=0; count<21; count++)
                {
                  if(event.getSource() == Apt[count])
                   {
                     intAirport = count;
                  }
                }
                    
                 updateTextBoxes();
             }
         }
                            
           
           private class AltitudeListener implements ActionListener
          {
              public void actionPerformed(ActionEvent event)
             {
               
                strAltitude = event.getActionCommand();
                updateTextBoxes();
             }
          }
                    
       }























































