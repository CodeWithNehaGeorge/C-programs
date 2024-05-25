import javax.swing.*; 
import java.awt.event.*; 
class Calculator extends JFrame implements ActionListener
{

JButton clear,triangle,rectangle,circle;
JTextField res,length,breadth,height,radius;
JLabel heading,l,b,h,ra,re;

Calculator()
{

super("Area Application"); 
clear = new JButton("Clear"); 
circle=new JButton("Circle");
triangle=new JButton("Triangle");
rectangle=new JButton("Rectangle");
heading=new JLabel("Area Calculator"); 
l=new JLabel("Length");
b=new JLabel("Breadth");
h=new JLabel("Height");
ra=new JLabel("Radius");
re=new JLabel("Result");
length=new JTextField(10); 
breadth=new JTextField(10);
height=new JTextField(10); 
radius=new JTextField(10);
res=new JTextField(10);
add(heading); 
add(clear); 
add(circle); 
add(rectangle); 
add(triangle);
add(length); 
add(breadth); 
add(height); 
add(radius);
add(res);
add(l);
add(b);
add(h);
add(ra);
add(re);
setLayout(null); 

clear.setBounds(325, 180, 100, 50); 
circle.setBounds(425, 180, 100,50 ); 
rectangle.setBounds(525, 180, 100, 50); 
triangle.setBounds(625, 180, 100, 50); 
heading.setBounds(20, 10, 100, 70);
l.setBounds(20,130,50,20);
length.setBounds(20,150,200,20);
b.setBounds(20,180,50,20);
breadth.setBounds(20,200,200,20);
h.setBounds(20,230,200,20);
height.setBounds(20,250,200,20);
ra.setBounds(20,80,50,20);
radius.setBounds(20,100,200,20);
re.setBounds(20, 280, 50, 20);
res.setBounds(20, 300, 200, 20);


setSize(500, 300); 
setVisible(true);

setDefaultCloseOperation(EXIT_ON_CLOSE);

clear.addActionListener(this);
circle.addActionListener(this);
rectangle.addActionListener(this);
triangle.addActionListener(this);


}

public void actionPerformed(ActionEvent ae)
{
Object source = ae.getSource(); 
double l,b,h,r,result;
try
{
    if(source==circle) 
    {   
        r=Double.parseDouble(radius.getText()); 
        result=3.14*r*r; 
        res.setText(Double.toString(result));

    }
    else if(source==rectangle)
    {
        l=Double.parseDouble(length.getText()); 
        b=Double.parseDouble(breadth.getText());
        result=l*b; 
        res.setText(Double.toString(result)); 
    }
    else if(source==triangle)
    {
        b=Double.parseDouble(breadth.getText()); 
        h=Double.parseDouble(height.getText()); 
        result=0.5*b*h; 
        res.setText(Double.toString(result));
    } 
    else if(source==clear)
    {
        length.setText("");
        breadth.setText("");
        height.setText("");
        radius.setText("");
        res.setText("");

    }

 }
 catch(Exception e)
 {
    res.setText("Enter valid values");
 }
}

public static void main(String args[])
{
 Calculator obj =new Calculator();
}
}