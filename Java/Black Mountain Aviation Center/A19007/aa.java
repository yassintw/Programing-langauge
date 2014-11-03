001       import java.awt.*;
002       import java.awt.event.*;
003       import javax.swing.*;
004      /** 
005            <h2>DemoForm07</h2>
006            Demonstrates the use of a form along with labels, buttons
007            check boxes and option buttons.
008       @author John J. Couture
009            @version 10.01 02/04/2010 
010            @assignment.number A19007
011            @prgm.usage DemoForm07 app = new DemoForm07();
012            @see <br><a href="">Gaddis, Starting Out with Java, Early Objects, 3rd ed.</a>
013            @see <br><a href="http://java.sun.com/javase/6/docs/api/javax/swing/JFrame.html">Java JFrame Class</a>
014            @see <br>also, JPanel, JLabel, JCheckBox, JRadioButton, JButton, Scanner>
015            **/
016        public class DemoForm07 extends JPanel
017       {
018       // ***************************************************
019       // Section 710 - Form / Class Level Variables
020       // ***************************************************
021          // Section 711 - Constants, Labels and Buttons
022          /** Width of JFrame */
023          private int WIDTH =415;
024            /** Height of JFrame */
025          private int HEIGHT = 375;
026            /** Main Window to hold form */
027          private JFrame frame;
028            /** The form within the frame */
029          private JPanel panel;
030            /** Main title on the form */
031          private JLabel lblTitle;
032            /** Label to hold the name of the programmer */
033          private JLabel lblProgrammer; 
034         /** Label at top of airport names */
035          private JLabel lblAirport;
036            /** Label at top of nine altitudes */
037          private JLabel lblAltitude;
038            /** Label to hold the Wind Direction */
039          private JLabel lblDir;
040            /** Label to hold the Wind Speed */
041          private JLabel lblSp;
042            /** Label to hold the Wind Temperature */
043          private JLabel lblTemp;
044            /** Static label at left of Wind Direction */
045          private JLabel lblPDir;
046            /** Static label at left of Wind Speed */
047          private JLabel lblPSp;
048            /** Static label at left of Wind Temperature */
049          private JLabel lblPTemp;
050            /** The Exit Button */
051          private JButton btnExit;
052          
053            // Section 712 ***********************************
054            // An array of Radio Buttons for the four Airports 
055          private JRadioButton [] Apt = new JRadioButton[4];
056       
057          // Section 713 ***********************************
058            // An array of Radio Buttons for the nine altitudes
059          private JRadioButton [] Alt = new JRadioButton[9];
060            
061            // Section 714 ***********************************
062          /** Object containing the code for decoding the Nat Weather Svc FD report */
063          private NWSFB04[] wea;    
064            
065          // Section 715 ***********************************        
066            /** An Array of Airport Labels */
067          private String[] strApt = 
068          {"San Diego","Santa Barbara","San Francisco","Seattle"};
069            
070            /** Temporary variable to hold a number indicating
071             which Airport radio button has been selected */
072          private int intAirport = 0;
073          private int intAirportMax = 4; // How many airports in array
074            
075            // Section 716 ***********************************
076            /** Array of Altitude Labels */
077          private String[] strAlt = 
078          {"3","6","9","12","18","24","30","34","39"};
079            
080            /** Temporary variable to hold Altitude Labels */
081          private String strAltitude = "3";
082                    
083          // ***************************************************
084          // Section 720 - The Constructor
085          // ***************************************************
086           public DemoForm07() // constructor
087          { 
088             // *************************************************
089             // Section 721 - Misc Section
090             // *************************************************
091             wea = new NWSFB04[4];
092             wea[0] = new NWSFB04("SAN 1805 2410+21 2220+14 2225+07 2126-09 2122-18 212935 233245 245154 ");
093             wea[1] = new NWSFB04("SBA 1308 1709+18 2114+13 2118+07 2216-07 2325-20 234236 234947 245354 ");
094             wea[2] = new NWSFB04("SFO 2007 1706+17 1607+10 1905+04 2809-09 2915-23 271540 271449 281853 ");
095             wea[3] = new NWSFB04("SEA 9900 0113+08 3409+06 3410+01 3317-14 3328-25 345341 345850 335355 ");
096          
097            // Section 722 ********************************** 
098             /**
099            This creates the windows frame and provides
100            the little red 'x' in the upper left corner
101            that enables you to close the window
102            */
103             frame = new JFrame("Demo Form 07");
104             frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
105            
106            /** 
107            Setting the Layout Manager to null enables you to 
108            precisely position controls using x,y coordinates 
109            */
110             panel = new JPanel(null); 
111             panel.setPreferredSize( new Dimension(WIDTH, HEIGHT));
112             panel.setBackground(Color.lightGray);
113          
114            // Section 723 ********************************** 
115             /** Main Label */  
116             lblTitle = new JLabel("Black Mountain Aviation Center");
117            
118            /** 
119            This is an example of how to set the font
120            */
121             lblTitle.setFont(new Font("Helvetica", Font.BOLD,24));
122            
123            /** 
124            The setSize() method sets the width and height of the
125            object.  410 is the width, 20 is the height
126            */
127             lblTitle.setSize(410,20);
128          
129            /**
130            The setLocation() method is where you set the x,y
131            location of the object.  In this case, the 
132            title is set 15 pixels from the left margin 
133            and 25 pixels from the top margin
134            */
135             lblTitle.setLocation(15,25);
136          
137            /** 
138            Seting the color of the font
139            */
140             lblTitle.setForeground(Color.blue);
141          
142            /**
143            Now that you are done setting the properties,
144            add it to the panel (sort of like your canvas).
145            */
146             panel.add(lblTitle);
147          
148             /** Now do all of the other labels */
149             lblProgrammer = new JLabel("programmed by John J. Couture");
150             lblProgrammer.setSize(200,20);
151             lblProgrammer.setLocation(100,50);  // 100 from Left, 50 from Top
152             panel.add(lblProgrammer);
153            
154             /**
155            Airport Label
156            */
157             lblAirport = new JLabel("Airport");
158             lblAirport.setSize(200,20);
159             lblAirport.setLocation(15,80);
160             panel.add(lblAirport);
161            
162             /**
163            Label for the Altitude
164            */      
165             lblAltitude = new JLabel("Altitude in Thousands");
166             lblAltitude.setSize(200,20);
167             lblAltitude.setLocation(15,175);
168             panel.add(lblAltitude);
169            
170             /**
171            Labels for the Answers
172            */ 
173             lblPDir    = new JLabel("Direction: ");
174             lblPDir.setSize(100,20);
175             lblPDir.setLocation(15,225);
176             panel.add(lblPDir);
177          
178             lblDir = new JLabel("-----");
179             lblDir.setSize(100,20);
180             lblDir.setLocation(115,225);
181             panel.add(lblDir);
182          
183             lblPSp   = new JLabel("Speed: ");
184             lblPSp.setSize(100,20);
185             lblPSp.setLocation(15,250);
186             panel.add(lblPSp);
187          
188             lblSp = new JLabel("-----");
189             lblSp.setSize(100,20);
190             lblSp.setLocation(115,250);
191             panel.add(lblSp);
192          
193             lblPTemp   = new JLabel("Temp C: ");
194             lblPTemp.setSize(100,20);
195             lblPTemp.setLocation(15,275);
196             panel.add(lblPTemp);
197          
198             lblTemp = new JLabel("-----");
199             lblTemp.setSize(100,20);
200             lblTemp.setLocation(115,275);
201             panel.add(lblTemp);
202          
203          
204             // ***************************************************
205             // Section 730 - Standard Buttons
206             // ***************************************************
207            
208            /**
209            Exit Button
210            */
211             btnExit = new JButton("Exit");
212             btnExit.setSize(350,30);
213             btnExit.setLocation(15,300);
214             panel.add(btnExit);
215             btnExit.addActionListener (new ButtonListener());
216            
217            
218             // ***************************************************
219             // Section 740 - Radio Buttons
220             // ***************************************************
221            
222             /** 
223            Each radio button has to be added to the form.
224            You can do it one at a time (very tedious) or
225            you can use an array.  Here we are using an array.                      
226             */
227            
228            // Section 741 ************************************
229            // Radio Buttons for four Airport Locations
230            // See section 712 above for the array declaration 
231             AirportListener aptEvent = new AirportListener();
232             ButtonGroup groupApt = new ButtonGroup();
233             for (int count=0; count<4; count++)
234             {
235                Apt[count] = new JRadioButton(strApt[count],true);
236                Apt[count].addActionListener (aptEvent);
237                Apt[count].setSize(110,20);  // wide, high
238                groupApt.add (Apt[count]);
239                panel.add(Apt[count]);
240             }
241             Apt[0].setLocation(15,100); // left, top 
242             Apt[1].setLocation(125,100);
243             Apt[2].setLocation(15,125); 
244             Apt[3].setLocation(125,125);  
245          
246            // Section 742 *********************************** 
247            // Radio Buttons for Nine Altitudes
248            // See section 713 above for the array declaration
249             AltitudeListener altEvent = new AltitudeListener();
250             ButtonGroup groupAlt = new ButtonGroup();
251             for (int count=0; count<9; count++)
252             {
253                Alt[count] = new JRadioButton(strAlt[count],true);
254                groupAlt.add (Alt[count]);
255                Alt[count].addActionListener (altEvent);
256                Alt[count].setSize(40,20);   // wide, high
257                int x = 200;                 // pixels from top
258                int y = (count * 40) + 15;   // pixels from left
259                Alt[count].setLocation(y,x); // left,top
260                panel.add(Alt[count]);
261             }
262            
263          
264             // *************************************************
265             // Section 750 - Finish up the Form
266             // *************************************************
267             frame.getContentPane().add(panel);
268          }  // end of DemoForm07
269            
270           // *************************************************
271           // Section 760 - Display the Form
272           // *************************************************
273           public void display()
274          {
275             frame.pack();
276             frame.setVisible(true);
277          }
278       
279           // *************************************************
280           // Section 770 - Update the Text Boxes
281           // *************************************************
282           public void updateTextBoxes()
283          {
284             /**
285            Once you know which airport and what altitude the user
286            wants, you are ready to update the text boxes.  The code
287            below first checks to see if the airport and altitude 
288            selections are valid.
289            
290            To keep your program from crashing, we need to make sure
291            that our intAirport number is valid.
292            
293            */
294             if (intAirport > -1 && intAirport < intAirportMax)
295             {
296                if (Integer.parseInt(strAltitude) > 0)
297                {   
298                // get the wind direction, speed and temperature
299                // using the appropriate airport data from the
300                // wea array.
301                   lblDir.setText(wea[intAirport].getWindDirection(strAltitude));
302                   lblSp.setText(wea[intAirport].getWindSpeed(strAltitude));
303                   lblTemp.setText(wea[intAirport].getWindTemperature(strAltitude));
304                
305                // update some additional labels
306                   lblAirport.setText("Airport="+strApt[intAirport]);
307                   lblAltitude.setText("Altitude="+strAltitude+"000");
308                }
309             }       
310          }
311           // *************************************************
312           // Section 780 - Action Listeners
313           // *************************************************
314             
315           // Section 781 *************************************
316           private class ButtonListener implements ActionListener
317          {
318              public void actionPerformed(ActionEvent event)
319             {
320                /** 
321                    This button listener could be used for several
322                    buttons on the form.  So our goal here is to
323                    determine which button was clicked (even though
324                    in this program there is only one button).
325                    */
326                if (event.getSource() == btnExit)
327                {
328                   // In other words, when the Exit button is
329                    // clicked, return to the operating system
330                   System.exit(0);         
331                }
332             }
333          }  // end of ButtonListener
334       
335           // Section 782 *********************************** 
336             // Action Listener for the Airport Radio Buttons
337           private class AirportListener implements ActionListener
338          {
339              public void actionPerformed(ActionEvent event)
340             {
341                // set a default airport.  In other words, when we
342                    // run this, the "zero" element in the array
343                    // will be used which is currently "San Diego"
344                    // See Section 721 above.
345                intAirport = 0;
346                    
347                    // Loop through all of the radio buttons
348                    // until we figure out which one is the one
349                    // that triggered this event.
350                for(int count=0; count<4; count++)
351                {
352                   if(event.getSource() == Apt[count])
353                   {
354                      intAirport = count;
355                   }
356                }
357                    
358                    // Ok, we know which airport (intAirport)
359                    // Now go update the text boxes.
360                updateTextBoxes();
361             }
362          }
363                            
364           // Section 783 *********************************** 
365             // Action Listener for the Altitude Radio Buttons
366           private class AltitudeListener implements ActionListener
367          {
368              public void actionPerformed(ActionEvent event)
369             {
370                // This one is a little easier because
371                    // we grab the text value of the radio button
372                    // and pass that to our NWSFB object.
373                    // see section 770
374                strAltitude = event.getActionCommand();
375                updateTextBoxes();
376             }
377          }
378                    
379       }



























































