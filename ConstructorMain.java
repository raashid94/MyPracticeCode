
class Constructor1{
int length, breadth, height;


Constructor1(int l,int b,int h)
{
length=l;
breadth=b;
height=h;
}

Constructor1(int l)
{
length=l;
breadth=height=2;
}


Constructor1()
{
length=breadth=height=3;
}

int volume()
{
return length*breadth*height;
}

}



class ConstructorMain{
public static void main(String args[])
{
Constructor1 a= new Constructor1(3,4,5);
Constructor1 b= new Constructor1(4);
Constructor1 c= new Constructor1();


/*a.Constructor1(3,4,5);
b.Constructor1(3);
c.Constructor1();
*/


int vol;
vol=a.volume();
System.out.println("Box 1 volume="+vol);

vol=b.volume();
System.out.println("Box 2 volume="+vol);

vol=c.volume();
System.out.println("Box 3 volume="+vol);
}
}
