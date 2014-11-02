  import java.awt.*;   
  import java.awt.event.*;   
  import java.io.File;   
  import java.io.*;   
  import javax.swing.*;   
  import java.util.*;   
  import java.text.DecimalFormat; 

 public class A19015 extends JFrame   

{  

   public static String[] bookChoicesItems =  

   {"I Did It Your Way,         11.95",
	 "The History of Scotland,   14.50",
	 "Learn Calculus in One Day, 29.95",
	 "Feel the Stress,           18.50",
	 "Great Poems,               12.95",
	 "Europe on a Shoestring,    10.95",
	 "The Life of Mozart,        14.50"
    };  

      

    static double[] bookChoicesPrices = { 11.95, 14.50, 29.95, 18.50 , 12.95, 10.95, 14.50};  

       

    private JList bookChoices;
    private JList list;  
private DefaultListModel listModel;
    private checkOutButtonHandler cHandler;   

    private clearButtonHandler crHandler;  

    private selectionButtonHandler sHandler;  

    private removeButtonHandler rmHandler;  

   private JButton checkB,clearB,selectionB,removeB;  

   // private JCheckBox check;  

    private JTextArea bill;  

    private Container pane;  

       

   public A19015()  

    {  

     super("A19015 Shopping Cart System");  

    

       pane = getContentPane();  

     pane.setBackground(new Color(0, 0, 0));  

       pane.setLayout(new BorderLayout(1, 1));  

       DefaultListModel listModel;

listModel = new DefaultListModel();


                                              
      

      
     //  pane.add(yourChoicesJLabel,BorderLayout.NORTH);  

      // yourChoicesJLabel.setFont(new Font("Dialog",Font.BOLD,20));  

   

       JPanel m=new JPanel();  

      bookChoices = new JList(bookChoicesItems);  

       m.add(bookChoices);  
m.setBorder(BorderFactory.createTitledBorder("Book List"));
      
      bookChoices.setVisibleRowCount(6);
      JScrollPane bookChoicesScrollPane = new JScrollPane(bookChoices);
    m.add(bookChoicesScrollPane);
       bookChoices.setFont(new Font("Courier",Font.BOLD,14));  

       pane.add(m,BorderLayout.WEST);  

          

      selectionB=new JButton("Add to Shopping Cart");  

       sHandler=new selectionButtonHandler();  

       selectionB.addActionListener(sHandler);  

       m.add(selectionB);  

      




       JPanel p=new JPanel();  
list = new JList(listModel);      // list = new JTextArea(20,50);  
//list.setVisibleRowCount(6);
JScrollPane listScroll= new JScrollPane(list);
         list.setVisibleRowCount( 5 );
        // list.setFixedCellWidth( 500 );
        // list.setFixedCellHeight(500 );
       p.add(listScroll);
        list.setSelectionMode( ListSelectionModel.MULTIPLE_INTERVAL_SELECTION );
        p.add( new JScrollPane(list));
   
        pane.add(p,BorderLayout.EAST); 
      p.add(list);  

      list.setFont(new Font("Courier",Font.BOLD,14));  
p.setBorder(BorderFactory.createTitledBorder("Shopping Cart"));
          
setVisible(true);
       checkB=new JButton("Check out");  

      cHandler=new checkOutButtonHandler();  

      checkB.addActionListener(cHandler);  

          

      clearB=new JButton("Clear");  

       crHandler=new clearButtonHandler();  

       clearB.addActionListener(crHandler);  

          

       removeB=new JButton("Remove");  

       rmHandler=new removeButtonHandler();  

       removeB.addActionListener(rmHandler);  

          

       p.add(removeB);  

       p.add(clearB);  

       p.add(checkB);  

    


     bill = new JTextArea(0,50);  

       p.add(bill);  

       bill.setFont(new Font("Courier",Font.BOLD,13));  

       pane.add(p,BorderLayout.CENTER);  

        

       setSize(900, 700);  

       setVisible(true);  

       setDefaultCloseOperation(EXIT_ON_CLOSE);  

    }  

       

