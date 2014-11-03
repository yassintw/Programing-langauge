         import java.awt.*;
         import java.awt.event.*;
         import javax.swing.*;
         import java.text.DecimalFormat;
         /** 
         <h2>DataPanel</h2>
         In this assignment create a new application featuring the sales receipts from a theater.
         @author Yassin Yazal
         @email yassintw@gmail.com
         @version 10.01 02/04/2010 
         @assignment.number A19011
         @prgm.usage 
         @see <br><a href="">Gaddis, Starting Out with Java, Early Objects, 3rd ed.</a>
         @see <br><a href="http://java.sun.com/javase/6/docs/api/javax/swing/JFrame.html">Java JFrame Class</a>
         @see <br>also, JPanel, JLabel, JCheckBox, JRadioButton, JButton, Scanner>
         **/

         
         public class DataPanel extends JFrame
         {
            //
         private JPanel panel; //A panel container
         private JLabel messageLabel;  //A message to display
         private JLabel messageLabel2; //A message to display
         private JLabel messageLabel3; //A message to display 
         private JLabel messageLabel4; //A message to display
         private JTextField adultticketprice; //To hold user input
         private JTextField adultticketsold; //To hold user input
         private JTextField childticketprice; //To hold user input
         private JTextField childticketsold; //To hold user input
   
   
         private JButton resetButton; // Performs calculation
         private JButton calcButton; // Performs calculation
         private final int WINDOW_WIDTH= 400; //Window width
         private final int WINDOW_HEIGHT= 200;  //Window height
   
         public DataPanel()
         {
         //Call the JFrame constructor
         super("Theater Revenue");
         //Set the size of the window
         setSize(WINDOW_WIDTH,WINDOW_HEIGHT);
         //Specufy what happens when the close
         //button is clicked 
         setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
         //Build the panel and add it to the frame
         buildPanel();
         //Add the panel to the frame's content pane
         add(panel);
         //Display the window
         setVisible(true);
         }            
         //The buildPanelmethod adds label text field, and a button to a panel 
         private void buildPanel()
         {
         //Create the label, text field, and button components
         messageLabel = new JLabel("Enter the adult ticket price:              ");
         messageLabel2 = new JLabel("Enter the number of adult tickets sold:");
         messageLabel3 = new JLabel("Enter the child ticket price:             ");
         messageLabel4 = new JLabel("Enter the number of child tickets sold:");
         adultticketprice = new JTextField(10);
         adultticketsold = new JTextField(10);
         childticketprice = new JTextField(10);           
         childticketsold = new JTextField(10);
        
         calcButton = new JButton("Calculate Revenue");
         resetButton = new JButton("Reset") ;
         //Add an action listener to the button
         calcButton.addActionListener(new CalcButtonListener());
         resetButton.addActionListener(new ResetButtonListener());
         //Creare a panle to hold the components 
         panel = new JPanel();
         //Add the label, text field, and button to the panel
         panel.add(messageLabel);
         panel.add(adultticketprice);
         panel.add(messageLabel2);
         panel.add(adultticketsold);
         panel.add(messageLabel3);
         panel.add(childticketprice);
         panel.add(messageLabel4);     
         panel.add(childticketsold);
         panel.add(resetButton);
         panel.add(calcButton);
         }
         //Private inner class that handles the event when the user clicks the calculate button
         private class CalcButtonListener implements ActionListener
         {
         public void actionPerformed(ActionEvent e)
         {
         String str;  //To hold text entered 
         String str1; //To hold text entered
         String str2; //To hold text entered
         String str3; //To hold text entered
         double gross; //To hold gross
         double gross1; //To hold gross1
         double net; //To hold net
         double net1; //To hold net1
         double totalgross; //To hold totalgross
         double totalnet; //To hold totalnet
         str = adultticketprice.getText(); //Get the number of adult ticket entered in the text field.
         str1 = adultticketsold.getText(); //Get the number of sold ticket entered in the text field.
         str2 = childticketprice.getText(); //Get the number of child ticket entered in the text field.
         str3 = childticketsold.getText(); //Get the number of sold ticket entered in the text field.
         gross = Double.parseDouble(str)*Double.parseDouble(str1); //Calculate the gross. 
         net = gross*0.8; //Calculate the net
         gross1 = Double.parseDouble(str2)*Double.parseDouble(str3); //Calculate the gross1
         net1 = gross1*0.8; //Calculate the net1
         totalgross = gross + gross1; //Calculate the totalgross
         totalnet = net + net1; //Calculate the totalnet
         //Display a message dialog showing the gross and net.
         JOptionPane.showMessageDialog(null, "Gross revenue for adult tickets sold: $" + gross  + "\nNet revenue for adult ticket sold: $" + net + "\nGross revenue for child tickets sold: $" + gross1 + "\nNet revenue for child tickets sold: $" + net1 + "\nTotal gross revenue: $" + totalgross + "\nTotal net revenue: $" + totalnet);
        
         }
         }
         //Private inner class that handles the event when the user clicks the reset button
         private class ResetButtonListener implements ActionListener
         {
        
         public void actionPerformed(ActionEvent e)
       
         {
         adultticketprice.setText(""); //Set the text tp defult
         adultticketsold.setText(""); //Set the text tp defult
         childticketprice.setText(""); //Set the text tp defult
         childticketsold.setText("");  //Set the text tp defult

         }
         }
         //The main method created an instance of TheaterRevenue class, which displays a window on the screen.
         public static void main(String[] args)
         {
         new TheaterRevenue();
         }
       
         }