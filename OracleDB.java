import java.sql.*;
public class OracleDB
{
public static void main(String[] args) throws Exception
{
//class.forName("sun.jdbc.odbc.JdbcOdbcDriver");

Connection con= DriverManager.getConnection("jdbc:odbc:demodsn","scott","tiger");
if(con!=null)
{
System.out.println("Connection established");
}
else
{
System.out.println("Connection not established");
}
}
}