  private void displayList()  
///
   {  
//
       //list.setEditable(false);  

      // list.setText("");  
list.setListData(new Object[0]);
     Object[] listArray = bookChoices.getSelectedValues();  

      list.setListData(listArray); 
/**
       for (int index = 0; index < listArray.length; index++)  

       {  

          list.append(bookChoicesItems[listArray[index]] + "\n");  

      }  

    

       list.append("\n");  
*/
   }  

       

    private void displayBill()  

    {   

       int[] listArray = bookChoices.getSelectedIndices();  

          

       double subTotal = 0;  

       double total;  

       double tax;

       bill.setEditable(false);  

       bill.setText("");  

    

       for (int index = 0; index < listArray.length; index++)  

           subTotal = subTotal + bookChoicesPrices[listArray[index]];  
         tax = (subTotal*0.06); 
       total = subTotal+(subTotal*0.06);  

   

       bill.append("SUBTOTAL    \t\t $" + String.format("%.2f", subTotal) + "\n\n");
       bill.append("TAX         \t\t $" + String.format("%.2f", tax) + "\n\n");
       bill.append("TOTAL       \t\t $" + String.format("%.2f", total) + "\n\n") ;          
                

        

    

           //Reset list array.  

     //  yourChoices.clearSelection();  

    

    //  repaint();  

    }  

       private void displayBills()

    {   
       double subTotal = 0;  

       double total;  

       double tax;

       bill.setEditable(false);  

       bill.setText("");  
       subTotal = subTotal;  
       tax = (subTotal*0.06); 
       total = subTotal+(subTotal*0.06);  
       bill.append("SUBTOTAL    \t\t $" + String.format("%.2f", subTotal) + "\n\n");
       bill.append("TAX         \t\t $" + String.format("%.2f", tax) + "\n\n");
       bill.append("TOTAL       \t\t $" + String.format("%.2f", total) + "\n\n") ;   
     
}
    private class checkOutButtonHandler implements ActionListener  

    {  

         public void actionPerformed(ActionEvent e)  

       {  

           //if(e.getActionCommand().equals("Check out"))  

 //Object[] selections = bookChoices.getSelectedValues();  

     //  list.setListData(selections); 


     // int[] listArray = bookChoices.getSelectedIndices();  

       //  list.setListData(listArray); 

      displayBill();  

      }     

    }  

      

  public class clearButtonHandler implements ActionListener  

    {  

       public void actionPerformed(ActionEvent e)  

       {  
       
 list.setListData(new Object[0]);
 displayBills();
 bookChoices.clearSelection();               
//repaint(); 
        }     

   }  

       

    private class selectionButtonHandler implements ActionListener  
  {  

        public void actionPerformed(ActionEvent e)  

       {  

            //if(e.getActionCommand().equals("Add to Shopping Cart"))  

          displayList();  
         
        }     

     }  

        
   private class removeButtonHandler implements ActionListener  

   {  

       public void actionPerformed(ActionEvent e)  

        { 
   /*        
int index = list.getSelectedIndex();
    listModel.remove(index);

    int size = listModel.getSize();

    if (size == 0) { //Nobody's left, disable firing.
       // removeButtonHandler.setEnabled(false);

    } else { //Select an index.
        if (index == listModel.getSize()) {
            //removed item in last position
            index--;
        }

        list.setSelectedIndex(index);
        list.ensureIndexIsVisible(index);
    }
}
*/                                
                                   int book = 0;              
                          // if( book > -1 )         
                            // {             
                             //bject[]listArray = bookChoices.getSelectedValues();           
                              listModel.remove(book); 
                            // bookChoices.remove(selectedIndex );
                             // list.setListData(listArray);        
                               
      }
      }
        //if(e.getActionCommand().equals("Remove"))
         
    //Object[] listArray = list.getSelectedValues(); 

      
  //    list.clearSelection(); 
//list.setListData(listArray); 
//list.clearSelection(bookChoices.getSelectedValue()) ;
                            
/*public void remove( int index )
{
for(int i=index; i<listArray.length()-1; i++);
{
listArray[i] = listArray[i+1];
}
listArray[listArray.length()-1] = null;
//System.out.println("Removed!");
}

  */     

  

                            //   private void removeFromCart( int index )     
                              // {         
                               //list.remove( index );         
                          //    list.setListData(list.getSelectedValues);
//

  public static void main(String[] args)  

   {  

      A19015 book = new A19015();  

    }  

} 


