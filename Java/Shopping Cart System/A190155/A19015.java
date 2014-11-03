   import java.awt.*;
   import java.awt.event.*;
   import java.io.File;
   import java.io.*;
   import javax.swing.*;
   import java.util.*;
   import java.text.DecimalFormat;
           
        /** 
        <h2>A19015</h2>
        This assignment demonstrates the ability to creat a shopping cart system program.      
        @author Yassin Yazal
        @version 9.01 11/28/2009
        @assignment.number A19015
        @prgm.usage This is the main program
        @see <br><a href="">Gaddis, Starting Out with Java, 3rd Ed</a>
        */



   public class A19015 extends JFrame
   {	
   	//Books
        public static String[] books =  

   {"I Did It Your Way,         11.95",
	 "The History of Scotland,   14.50",
	 "Learn Calculus in One Day, 29.95",
	 "Feel the Stress,           18.50",
	 "Great Poems,               12.95",
	 "Europe on a Shoestring,    10.95",
	 "The Life of Mozart,        14.50"
    };  
     
     //bookPrices
     
      private double[] bookPrices = {11.95, 14.50, 29.95, 18.50, 12.95, 10.95, 14.50};
   	
   
   	
      private JPanel greetingPanel;	   // To hold greeting components
      private JPanel booksPanel;		  // To hold the books components
      private JPanel shoppingCartPanel;   // To hold the shoppingCart components
      private JPanel billPanel;				// To hold the bill components
   
      private JLabel headerLabel;		 // To display header message
      private JList booksList;			// List of books
      private JLabel booksLabel;		  // Display booklist label
   	
      private DefaultListModel listModel; // To add and remove items.
      private JList shoppingCartList;	 // List of Items in shopping cart
      private JLabel shoppingCartLabel;   // Display shopping cart label.
   	
      private JTextArea orderBill;			 // Display the bill.
   
      private JMenuBar menuBar;		 // The menu bar
      private JMenu fileMenu;		   // The file menu
      private JMenu editMenu;		   // The edit menu
      private JMenuItem exitItem;	   // Item to exit application
      private JMenuItem addTo;		  // Item to add selected books to shopping cart
      private JMenuItem remove;		 // Item to remove selected books from shopping cart
      private JMenuItem clearAll;	   // Item to clear all books from shopping cart
      private JMenuItem checkOut;	   // Item to check out
         
  
   
      public A19015()
      {
      // Call the JFrame constructor to set title
         super("A19015 Shopping Cart System");
      
      // Specify an action for the close button.
         setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      
      // Create a BorderLayout manger for the content pane.
         setLayout(new BorderLayout());
      
      // Build the panels.
         buildBooksPanel();
         buildShoppingCartPanel();
         buildBillPanel();
      
      // Add panels to the content pane.
         
         add(booksPanel, BorderLayout.WEST);
         add(shoppingCartPanel, BorderLayout.EAST);
         add(billPanel, BorderLayout.SOUTH);
      
      // Build the menu bar.
         buildMenuBar();
      
      // Pack and display the window.
         pack();
         setVisible(true);
      
      }
   
   

      private void buildBooksPanel()
      {
        
      	
      	// Create a panel.
         booksPanel = new JPanel();
      	
      	// Add GridLayout manager to the content pane.
         booksPanel.setLayout(new GridLayout(2, 1));
      	
      	// Create a greeting message.
         booksLabel = new JLabel("     	Available Books:");
         booksLabel.setFont(new Font("Dialog",Font.BOLD,14));
      	
      	// Create a list
         booksList = new JList(books);
         //Creat a border
         booksList.setBorder(BorderFactory.createTitledBorder("Book List"));
      	// Set the list to multiple interval selection mode.
         booksList.setSelectionMode(ListSelectionModel.MULTIPLE_INTERVAL_SELECTION);
      
      	// Set number of visible rows to 6.
         booksList.setVisibleRowCount(6);
      	
      	// Add lsit to a scroll pane
         JScrollPane booksListScroll = new JScrollPane(booksList);
      	
      	// Add label to the panel.
         booksPanel.add(booksLabel);
      	
      	// Add the list to the panel.
         booksPanel.add(booksListScroll);
      }
   

   
      private void buildShoppingCartPanel()
      {
      // Create a panel to hold another list.
         shoppingCartPanel = new JPanel();
      
      // Add GridLayout manager to the content pane.
         shoppingCartPanel.setLayout(new GridLayout(2, 1));
      
      // Create a greeting message.
         shoppingCartLabel = new JLabel("        		Your Shopping Cart");
         shoppingCartLabel.setFont(new Font("Dialog",Font.BOLD,14));
      
      // Create list model.
         listModel = new DefaultListModel();
      
      // Create the list.
         shoppingCartList = new JList(listModel);
      
         shoppingCartList.setSelectionMode(ListSelectionModel.MULTIPLE_INTERVAL_SELECTION);
      // Create Border
         shoppingCartList.setBorder(BorderFactory.createTitledBorder("Shopping Cart"));
      // Set the number of visible rows to 6.
         shoppingCartList.setVisibleRowCount(6);
      
      // Add list to a scroll pane.
         JScrollPane shoppingCartScroll = new JScrollPane(shoppingCartList);
      
      // Add label to the panel.
         shoppingCartPanel.add(shoppingCartLabel);
      
      // Add list to the panel
         shoppingCartPanel.add(shoppingCartScroll);
      }
   

   
      private void buildBillPanel()
      {
      // Create a panel
         billPanel = new JPanel();
      
      // Create a text area.
         orderBill = new JTextArea(10,20); 
      
      // Add the label to the panel.
         billPanel.add(orderBill);
      }
   

   
      private void buildMenuBar()
      {
      // Create the menu bar.
         menuBar = new JMenuBar();
      
      // Create the file and edit menus
         buildFileMenu();
         buildEditMenu();
        
      
      // Add the file and edit menus to the menu bar.
         menuBar.add(fileMenu);
         menuBar.add(editMenu);
         
      
      // Set the windows menu bar.
         setJMenuBar(menuBar);
      }
   

   
      private void buildFileMenu()
      {
      // Create an Exit menu item.
         exitItem = new JMenuItem("Exit");
         exitItem.setMnemonic(KeyEvent.VK_X);
         exitItem.addActionListener(new ExitListener());
      
      // Create a JMenu object for the file menu.
         fileMenu = new JMenu("File");
         fileMenu.setMnemonic(KeyEvent.VK_F);
      
      // Add the Exit item to the file menu.
         fileMenu.add(exitItem);
      }

   
      private void buildEditMenu()
      {
      // Create an addTo menu item.
         addTo = new JMenuItem("Add to Shopping Cart");
         addTo.setMnemonic(KeyEvent.VK_A);
         addTo.addActionListener(new AddToListener());
      
      // Create a remove menu Item.
         remove = new JMenuItem("Remove book from shopping Cart");
         remove.setMnemonic(KeyEvent.VK_R);
         remove.addActionListener(new RemoveListener());
      
      // Create a clearAll menu item.
         clearAll = new JMenuItem("Clear Shopping Cart");
         clearAll.setMnemonic(KeyEvent.VK_L);
         clearAll.addActionListener(new ClearAllListener());
      
      // Create a checkOut menu item.
         checkOut = new JMenuItem("Check Out");
         checkOut.setMnemonic(KeyEvent.VK_C);
         checkOut.addActionListener(new CheckOutListener());
      
      // Create menu object for Edit Menu.
         editMenu = new JMenu("Edit");
         editMenu.setMnemonic(KeyEvent.VK_E);
      
      // Add items to the Edit menu.
         editMenu.add(addTo);
         editMenu.add(remove);
         editMenu.add(clearAll);
         editMenu.add(checkOut);
      }
   

     /* 
Exit funtion
   */
      private class ExitListener implements ActionListener
      {
         public void actionPerformed(ActionEvent e)
         {
            System.exit(0);
         }
      }
   /*
Add funtion
   */
      private class AddToListener implements ActionListener
      {
         public void actionPerformed(ActionEvent e)
         {  
            double subTotal = 0;
                     double total ;	
         double taxes ;
            int[] listArray = booksList.getSelectedIndices();  
         
            for (int index = 0; index < listArray.length; index++)  
            {  
               listModel.addElement("\n" + books[listArray[index]] + "\n");  
                        
             
         			
}
         }
      }
   
/*
Remove funtion
*/   
      private class RemoveListener implements ActionListener
      {
         public void actionPerformed(ActionEvent e)
         {	
         // Get the books selected for removal.
            int cart = shoppingCartList.getSelectedIndex();
         
            if (cart > -1)
            {
            // Remove books from shopping cart.
               listModel.removeElementAt(cart);
            
             int start = 0;
              
              
    int end = shoppingCartList.getModel().getSize() - 1;
    if (end >= 0) {
      shoppingCartList.setSelectionInterval(start, end);
            }
            
            }
            displayBills();
        
    

         }
      }
   
   /**
Clear funtion
    */
   
      private class ClearAllListener implements ActionListener
      {
         public void actionPerformed(ActionEvent e)
         {
         	// Clear all books from shopping cart.
            listModel.clear(); 
         	
         	// Clear selections.
            booksList.clearSelection();
         	
            repaint();
         }
      }
   
   /**
Check out funtion
    */
   
      private class CheckOutListener implements ActionListener
      {
         public void actionPerformed(ActionEvent e)
         {
            displayBill();
            pack();
         
         }
      }
              /*
      Display the bill include subTotal, total, and taxes apply decimal format.
      */
   	
      public void displayBill()
      {
        DecimalFormat dollar = new DecimalFormat("$##0.00");
      
         int[] listArray = booksList.getSelectedIndices();  
        
         double subTotal = 0;  
         double total = 0.0;	
         double taxes = 0.0;
      	  
         for (int index = 0; index < listArray.length; index++) 
         {
            subTotal = subTotal  
                + bookPrices[listArray[index]];
         }
      					
         taxes = subTotal * .06; 
         total = subTotal + taxes;
      	
         String header = "\n\tOnline Books\n";
      
         String bill ="\n\t\tSubTotal: " + dollar.format(subTotal)+ "\n\t\t   Taxes:   " + dollar.format(taxes)+ "\n\t\t   Total: "  + dollar.format(total);
      						
         orderBill.setText(bill);
         orderBill.setFont(new Font("Courier", Font.BOLD, 14));
      }
      
     /*
      Display the bill include subTotal, total, and taxes apply decimal format.
      */
       public void displayBills()
      {
         DecimalFormat dollar = new DecimalFormat("$##0.00");
      
        
        int[] listArray = shoppingCartList.getSelectedIndices();  
          
         double total = 0.0;	
         double taxes = 0.0;
      	double subTotal = 0; 
           
         for (int index = 0; index < listArray.length; index++) 
         {
            subTotal = subTotal + bookPrices[listArray[index]];
        
         }
      					
         taxes = subTotal * .06; 
         total = subTotal + taxes;
      
         
      
         String bill ="\n\t\tSubTotal: " + dollar.format(subTotal)+ "\n\t\t   Taxes:   " + dollar.format(taxes)+ "\n\t\t   Total: "  + dollar.format(total);
      						
         orderBill.setText(bill);
         orderBill.setFont(new Font("Courier", Font.BOLD, 14));
      }

   
   
   
   /*
     display the program.
    */
   
   
      
      public static void main(String[] args)
      {
         new A19015();
      }
   }